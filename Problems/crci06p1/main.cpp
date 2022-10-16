#include <bits/stdc++.h>
using namespace std;

int N, E;
int K;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> N >> E;
	vector<set<int>> villagers(N);
	int numSong = 0;
	for (int i = 0; i < E; i++) {
		cin >> K;
		vector<int> evening;
		for (int j = 0; j < K; j++) {
			int k;
			cin >> k;
			evening.push_back(--k);
		}

		sort(evening.begin(), evening.end());
		if (evening[0] == 0) {
			numSong++;
			for (int v : evening) {
				villagers[v].insert(numSong);
			}
		} else {
			for (int v : evening) {
				for (int s : villagers[v]) {
					for (int vi : evening) {
						villagers[vi].insert(s);
					}
				}
			}
		}
	}

	cout << "1\n";
	for (int i = 1; i < N; i++)
		if (villagers[i].size() == villagers[0].size()) cout << (i + 1) << "\n";
}