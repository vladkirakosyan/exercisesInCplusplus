#include <iostream>
#include <string>

struct Person {
	std::string _name;
	std::string _surname;
	std::string _email;
};

void Person_default_ctor(Person* th) {
	th->_name = "";
	th->_surname = "";
	th->_email = "";
}
void Person_parameter_ctor(Person* that, std::string name, std::string surname, std::string email) {
	that->_name = name;
	that->_surname = surname;
	that->_email = email;
}
void Person_copy_ctor(Person* that, const Person& obj) {
	that->_name = obj._name;
	that->_surname = obj._surname;
	that->_email = obj._email;
}
Person& operator=(Person* that, const Person& obj) {
	if (that == &obj) {
		return *that;
	}
	that->_name = obj._name;
	that->_surname = obj._surname;
	that->_email = obj._email;
	return *that;
}

void Person_dtor(Person * that) {
	return;
}
std::ostream& operator<<(std::ostream& os, const Person& obj) {
	os << "My name is " << obj._name << '\n';
	os << "My surname is " << obj._surname << '\n';
	os << "And email is " << obj._email << '\n';
	return os;
}

int main() {
	Person p1;
	Person_parameter_ctor(&p1, "George", "Washington", "george@gmail.com");
	Person p2;
	Person_copy_ctor(&p2, p1);
	std::cout << p2;
	
}

