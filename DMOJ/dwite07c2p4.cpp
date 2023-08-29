#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 5; i++) {
		string s;
		cin >> s;

		bool isBalanced = true;
		stack<char> w;
		for (char c : s) {
			if (c == '(' || c == '{' || c == '[') w.push(c);
			else if (c == ')') {
				if (w.empty()) {
					isBalanced = false;
					break;
				}
				if (w.top() != '(') {
					w.pop();
					isBalanced = false;
					break;
				}
				w.pop();
			} else if (c == '}') {
				if (w.empty()) {
					isBalanced = false;
					break;
				}
				if (w.top() != '{') {
					w.pop();
					isBalanced = false;
					break;
				}
				w.pop();
			} else if (c == ']') {
				if (w.empty()) {
					isBalanced = false;
					break;
				}
				if (w.top() != '[') {
					w.pop();
					isBalanced = false;
					break;
				}
				w.pop();
			}
		}

		if (!isBalanced || !w.empty()) cout << "not balanced\n";
		else cout << "balanced\n";
	}

	return 0;
}