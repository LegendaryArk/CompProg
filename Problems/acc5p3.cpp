#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

bool compare(pii a, pii b) {
	return a.first - a.second > b.first - b.second;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;
	vector<pii> costs(N);
	for (int i = 0; i < N; i++) {
		cin >> costs[i].first >> costs[i].second;
	}

	sort(costs.begin(), costs.end(), compare);
	
	ll totalCost = 0;
	for (int i = 0; i < N; i++) {
		if (i < K) totalCost += costs[i].second;
		else totalCost += costs[i].first;
	}

	cout << totalCost << "\n";
}