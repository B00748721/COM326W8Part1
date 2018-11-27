#include "Person.h"



Person::Person() {
	name_ = "A";
	email_ = "None";
}

Person::Person(std::string name, std::string email) {
	name_ = name;
	email_ = email;

}

std::string Person::GetName() const {
	return name_;
}

void Person::SetName(std::string name) {
	name_ = name;

}

std::string Person::GetEmail() const {
	return email_;
}

void Person::SetEmail(std::string email) {
	email_ = email;
}

std::string Person::ToString() {
	return "Name: " + name_ + "\nEmail: " + email_;
}

