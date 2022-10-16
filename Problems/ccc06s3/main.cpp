#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int lineX1, lineY1, lineX2, lineY2;
int N;
int output;

bool lineIntersects(pii end1, pii end2) {
	int a1 = lineY2 - lineY1;
	int b1 = lineX1 - lineX2;
	int c1 = lineY1 * lineX2 - lineX1 * lineY2;

	int a2 = end2.second - end1.second;
	int b2 = end1.first - end2.first;
	int c2 = end1.second * end2.first - end1.first * end2.second;

	if (a1 * b2 - a2 * b1 == 0) {
		//if (b1 * c2 - b2 * c1 == 0) return true;
		return false;
	}

	double x = (double)(b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
	double y = (double)(a2 * c1 - a1 * c2) / (a1 * b2 - a2 * b1);

	int minX = max(min(lineX1, lineX2), min(end1.first, end2.first));
	int minY = max(min(lineY1, lineY2), min(end1.second, end1.second));

	int maxX = min(max(lineX1, lineX2), max(end1.first, end2.first));
	int maxY = min(max(lineY1, lineY2), max(end1.second, end2.second));

	if (minX <= x && x <= maxX && minY <= y && y <= maxY) return true;
	return false;
}

bool shapeIntersects(vector<pii> shape) {
	for (int i = 0; i < shape.size() - 1; i++)
		if (lineIntersects(shape[i], shape[i + 1])) return true;
	if (lineIntersects(shape.front(), shape.back())) return true;
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> lineX1 >> lineY1 >> lineX2 >> lineY2;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int shapeNum;
		cin >> shapeNum;
		vector<pii> corners;
		for (int j = 0; j < shapeNum; j++) {
			int cx, cy;
			cin >> cx >> cy;
			corners.push_back({ cx, cy });
		}
		if (shapeIntersects(corners)) output++;
	}

	cout << output << "\n";
}