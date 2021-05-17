#include <iostream>
using namespace std;

int main() {
	int arr[] = { 12, 34, 122, -101, 567, 22, 435, 999, -22 };

	int min = arr[0];
	for (short int i : arr) {
		if (min > i) {
			min = i;
		}
	};

	int arrSize = *(&arr + 1) - arr;

	for (short int i = 0; i < arrSize; ++i) {
		if (min == arr[i]) {
			cout << i << endl;
			break;
		}
	};	
	return 0;
}

// Մուտքագրել զանգվածի տարրերի արժեքները։ Գտնել և տպել
// նվազագույն արժեքով տարրի ինդեքսը։