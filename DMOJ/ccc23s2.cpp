#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MM = 5005;
int N, h[MM], a[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++) cin >> h[i];

	for (int i = 1; i <= (7 - 2) * 2 + 1; i++) {
		int c[N];
		int l, r;
		if (i % 2 == 0) l = i / 2, r = l + 1;
		else l = r = ceil(i / 2) + 1;

		for (int j = 1; j <= N / 2; j++) {
			c[(l + r) / 2] = c[(l + r) / 2 - 1] + abs(h[l] - h[r]);
			l--; r++;
			if (l < 1 || r > N) break;
		}

		for (int j = 0; j < N; j++) a[j] = min(a[j], c[j]);
	}

	for (int i = 0; i < N; i++) cout << a[i] << " ";
	cout << "\n";

	return 0;
}