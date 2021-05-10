#include <iostream>
enum YourCards { 
	John = 43, 
	Jack = 44, 
	Queen, 
	King 
};

int main() {
	using namespace std;
	cout << "Ace is " << John << endl;
	cout << "Jack is " << Jack << endl;
	cout << "Queen is " << Queen << endl;
	cout << "King is " << King << endl;

}
// John == 43, Jack == 44, Queen == 45, King == 46