#include <iostream>
using namespace std;
int main()
{

    float income;
    float e;
    float echar;

    cout << "please enter your salary to find incoem tax" << endl;
    cin >> income;

    if ((income <= 600000))
    {
        cout << "there is zero percent income tax on you" << endl;
    }

    else if ((income > 600000) && (income <= 1200000))
    {
        e = income - 600000;
        echar = 0.05 * e;
        cout << "your total income tax is = " << echar << endl;

    }
    else if ((income > 500000) && (income <= 750000))
    {
        e = income - 500000;
        echar = 2000 + 0.05 * e;
        cout << "your total income tax is = " << echar << endl;

    }
    else if ((income > 750000) && (income <= 1400000))
    {
        e = income - 750000;
        echar = 14500 + 0.1 * e;

        cout << "your total income tax is = " << echar << endl;
        //programology 
    }
    else
    {
        e = income - 750000;
        echar = 17500 + 0.2 * e;

        cout << "your total income tax is = " << echar << endl;

    }

}