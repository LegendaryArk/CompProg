#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	int D;
	string X;
	cin >> D >> X;

	for (int i = 0; i < X.length() - 1; i++) {
		if (X[i] < X[i + 1]) {
			char temp = X[i];
			X[i] = X[i + 1];
			X[i + 1] = temp;
			break;
		}
	}
	cout << X << "\n";
}