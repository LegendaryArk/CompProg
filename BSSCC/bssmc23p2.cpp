#include <bits/stdc++.h>
using namespace std;

const int MM = 1e6;
int N;
int pre[MM];

int main() {
	cin >> N;
	cin >> pre[0];
	for (int i = 1; i < N; i++) {
		int a; cin >> a;
		pre[i] = pre[i - 1] + a;
	}

	if (pre[N - 1] == 0) { cout << 0 << "\n"; return 0; }
	for (int i = 1; i < N; i++) {
		if (pre[i - 1] == pre[N - 1] - pre[i]) {
			cout << i << "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
}