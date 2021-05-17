#include <iostream>
#include <string>
#define ASCII_SIZE 256
using namespace std;

int main() {

	string someText = "First learn computer science and all the theory."
		"Next develop a programming style."
		"Then forget all that and just hack."
		" -- George Carrette";
	int count[ASCII_SIZE] = { 0 };
	int max = 0;
	
	char result; 
	int max_occurence = INT_MIN;
	for (int i = 0; i < someText.size(); i++)  //treat element's ASCII value as key and increment the count
		count[(int)someText[i]]++;
	
	for (int i = 0; i < someText.size(); i++) {
		if (count[someText[i]] > max_occurence) {
			result = someText[i];
		} 
	}
	
	cout << result << "\n";
	return 0;	
}
// Մուտքագրել տող։ Գտնել և տպել տողում ամենաշատ կրկնվող սիմվոլը։