#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 5; i++) {
		string hall;
		cin >> hall;
		int pos = 0;
		for (int j = 0; j < hall.size(); j++) {
			if (hall[j] == '*') pos = j;
		}

		for (int j = 0; j < 5; j++) {
			char d;
			cin >> d;
			if (d == 'R') pos++;
			else if (d == 'L') pos--;
			if (pos < 0) pos = 0;
			else if (pos > hall.size() - 1) pos = hall.size() - 1;
		}

		for (int j = 0; j < pos; j++) cout << ".";
		cout << "*";
		for (int j = pos + 1; j < hall.size(); j++) cout << ".";
		cout << "\n";
	}
}