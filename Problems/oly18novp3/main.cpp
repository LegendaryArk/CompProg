#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> a;

bool check(long n) {
	int cnt = 1;
	long sum = 0;
	for (int i = 0; i < N; i++) {
		if (sum + a[i] > n) { sum = a[i]; cnt++; }
		else sum += a[i];
	}

	return cnt <= M;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	long lo = 0, hi = 0;
	for (int i = 0, A; i < N; i++) {
		cin >> A;
		a.push_back(A);
		lo = max(lo, (long) a[i]);
		hi += a[i];
	}

	long ans = 0;
	while (lo <= hi) {
		long mid = (lo + hi) / 2;
		if (check(mid)) { ans = mid; hi = mid - 1; }
		else lo = mid + 1;
	}

	cout << ans << "\n";
}