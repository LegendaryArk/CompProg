#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;
	unordered_map<string, int> types;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		types.insert({s, i});
	}

	int M; cin >> M;
	vector<vector<int>> problems(N);
	for (int i = 0; i < M; i++) {
		string s; cin >> s;
		problems[types[s]].push_back(i);
	}

	for (int i = 0; i < N; i++) {
		for (int p : problems[i]) cout << p + 1 << "\n";
	}

	return 0;
}