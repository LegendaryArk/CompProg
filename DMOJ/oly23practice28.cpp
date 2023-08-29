#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int a[n];
	set<int> st;
	for (int i = 0; i < n; i++) {
		cin >> a[n];
		st.insert(a[n]);
	}

	if (st.size() == n) cout << "YES\n";
	else cout << "NO\n";


	return 0;
}