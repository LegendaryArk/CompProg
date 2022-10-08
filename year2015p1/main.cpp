#include "bits/stdc++.h"
using namespace std;

string templ;
int N;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	getline(cin, templ);
	cin >> N;
	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		for (int i = 0; i < templ.size(); i++) {
			if (templ[i] == '>') cout << name;
			else cout << templ[i];
		}
		cout << "\n";
	}
}