#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "Conus.h"

using namespace std;

Conus::Conus()
{
	cout << "Conus()" << endl;
	height = double(0);
	radius = double(0);
}
Conus::Conus(double height, double radius)
{this->height
	 = height;
	this->radius = radius;
}
Conus::~Conus()
{
	cout << "~Conus()" << endl;
}
Conus& Conus::Get(double height, double radius)
{
	single = new Conus(height, radius);
	return *single;
}
const double Conus::GetHeight() const
{
	return height;
}
const double Conus::GetRadius() const
{
	return radius;
}
void Conus::SetHeight(double a)
{
	if (a > 0)
	{
		height = a;
	}
	else
	{
		throw "Incorrect value";
	}
}
void Conus::SetRadius(double b)
{
	if (b > 0)
	{
		radius = b;
	}
	else
	{
		throw "Incorrect value";
	}
}

double Conus::Capacity()
{
	return (1.0 / 3.0)*M_PI*pow(this->radius, 2)*(this->height);
}

double Conus::Area()
{
	double l = pow(this->height, 2) + pow(this->radius, 2);
	return (M_PI*(this->radius)*l) + (M_PI*pow(this->radius, 2));
}