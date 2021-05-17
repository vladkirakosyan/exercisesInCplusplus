#include <iostream>
#include<vector>
using namespace std;

vector<int> arr2;
int main() {
	int arr[4][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};
	int arrSize = *(&arr + 1) - arr;
	
	for (int i = 0; i < arrSize; ++i) {
		for (int j = 0; j < arrSize; ++j) {
			arr2.push_back(arr[i][j]);
		}
	}
	
	//cout << arr2.size() << "\n";
	return 0;	
}
// Մատրիցի բոլոր տարրերը արտագրել միաչափ զանգվածի մեջ։ Տպել արդյունքը