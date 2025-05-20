#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int data[9];
	for (int i = 0; i < 9; i++) cin >> data[i];

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (data[i] > data[j]) {
				int temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}

	int height = 0;
	int a = 0, b = a + 1;

	while (height != 100) {

		for (int i = 0; i < 9; i++) {
			if (i != a && i != b) height += data[i];
		}

		if(height == 100) {
			for (int i = 0; i < 9; i++) {
				if (i != a && i != b) cout << data[i] << '\n';
			}
		}
		else {
			height = 0;
			
			if (b < 8) {
				b++;
			}
			else {
				a++;
				b = a + 1;
			}
		}
	}
}