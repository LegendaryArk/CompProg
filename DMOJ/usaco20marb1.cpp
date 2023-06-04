#include <bits/stdc++.h>
using namespace std;

int N;
string s;
vector<int> d;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> s;
	int mxD = 0;
	d.push_back(1);
	cout << 1 << " ";
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == '1') d.push_back(1);
		else d.push_back(d[i - 1] + 1);
		if (d[i] > mxD) mxD = d[i];
		cout << d[i] << " ";
	}
	cout << "\n";

	int c = 0;
	for (int i = 0; i < d.size(); i++) {
		if (d[i] == mxD) {
			s[i - mxD / 2] = '1';
			c++;
		}
		if (c == 2) break;
	}
	cout << s << "\n";

	int mnD = INT_MAX;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1' || i == 0) d[i] = 1;
		else d[i] = d[i - 1] + 1;
		cout << d[i] << " ";
		if (d[i] < mnD && d[i] > d[i + 1]) mnD = d[i];
	}
	cout << "\n";
	cout << mnD << "\n";
}