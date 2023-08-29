#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, l; cin >> n >> l;
	string s[n];
	for (int i = 0; i < n; i++) cin >> s[i];
	sort(s, s + n, greater());

	for (int i = 0; i < n; i++) cout << s[i];
	cout << "\n";

	return 0;
}