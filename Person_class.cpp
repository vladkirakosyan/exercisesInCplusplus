#include <iostream>
#include <string>

class Person {
public:
	Person() {}
	Person(std::string name, std::string surname, std::string email) {
		m_name = name;
		m_surname = surname;
		m_email = email;
	}
	Person(const Person& obj) {
		m_name = obj.m_name;
		m_surname = obj.m_surname;
		m_email = obj.m_email;
	}
	~Person() {}
	Person operator=(const Person& rhs) {
		if (this == &rhs) {
			return *this;
		}
		m_name = rhs.m_name;
		m_surname = rhs.m_surname;
		m_email = rhs.m_email;
		return *this;
	}
	void print() {
		std::cout << "name- " << m_name << std::endl;
		std::cout << "surname- " << m_surname << std::endl;
		std::cout << "email- " << m_email << std::endl;
	}
private:
	std::string m_name;
	std::string m_surname;
	std::string m_email;
};

int main() {
	Person a;
	Person b("Bob", "Marley", "aa");
	
	a.print();
	b.print();
}