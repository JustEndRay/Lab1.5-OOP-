#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

string Car::GetBrand() const { return Brand; }
int  Car::GetNumber_of_cylinders() const { return Number_of_cylinders; }
int  Car::GetPower() const { return Power; }

void Car::SetBrand(string value) { Brand = value; }
void Car::SetNumber_of_cylinders(int  value) { Number_of_cylinders = value; }
void Car::SetPower(int  value) { Power = value; }

void Car::Init(string Brand, int  Number_of_cylinders, int  Power)
{

	SetNumber_of_cylinders(Number_of_cylinders);
	SetPower(Power);

}


void Car::Read()
{
	cout << "Brand  =  "; cin >> Brand;
	cout << "Number_of_cylinders =  "; cin >> Number_of_cylinders;
	cout << "Power =  "; cin >> Power;
}

void Car::Display()
{
	cout << "Brand  = " << Brand << endl;
	cout << "Number_of_cylinders = " << Number_of_cylinders << endl;
	cout << "Power =  " << Power << endl;
}
void Car::Re_assignment_Power()
{
	int n;
	cout << "re-enter power" << endl;
	cin >> n;
	Power = n;
}
void  Car::Change_Power()
{
	cout << "change power" << endl;
	cin >> Power;
}