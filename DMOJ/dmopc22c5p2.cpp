#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N; ll numNeg;
vector<ll> a;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	numNeg = 1LL * (N + 1) * N / 4;
	for (int i = 1; i <= N; i++) {
		int num = N - i + 1;
		if (num <= numNeg) {
			a.push_back(-N);
			numNeg -= num;
		} else {
			a.push_back(-numNeg);
			break;
		}
	}
	while (a.size() < N) a.push_back(1);

	for (int i = 0; i < N; i++) cout << a[i] << " \n"[i == N - 1];

	return 0;
}