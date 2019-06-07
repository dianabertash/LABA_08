#pragma once
class Conus
{
private:
	 double height;
	 double radius;
	 static Conus* single;
	Conus();
	Conus(double height, double radius);
	Conus(const Conus &obj)= delete;
	~Conus();
public:
	static Conus& Get(double height, double radius);
	const double GetHeight() const;
	const double GetRadius() const;

	void SetHeight(double a);
	void SetRadius(double b);

	double Capacity();
	double Area();
};