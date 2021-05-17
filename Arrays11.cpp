#include <iostream>
using namespace std;

int main() {

	int arr[] = { 11, 34, 122, -104, 567, 22, 435, 999, -22 };
	
	int sumOfOddnumbers = 0;
	for (int i : arr) {
		if (i % 2 == 1) {
			sumOfOddnumbers += i;
		}
	}
	
	cout << sumOfOddnumbers << "\n";
	return 0;	
}
// Տպել զանգվածի կենտ թվերի քանակը։