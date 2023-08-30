#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& mp, pair<int, int> start) {
    queue<pair<int, int>> q; q.push(start);
    while (!q.empty()) {
        auto [c, r] = q.front(); q.pop();
        for (int i = -1; i <= 1; i += 2) {
            if (mp[c + i][r] != -1 && (mp[c + i][r] == 0 || mp[c + i][r] > mp[c][r] + 1)) {
                mp[c + i][r] = mp[c][r] + 1;
                q.push({c + i, r});
            }
        }
        for (int i = -1; i <= 1; i += 2) {
            if (mp[c][r + i] != -1 && (mp[c][r + i] == 0 || mp[c][r + i] > mp[c][r] + 1)) {
                mp[c][r + i] = mp[c][r] + 1;
                q.push({c, r + i});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vector<vector<int>> mp1(n + 2, vector<int>(m + 2, -1));
    vector<vector<int>> mp2(n + 2, vector<int>(m + 2, -1));
    pair<int, int> a, f, b;
    for (int c = 1; c <= n; c++) {
        for (int r = 1; r <= m; r++) {
            char x; cin >> x;
            if (x != 'X') {
                mp1[c][r] = mp2[c][r] = 0;
                if (x == 'A') a = {c, r};
                else if (x == 'F') f = {c, r};
                else if (x == 'B') b = {c, r};
            }
        }
    }

    bfs(mp1, a);
    bfs(mp2, f);

    if (mp1[f.first][f.second] == 0 || mp2[b.first][b.second] == 0) cout << -1 << "\n";
    else cout << mp1[f.first][f.second] + mp2[b.first][b.second] << "\n";

    return 0;
}