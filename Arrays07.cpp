#include <iostream>
using namespace std;

int main() {
	int arr[4][4] = { 
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};

	int arrSize = *(&arr + 1) - arr;
	
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
			if (j == i) cout << arr[i][i] << endl;
		}
	}
	
	return 0;
}
// Տպել քառակուսային մատրիցի գլխավոր անկյունագծի տարրերը։