#include <iostream>
#include <cmath>
using namespace std;

int N;

bool isPrime(int n) {
	if (n == 1) return false;

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> N;
	while (true) {
		if (isPrime(N)) {
			cout << N << "\n";
			break;
		}
		N++;
	}
}