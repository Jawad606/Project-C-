#include <fstream>  

#include <iostream> 
#include <string> 
using namespace std;
struct fdata
{
	char ch=' ';
	int j=0;
	double d=0;

	string str1;
	string str2;
};
int main()
{
	 
	fdata s2;
	fdata s1={ 'e',77,67.89,"Kafa","pakistan" };
	fstream file;
	file.open("fdata file.txt",ios::out|ios::app); //create ofstream object
	file.write((char*)(&s1), sizeof(s1));
	file .close();
	
	file.open("fdata file,txt", ios::in);
	while (file.read((char*)(&s2), sizeof(fdata)))
	{
		cout << s2.ch << endl << s2.d << endl;
	}

	return 0;
}