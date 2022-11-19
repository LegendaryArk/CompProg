#include <bits/stdc++.h>
using namespace std;

int W, N;
vector<int> weights, bridge;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> W >> N;
	for (int i = 0, w; i < N; i++) {
		cin >> w;
		weights.push_back(w);
	}

	int c = 0;
	for (int w : weights) {
		bridge.push_back(w);

		int total = 0, start = bridge.size() - 4;
		if (bridge.size() < 4) start = 0;
		for (int i = start; i < bridge.size(); i++) total += bridge[i];
		if (total > W) break;

		c++;
	}

	cout << c << "\n";
}