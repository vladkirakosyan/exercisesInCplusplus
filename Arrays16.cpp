#include <iostream>
using namespace std;

int main() {

	int arr[] = { 11, 34, 122, -1 };
	
	int total_value = 0;
	int product_value = 1;

	for (int i : arr) {
		total_value += i;
		product_value *= i;
	}
	int ARITHMETIC_MEAN = (total_value + product_value) / 2;
	cout << total_value << "\n";
	cout << product_value << "\n";
	cout << ARITHMETIC_MEAN << "\n"; 
	return 0;
}
// Գտնել և տպել զանգվածի տարրերի գումարի ու արտադրյալի միջին
// թվաբանականը։
