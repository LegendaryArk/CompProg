#include <bits/stdc++.h>
using namespace std;

const int MM = 1e5+5;
int n, h[MM], w[MM];

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i <= n; i++) cin >> h[i];
	for (int i = 0; i < n; i++) cin >> w[i];

	double a = 0;
	for (int i = 0; i < n; i++) a += w[i] * ((h[i] + h[i + 1]) / 2.0);
	cout << fixed << a << "\n";

	return 0;
}