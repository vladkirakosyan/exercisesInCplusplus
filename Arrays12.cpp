#include <iostream>
using namespace std;

int main() {

	int arr[] = { 11, 34, 122, -104, 567, 22, 435, 999, -22 };
	
	int sumOfEvennumbers = 0;
	for (int i : arr) {
		if (i % 2 == 0) {
			sumOfEvennumbers += i;
		}
	}
	
	cout << sumOfEvennumbers << "\n";
	return 0;	
}
// Տպել զանգվածի զույգ թվերի քանակը։