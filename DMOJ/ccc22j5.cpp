#include <bits/stdc++.h>
using namespace std;

const int MM = 105;
int N, T, r[MM], c[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> T;
	for (int i = 0; i < T; i++) cin >> r[i] >> c[i];
	r[T] = c[T] = 0; r[T + 1] = c[T + 1] = N + 1;

	int ans = 0;
	for (int i = 0; i < T + 3; i++) {
		for (int j = i + 1; j < T + 3; j++) {
			int left = min(c[i], r[j]), right = max(c[i], r[j]);

			vector<int> middle;
			for (int k = 0; k < T + 3; k++) {
				if (left < c[k] && right > c[k]) middle.push_back(r[k]);
			}

			middle.push_back(0); middle.push_back(N + 1);
			sort(middle.begin(), middle.end());

			for (int k = 1; k < middle.size(); k++)  {
				int height = middle[k] - middle[k - 1] - 1, width = right - left - 1;
				ans = max(ans, min(width, height));
			}
		}
	}
	cout << ans << "\n";

	return 0;
}