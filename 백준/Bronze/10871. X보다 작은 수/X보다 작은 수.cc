#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;

	cin >> a >> b;

	while (a-- > 0) {
		cin >> c;
		if (c < b) cout << c << ' ';
	}

}