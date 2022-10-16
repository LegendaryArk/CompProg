#include <bits/stdc++.h>

using namespace std;

const int LEN = 10000;

int N, Q;
bool bulbs[LEN];
int seg[4 * LEN];

void update(int pos, int val, int l, int r, int i) {
	if (l > pos || r < pos) return;
	if (l == r) {
		seg[pos] = val;
		return;
	}
	update(pos, val, l, (l + r) / 2, 2 * i + 1);
	update(pos, val, (l + r) / 2 + 1, r, 2 * i + 2);
	seg[i] = seg[2 * i + 1] + seg[2 * i + 2];
}

int query(int begin, int end, int l, int r, int i) {
	if (l > end || r < end) return 0;
	if (l >= begin && r <= end) return seg[i];
	return query(begin, end, l, (l + r) / 2, 2 * i + 1) + query(begin, end, (l + r) / 2 + 1, r, 2 * i + 2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> Q;

	for (int i = 0; i < Q; i++) {
		string action;
		cin >> action;
		if (action == "TOGGLE") {
			int x;
			cin >> x;
			bulbs[x] = !bulbs[x];
			update(x, bulbs[x], 0, 0, 0);
		} else if (action == "ON") {
			int l, r;
			cin >> l >> r;
			cout << query(l, r, 0, 0, 0);
		} else {
			int l, r;
			cin >> l >> r;
			cout << N - query(l, r, 0, 0, 0);
		}
	}
}