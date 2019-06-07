#include <iostream>
#include "Conus.h"

using namespace std;
Conus* Conus::single = 0;
int main()
{
	Conus& conus=Conus::Get(5.6, 2.5);
	cout << "GetHeight(): " << conus.GetHeight() << endl;
	cout << "GetRadius(): " << conus.GetRadius() << endl;

	cout << "Capacity(): " << conus.Capacity() << endl;
	cout << "Area(): " << conus.Area() << endl;

	conus.SetHeight(8.3);
	conus.SetHeight(4.5);

	cout << "GetHeight(): " << conus.GetHeight() << endl;
	cout << "GetRadius(): " << conus.GetRadius() << endl;

	cout << "Capacity(): " << conus.Capacity() << endl;
	cout << "Area(): " << conus.Area() << endl;

	system("pause");
	return 0;
}