#include<iostream>
using namespace std;
class tollbooth
{
private:
	unsigned int tnc = 0;
	double mc = 0;
public:
	void totalcarpay()
	{
		tnc++;
		mc += 0.50;
	
	}
	void nonpay()
	{
		tnc++;
	}
	void dispaly()
	const
	{
		cout << "the total cars  " << tnc << endl;
		cout << "Cars that pay toll money is: " << mc<<endl;
	}
};
int main()
{
	tollbooth t;
	char a;
	do
	{
		cout << "Enter A the car pass after paying toll\n Enter X the car pass without payying toll" << endl;
		cin >> a;
		if (a == 'A' || a == 'a')
		{
			t.totalcarpay();
		}
		else if (a == 'x' || a == 'X')
		{
			t.nonpay();
		}
		else
			cout << "Invalid enterty" << endl;

	} while (a != 'p');
	t.dispaly();
}