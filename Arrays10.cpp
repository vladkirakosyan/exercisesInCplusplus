#include <iostream>
#include<vector>
using namespace std;

vector<int>arr2;
vector<int>arr3;

int main() {

	int arr[4][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};
	int arrSize = *(&arr + 1) - arr;

	// հիմա ստեղծվում են մեր անկյունագծային տարրերով զանգվածներ
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0, d = 0; j < arrSize, d < 4; j++, ++d) {
			if (i == j) {
				arr2.push_back(arr[i][j]);
			}
			if (i + j == 3) {
				arr3.push_back(arr[i][j]);
			}
		}
	}

	// հիմա փոխում ենք զանգվածի անկյունագծային տարրերի արժեքները
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0, d = 0; j < arrSize, d < 4; ++j, ++d) {
			if (i == j) {
				arr[i][j] = arr3[d];
				//cout << arr[i][j] << "\n";
			}
			if (i + j == 3) {
				arr[i][j] = arr2[d];
				//cout << arr[i][j] << "\n";
			}
		}
	}
  
	return 0;
}
// Քառակուսային մատրիցի գլխավոր և օժանդակ անկյունագծերի
// տարրերի արժեքները տեղերով փոխել