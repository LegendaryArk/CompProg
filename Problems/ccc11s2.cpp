#include <bits/stdc++.h>
using namespace std;

int N;
vector<char> ans;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		char a; cin >> a;
		ans.push_back(a);
	}

	int c = 0;
	for (int i = 0; i < N; i++) {
		char a; cin >> a;
		if (a == ans[i]) c++;
	}

	cout << c << "\n";
}