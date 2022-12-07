#include <bits/stdc++.h>
using namespace std;

string s = "9780921418";

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string a, b, c;
	cin >> a >> b >> c;
	s += a + b + c;

	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		int n = s[i] - 48;
		if (i % 2 == 0) sum += n;
		else sum += n * 3;
	}
	cout << "The 1-3-sum is " << sum << "\n";
}