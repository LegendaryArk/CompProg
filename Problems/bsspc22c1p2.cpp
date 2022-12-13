#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	for (int i = 0, a, b; i < N; i++) {
		cin >> a >> b;
		if (a % 10 == 7 && a % 100 != 17 && b % 100 == 11) {
			cout << "YES\n";
		} else if (b % 10 == 7 && b % 100 != 17 && a % 100 == 11) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}