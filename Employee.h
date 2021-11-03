#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
class Employee {
public:
	void setName(std::string name);
	void setSurname(std::string surname);
	void setAddress(std::string address);
	void setYearOfJoining(std::string yearofjoining);

	std::string getName() const;
	std::string getSurname() const;
	std::string getAddress() const;
	std::string getYear() const;
private:
	std::string _name;
	std::string _surname;
	std::string _address;
	std::string _yearofjoining;
};

#endif // !EMPLOYEE_H