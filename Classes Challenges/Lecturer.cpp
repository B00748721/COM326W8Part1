#include "Lecturer.h"



Lecturer::Lecturer() {
	staffID_ = "1";
	subjectArea_ = "Being cool";
}

Lecturer::Lecturer(std::string name, std::string email, std::string staffID, std::string subjectArea) {
	name_ = name;
	email_ = email;
	staffID_ = staffID;
	subjectArea_ = subjectArea;
}

std::string Lecturer::GetID() const {
	return staffID_;
}

void Lecturer::SetID(std::string id) {
	staffID_ = id;
}

std::string Lecturer::GetArea() const {
	return subjectArea_;
}

void Lecturer::SetArea(std::string area) {
	subjectArea_ = area;
}

void Lecturer::AddModule(Module m) {
	modulesTaught_.push_back(m);
}

void Lecturer::AddModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark) {
	Module m(moduleTitle, moduleCode, moduleCreditPoints, moduleMark);
	modulesTaught_.push_back(m);

}

void Lecturer::DeleteModule(std::string moduleCode) {
	//Loop through the module marks and remove a module that 
	for (int index = 0; index < modulesTaught_.size(); index++) {
		if (modulesTaught_.at(index).getModuleCode() == moduleCode) {
			modulesTaught_.erase(modulesTaught_.begin() + index);
		}
	}

}
void Lecturer::UpdateModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark) {
	//Loop through the module marks and remove a module that 
	for (int index = 0; index < modulesTaught_.size(); index++) {
		if (modulesTaught_.at(index).getModuleCode() == moduleCode) {
			modulesTaught_.at(index).setModuleCreditPoints(moduleCreditPoints);
			modulesTaught_.at(index).setModuleTitle(moduleTitle);
			modulesTaught_.at(index).setModuleMark(moduleMark);
		}
	}
}

int Lecturer::GetNumberModules() {
	return this->modulesTaught_.size();

}

std::string Lecturer::ToString() {
	return "Name: " + name_ + "\nEmail: " + email_ + "\nSubject Area: " + subjectArea_ + "\n";
}
