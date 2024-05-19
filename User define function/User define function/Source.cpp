
// Program to convert a String to upper case letters 


#include<iostream>
#include<string>


using namespace std;

int main()
{
	char str1[20] = "new zealand";
	cout << "Original String value : " << str1 << "\n";
	
	strrev(str1);
	cout << "String's upper case value : " << str1;
	system("pause");
	return 0;
}