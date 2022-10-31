#pragma once
#include<iostream>
using namespace std;
class Cadrs
{
private:
	string name;
public:
	Cadrs()
	{

	}
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
};

