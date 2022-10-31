#pragma once
#include"Cadrs.h"
#include<iostream>
using namespace std;
class Administrator:public Cadrs
{
private:
	string workplace;
public:
	void setWorkplace(string workplace)
	{
		this->workplace = workplace;
	}
	string getWorkPlace()
	{
		return workplace;
	}
};

