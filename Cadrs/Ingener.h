#pragma once
#include"Cadrs.h"
#include<iostream>
using namespace std;
class Ingener:public Cadrs
{
private:
	string qualification;
	string division;
public:
	void setQulification(string qualification)
	{
		this->qualification = qualification;
	}
	void setDivision(string division)
	{
		this->division = division;
	}
	string getQulification()
	{
		return qualification;
	}
	string getDivision()
	{
		return division;
	}

};

