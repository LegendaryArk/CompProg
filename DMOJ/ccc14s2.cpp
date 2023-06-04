#include <bits/stdc++.h>
using namespace std;

int N;
vector<pair<string, string>> pairs;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		pairs.push_back({s, ""});
	}
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		pairs[i].second = s;
	}

	for (int i = 0; i < N; i++) {
		pair<string, string> p = pairs[i];
		if (p.first == p.second) { cout << "bad\n"; return 0; }

		bool found = false;
		for (int j = 0; j < N; j++) {
			if (j == i) continue;
			if (pairs[j].first == p.second) {
				found = true;
				if (pairs[j].second == p.first) break;
				cout << "bad\n";
				return 0;
			}
		}
		if (!found) { cout << "bad\n"; return 0; }
	}

	cout << "good\n";
}