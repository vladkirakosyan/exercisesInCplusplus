#include <iostream>
#include<vector>
using namespace std;

int main() {
	int arr[] = { 12, 34, 122, -101, 567, 22, 435, 999, -22 };
	vector<int> arr2;

	int arrSize = *(&arr + 1) - arr;

	for (short int i = arrSize - 1; i >= 0; i--)  {
		arr2.push_back(arr[i]);
	}
	for (short int j = 0; j <= arrSize - 1; j++) {
		cout << arr2[j] << "\n";
	}
	
	return 0;
}

// Մուտքագրել զանգվածի տարրերի արժեքները։ Տպել զանգվածի
// տարրերը հակառակ հերթականությամբ։