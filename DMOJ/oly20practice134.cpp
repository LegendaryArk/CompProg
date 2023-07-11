#include <bits/stdc++.h>
using namespace std;

const int MM = 1e5+5;
int N, nums[MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) cin >> nums[i];

	int mx = 1, curr = 1;
	for (int i = 1; i < N; i++) {
		if (nums[i] <= nums[i - 1]) curr++;
		else {
			mx = max(mx, curr);
			curr = 1;
		}
	}
	mx = max(mx, curr);
	cout << mx << "\n";

	return 0;
}