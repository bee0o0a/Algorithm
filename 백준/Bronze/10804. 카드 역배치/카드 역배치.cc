#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

using namespace std;

void reverse(int a, int b, int* arr) {
	int size = (b - a) / 2;

	while (size-- >= 0) {
		swap(arr[a - 1], arr[b - 1]);
		a++;
		b--;
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[20];

	for (int i = 0; i < 20; i++) arr[i] = i+1;

	int count = 10;

	while (count-- > 0) {
		int a, b;
		cin >> a >> b;
		reverse(a, b, arr);
	}

	for (int i = 0; i < 20; i++) cout << arr[i] << " ";
}