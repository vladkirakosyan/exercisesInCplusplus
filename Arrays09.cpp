#include <iostream>
using namespace std;

int main() {
	int arr[4][4] = { 
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};
	int sumOfDiagonals = 0;
	int arrSize = *(&arr + 1) - arr;
	
	for (int i = 0; i < arrSize; i++) {
		for (int j =0; j < arrSize; j++) {
			if (i == j) sumOfDiagonals += arr[i][j];
			if (i + j == 3) sumOfDiagonals += arr[i][j];
		}
	}

	cout << sumOfDiagonals << "\n";
	return 0;
}
// Տպել քառակուսային մատրիցի գլխավոր և օժանդակ անկյունագծերի
// տարրերի գումարները։