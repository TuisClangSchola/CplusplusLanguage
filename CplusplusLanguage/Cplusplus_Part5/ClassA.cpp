#include "ClassA.hpp"


ClassA::ClassA()
{
	ID = 0;
	name = "NULL";
	male = false;
}


ClassA::~ClassA()
{
}


void ClassA::Draw()
{
	std::cout << "ID: " << ID << std::endl;
	std::cout << "名前: " << name.c_str() << std::endl;
	std::string temp = male ? "男" : "女";
	std::cout << "性: " << temp << std::endl;
}


void ClassA::Draw(std::string changeName)
{
	name = changeName;
	Draw();
}


void ClassA::Draw(int ID, std::string name, bool male)
{
	this->ID = ID;
	this->male = male;
	Draw(name);
}