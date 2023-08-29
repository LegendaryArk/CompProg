#include <bits/stdc++.h>
using namespace std;

int T, N;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (cin >> T; T--; ) {
		cin >> N;
		vector<int> cars(N);
		for (int i = 0; i < N; i++) {
			cin >> cars[i];
		}

		stack<int> branch;
		int n = 1;
		for (int i = N - 1; i >= 0; i--) {
			branch.push(cars[i]);
			while (!branch.empty() && branch.top() == n) {
				branch.pop();
				n++;
			}
		}

		cout << (branch.empty() ? "Y\n" : "N\n");
	}

	return 0;
}