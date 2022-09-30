#include <iostream>
using namespace std;

int S, R;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> S >> R;
	if (S * S > 3.14 * R * R) {
		cout << "SQUARE\n";
	} else {
		cout << "CIRCLE\n";
	}
}