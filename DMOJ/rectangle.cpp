#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int N;
vector<pii> points;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0, x, y; i < N; i++) {
		cin >> x >> y;
		points.push_back({x, y});
	}

	
}