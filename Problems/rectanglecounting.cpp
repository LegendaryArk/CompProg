#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1e6 + 5;

int N;
int a, b, c, d;

vector<pair<int, int>> be[MAX], en[MAX];

int seg[MAX * 4][2];

void update(int pos, int val, int l, int r, int i, int t) {
	if (l > pos || r < pos) return;
	if (l == r) {
		seg[i][t] += val;
		return;
	}
	update(pos, val, l, (l + r) / 2, 2 * i + 1, t);
	update(pos, val, (l + r) / 2, r, 2 * i + 2, t);
	seg[i][t] = seg[2 * i + 1][t] + seg[2 * i + 2][t];
}

int query(int begin, int end, int l, int r, int i, int t) {
	if (l > end || r < begin) return 0;
	if (l >= begin && r <= end) return seg[i][t];
	return query(begin, end, l, (l + r) / 2, 2 * i + 1, t) + query(begin, end, (l + r) / 2 + 1, r, 2 * i + 2, t);
}

ll output;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> --a >> --b >> --c >> --d;
		be[a].push_back({ d, b });
		en[c].push_back({ d, b });
	}

	for (int i = 0; i < MAX; i++) {
		for (auto& [j, k] : en[i]) {
			update(j, -1, 0, MAX - 1, 0, 0);
			update(k, -1, 0, MAX - 1, 0, 1);
		}
		for (auto& [j, k] : be[i]) {
			output += query(k + 1, MAX - 1, 0, MAX - 1, 0, 0);
			output -= query(j, MAX - 1, 0, MAX - 1, 0, 1);
			update(j, 1, 0, MAX - 1, 0, 0);
			update(k, 1, 0, MAX - 1, 0, 1);
		}
	}

	cout << output;
}