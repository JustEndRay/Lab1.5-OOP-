#pragma once
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Car
{
	string Brand;
	int Number_of_cylinders;
	int  Power;
public:

	string GetBrand() const;

	int  GetNumber_of_cylinders() const;

	int  GetPower() const;

	void SetBrand(string Brand);

	void SetNumber_of_cylinders(int  Number_of_cylinders);

	void SetPower(int  Power);

	void Init(string Brand, int  Number_of_cylinders, int  Power);
	void Display();
	void Read();

	void  Re_assignment_Power();
	void  Change_Power();
	void  Re_assignment_Brand();
	void  Change_Brand();
};
