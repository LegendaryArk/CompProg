#include <bits/stdc++.h>
using namespace std;

const int MM = 1e5 + 5;
int N;
int a[MM], b[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) cin >> a[i];
	for (int i = 0; i < N; i++) cin >> b[i];

	int sum1 = 0, sum2 = 0;
	int maxGame = 0;
	for (int i = 0; i < N; i++) {
		sum1 += a[i];
		sum2 += b[i];
		if (sum1 == sum2) maxGame = i + 1;
	}
	cout << maxGame << "\n";

	return 0;
}