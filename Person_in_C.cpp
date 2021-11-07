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