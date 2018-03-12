#include<iostream>
#include <map>
#include "Etudiant.h"
#include "json.h"
int main() {
	std::cout << "hello" << std::endl;
	Etudiant e1("Philip","Voyle",32,"New Zealand",20);
	e1.print();
	std::cout << to_json(e1) << std::endl;
	std::map<std::string,std::string> test;
	test["Key"] = "Attribut";
	test["key"] = "Attribut";

	std::string mapString = to_json(test);
	std::cout << mapString << std::endl;
	system("pause");
	return 0;
}