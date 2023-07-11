#include <bits/stdc++.h>
using namespace std;

const int MM = 5005;
int N, A[MM];

int getMaxPrimeFactor(int n) {
	int p = 2;
	while (n % 2 == 0) n /= 2;

	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) p = i;
		while (n % i == 0) n /= i;
	}

	if (n > 2) p = n;
	return p;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];

	int mx = 0, mxV = 0;
	for (int i = 0; i < N; i++) {
		int mxPF = getMaxPrimeFactor(A[i]);
		if (mxPF > mx) {
			mxV = A[i];
			mx = mxPF;
		}
	}
	cout << mxV << "\n";

	return 0;
}