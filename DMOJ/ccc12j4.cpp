#include <bits/stdc++.h>
using namespace std;

int k;
string str;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> k >> str;

	for (int i = 1; i <= str.size(); i++) {
		int s = 3 * i + k;
		char c = str[i - 1] - s;
		if (c < 65) c = 90 - 64 + c;
		cout << c;
	}
	cout << "\n";
}