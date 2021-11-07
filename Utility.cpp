#include <iostream>
#include <string>
#include <regex>

class Utility {
public:
	static bool isNumber(const std::string& num);
	static bool isInteger(const std::string& num);
	static bool isFloat(const std::string& num);
	static bool isBoolean(const std::string& num);
	static bool isEmail(const std::string& num);
	static bool isURL(const std::string& num);
};

bool Utility::isNumber(const std::string& num)
{
	int counter = 0;
	for (int i = 0; i < num.size(); ++i) {
		if (!(num[0] == '+' || num[0] == '-' || num[0] >= 49 && num[0] <= 57)) {
			return 0;
		}
		if (!(num[i] >= 48 && num[i] <= 57 || num[i] == '.')) {
			return 0;
		}
		if (num[i] == '.') ++counter;
	}
	if (counter > 1) return 0;
	return 1;
}
bool Utility::isInteger(const std::string& num)
{
	for (int i = 0; i < num.size(); ++i) {
		if (!(num[0] == '+' || num[0] == '-' || num[0] >= 49 && num[0] <= 57)) {
			return 0;
		}
		if (!(num[i] >= 48 && num[i] <= 57)) {
			return 0;
		}
	}
	return 1;
}
bool Utility::isFloat(const std::string& num)
{
	int counter = 0;
	for (int i = 0; i < num.size(); ++i) {
		if (!(num[0] == '+' || num[0] == '-' || num[0] >= 49 && num[0] <= 57)) {
			return 0;
		}
		if (!(num[i] >= 48 && num[i] <= 57 || num[i] == '.')) {
			return 0;
		}
		if (num[i] == '.') ++counter;
	}
	if (counter > 1) return 0;
	return 1;
}
bool Utility::isBoolean(const std::string& num)
{
	if (num == "" || num == "0" || num == "1") { 
		return true; 
	}
	else {
		return false;
	}
}

bool Utility::isEmail(const std::string& num)
{
	std::regex reg("(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9-.]+$)");
	return regex_search(num, reg);
}
bool Utility::isURL(const std::string& num)
{
	std::regex reg("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
	return regex_search(num, reg);
}
int main() {
	
	std::string number;
	std::cout << "Insert number, please.\n";
	std::cin >> number;

	std::cout << Utility::isNumber(number) << std::endl;
	std::cout << Utility::isInteger(number) << std::endl;

	std::cout << "Insert Url, please.\n";
	std::string url;
	std::cin >> url;
	std::cout << Utility::isURL(url);

	std::cout << "Insert email, please.\n";
	std::string email;
	std::cin >> email;
	std::cout << Utility::isEmail(email);

	
	return 0;
}