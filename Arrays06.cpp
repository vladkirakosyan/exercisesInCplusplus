#include <iostream>
using namespace std;

int main() {
	int arr1[] = { 12, -34, 122, 22, -22 };
	int arr2[] = { 2, 43, 12, 16, 101 };

 	int arrSize = *(&arr1 + 1) - arr1;

	for (int i = 0; i < arrSize; ++i) {
		arr1[i] = arr1[i] + arr2[i];
		cout << arr1[i] << "\n";
	}

	return 0;
}
// Մուտքագրել երկու զանգվածներ, տպել դրանց գումարը։