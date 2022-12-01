#include <bits/stdc++.h>
using namespace std;

int N;
set<int> factors;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 5; i++) {
		factors.clear();

		cin >> N;
		double end = sqrt(N);
		for (int j = 2; j <= end; j++) {
			if (N % j == 0) factors.insert(j);
			while (N % j == 0) N /= j;
		}
		if (factors.size() >= 3) cout << "valid\n";
		else cout << "not\n";
	}
}