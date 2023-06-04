#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll N;

bool isPalindrome(ll n) {
	string s = to_string(n);
	string rev = s;
	//cout << s << "\t" << rev << "\n";
	reverse(rev.begin(), rev.end());
	return s == rev;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> N;

	int c = 0;
	for (ll i = 1; i < pow(10, N); i++) {
		if (isPalindrome(i)) c++;
	}
	cout << c % 1000000000 << "\n";
}