#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	int total = 0;
	for (int i = 0, x; i < N; i++) {
		cin >> x;
		total += x;
		cout << total << "\n";
	}
}