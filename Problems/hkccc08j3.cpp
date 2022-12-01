#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> names;
vector<int> nums;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		string name;
		int num;
		cin >> name >> num;
		names.push_back(name);
		nums.push_back(num);
	}

	cin >> M;
	vector<int> freq(M);
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		for (int j = 0; j < nums.size(); j++) {
			if (nums[j] == num) freq[j]++;
		}
	}

	int maxFreq = 0, maxInd = 0;
	for (int i = 0; i < freq.size(); i++) {
		if (freq[i] > maxFreq || (freq[i] == maxFreq && nums[i] < nums[maxInd])) {
			maxFreq = freq[i];
			maxInd = i;
		}
	}

	cout << names[maxInd] << "\n";
}