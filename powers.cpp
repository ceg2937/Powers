#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	/*
		1) perform math function such as pow, sqrt abs.
		2) while loop
		3) format output using the iomanip library
	*/
	int counter = 0;
	while(counter < 10)
	{
		cout << "counter: " << counter << endl;
		// counter = counter + 1;
		counter++;

	}

	int exponent = 0;

	//power of the 10 table
	cout << "power of 10 " << " = " << "standard format" << endl;
	while( exponent < 10 )
	{
		cout << left << fixed << setprecision(2);

		cout << "10^" << setw(9) << exponent << " = " << right <<  setw(15) <<  pow(10, exponent) << endl;
		exponent++;
	} 
return 0;

}
