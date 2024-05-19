#include<iostream>
#include<string>
using namespace std;

struct car
{
	int n=0;
	string name;
	
};
int main()
{
	
const int size = 4;

	
	car  c1[size], c2, c3, c4;
	for (int i = 0; i <4 ; i++)
	{
		cout << "Enter the car No" << endl;
		cin >> c1[i].n;
		cin.ignore();
		cout << "Enter the model name" << endl;
		getline(cin, c1[i].name);
	}
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << " the car No" <<c1[i].n <<endl;
		
		cout << "Enter the model name" <<c1[i].name       <<endl;
		
	}
}