#include<iostream>
using namespace std;
int main()
{
	float US = 1.487; float french = 0.172; float deu = 0.584; float ja = 0.00955;
	float b;
	cout << "Enter the Bristish pound" << endl;
	cin >> b; 
	cout << "Bristish pound was equivalent to $ " << US * b << " U.S" << endl;
	cout << "Bristish pound was equivalent to $ " << french * b << " FRENCH franc" << endl;
	cout << "Bristish pound was equivalent to $ " << deu * b << " duetschemark" << endl;
	cout << "Bristish pound was equivalent to $ " << ja * b << " Japanese" << endl;
}