#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n = 1;
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll l = 1, r = 2e9 + 2;
	while (true) {
		n = (l + r) / 2;
		cout << n << endl;
		cin >> s;
		if (s == "OK") break;

		if (s == "SINKS") l = n + 1;
		else if (s == "FLOATS") r = n - 1;
	}

	return 0;
}