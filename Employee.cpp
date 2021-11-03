#include "Employee.h"

void Employee::setName(std::string name)
{
	_name = name;
}

void Employee::setSurname(std::string surname)
{
	_surname = surname;
}

void Employee::setAddress(std::string address)
{
	_address = address;
}

void Employee::setYearOfJoining(std::string yearofjoining)
{
	_yearofjoining = yearofjoining;
}

std::string Employee::getName() const
{
	return _name;
}

std::string Employee::getSurname() const
{
	return _surname;
}

std::string Employee::getAddress() const
{
	return _address;
}

std::string Employee::getYear() const
{
	return _yearofjoining;
}
