#include <bits/stdc++.h>
using namespace std;

int N, M;
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> M;
		getline(cin, s);
		s = s.substr(1);
		cout << i << " ";
		for (int j = 0; j < M - 1; j++) cout << s[j];
		for (int j = M; j < s.size(); j++) cout << s[j];
		cout << "\n";
	}
}