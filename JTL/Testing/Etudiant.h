#ifndef __ETUDIANT__
#define __ETUDIANT__
#pragma once
#include <iostream>
#include "class_descriptor.h"
class Etudiant
{
public:
	std::string firstName;
	std::string lastName;
	int age;
	std::string address;
	float grade;
public:
	Etudiant(std::string first, std::string last, int age, std::string address, float grade) {
		this->firstName = first;
		this->lastName = last;
		this->age = age;
		this->address = address;
		this->grade = grade;
	}
	void print() {
		std::cout << "Printing..." << std::endl;
		std::cout << "first name : " << firstName << std::endl;
		std::cout << "last name : " << lastName << std::endl;
		std::cout << "age : " << age << std::endl;
	}
	~Etudiant(){}
};

BEGIN_CLASS_DESCRIPTOR(Etudiant)
CLASS_DESCRIPTOR_ENTRY(firstName)
CLASS_DESCRIPTOR_ENTRY(lastName)
CLASS_DESCRIPTOR_ENTRY(age)
CLASS_DESCRIPTOR_ENTRY(address)
CLASS_DESCRIPTOR_ENTRY(grade)
END_CLASS_DESCRIPTOR()

/*
BEGIN_CLASS_DESCRIPTOR(Etudiant)
CLASS_DESCRIPTOR_ENTRY(firstName)
CLASS_DESCRIPTOR_ENTRY(lastName)
CLASS_DESCRIPTOR_ENTRY(age)
CLASS_DESCRIPTOR_ENTRY(address)
CLASS_DESCRIPTOR_ENTRY(grade)
END_CLASS_DESCRIPTOR()
*/

#endif