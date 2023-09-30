#include <bits/stdc++.h>
using namespace std;

const int MM = 1e6+5;
int N, H, P, a[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> H >> P;
	for (int i = 1; i <= N; i++) cin >> a[i];

	sort(begin(a), end(a));

	int p = 0, c = 0;
	for (int i = 1; i <= N; i++) {

		p = a[i];

	}

	cout << c << "\n";

	return 0;
}