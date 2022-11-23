#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	unordered_map<char, string> map = {
		{'b', "bac"},
		{'c', "cad"},
		{'d', "def"},
		{'f', "feg"},
		{'g', "geh"},
		{'h', "hij"},
		{'j', "jik"},
		{'k', "kil"},
		{'l', "lim"},
		{'m', "mon"},
		{'n', "nop"},
		{'p', "poq"},
		{'q', "qor"},
		{'r', "ros"},
		{'s', "sut"},
		{'t', "tuv"},
		{'v', "vuw"},
		{'w', "wux"},
		{'x', "xuy"},
		{'y', "yuz"},
		{'z', "zuz"},
	};

	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (map.contains(str[i]))
			cout << map[str[i]];
		else
			cout << str[i];
	}
	cout << "\n";
}