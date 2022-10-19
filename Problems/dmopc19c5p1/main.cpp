#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	string item;
	getline(cin, item);
	vector<string> items;
	for (int i = 0; i < N; i++) {
		getline(cin, item);
		items.push_back(item);
	}

	int c = 0;
	for (int i = 0; i < M; i++) {
		int T;
		cin >> T;
		string r;
		getline(cin, r);
		bool canComplete = true;
		for (int j = 0; j < T; j++) {
			getline(cin, r);
			if (find(items.begin(), items.end(), r) == items.end())
				canComplete = false;
		}

		if (canComplete) c++;
	}

	cout << c << "\n";
}