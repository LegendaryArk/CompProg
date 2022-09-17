#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int N;
long L, R, Y;
vector<long> pos;
vector<pii> wedges;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	cin >> L >> R >> Y;
	for (int i = 0; i < N; i++) {
		int x, v, h;
		cin >> x >> v >> h;
		pos.push_back(x);
		wedges.push_back({ v, h });
	}

	for (int i = 0; i < N + 1; i++) {
		int output;
		
	}
}