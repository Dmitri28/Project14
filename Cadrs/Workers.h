#pragma once
#include"Cadrs.h"
#include<iostream>
class Workers:public Cadrs
{
private:
	string specelly;
	string Shop;
public:
	void setSpecelly(string specelly)
	{
		this->specelly = specelly;
	}
	void setShop(string Shop)
	{
		this->Shop = Shop;
	}
	string getSpecelly()
	{
		return specelly;
	}
	string getShop()
	{
		return Shop;
	}

};

