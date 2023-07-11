#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	while (N--) {
		int a; cin >> a;

		int sum = 0;
		for (int j = 1; j < sqrt(a); j++)
			if (a % j == 0)	sum += j * j + (a / j) * (a / j);
		if (fmod(a, sqrt(a)) == 0) sum += a;
		cout << sum << "\n";
	}

	return 0;
}