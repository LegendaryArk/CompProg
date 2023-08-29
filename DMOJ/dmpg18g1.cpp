#include <bits/stdc++.h>
using namespace std;

int N, K;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;
	vector<bool> empty(N + 1);
	for (int i = 1; i <= K; i++) {
		int k; cin >> k;
		empty[k] = true;
	}
	vector<int> kids(N + 1);
	for (int i = 1; i <= K + 1; i++) {
		int k; cin >> k;
		kids[k] = i;
	}

	stack<int> stk;
	for (int i = 1; i <= N; i++) {
		if (kids[i] > 0) stk.push(kids[i]);
		if (empty[i]) {
			if (!stk.empty()) {
				stk.pop();
				empty[i] = false;
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		if (empty[i]) {
			if (!stk.empty()) {
				stk.pop();
				empty[i] = false;
			}
		}
	}

	cout << stk.top() << "\n";

	return 0;
}