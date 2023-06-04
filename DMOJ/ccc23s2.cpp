#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MM = 5005;
int N, h[MM];
ll dp[MM][MM];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++) cin >> h[i];

	if (N % 2 == 0) {
		for (int i = 2; i <= N - 1; i++) {
			for (int j = i; j >= 0; j--) {
				
			}
		}
	} else {

	}

	return 0;
}