#include <iostream>
using namespace std;

int main() {
	int arr[] = { 12, 34, 122, -101, 567, 22, 435, 999, -22 };
	
	int max = arr[0];
	for (short int i : arr) {
		if (max < i) {
			max = i;
		}
	};
	int min = arr[0];
	for (short int i : arr) {
		if (min > i) {
			min = i;
		}
	};

	cout << min + max << endl;	
	return 0;
}

// Մուտքագրել զանգվածի տարրերի արժեքները։ Տպել զանգվածի
// առավելագույն և նվազագույն արժեքների գումարը։