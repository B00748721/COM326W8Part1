#include <string>
#include <vector>
#include "Person.h"
#include "Module.h"
#pragma once
class Lecturer : public Person {
private:
	std::string staffID_;
	std::string subjectArea_;
	std::vector<Module> modulesTaught_;

public:
	Lecturer();
	Lecturer(std::string name, std::string email, std::string staffID_, std::string subjectArea_);

	std::string GetID() const;
	void SetID(std::string id);

	std::string GetArea() const;
	void SetArea(std::string area);

	virtual std::string ToString();
	void AddModule(Module m);
	void AddModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark);
	void Lecturer::DeleteModule(std::string moduleCode);
	void Lecturer::UpdateModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark);
	int Lecturer::GetNumberModules();
};

