#include<iostream>
#include<string>
using namespace std;
struct students
{
	string name;
	int age;
	string roll_num;
	string email;
};
struct teacher
{
	string name;
	int age;
	string batch_num;
	string email;
};
struct car
{
	string model;
	string company_name;
	int engine_num;
	string chases_num;
};
struct aeroplane
{
	string name;
	string flight_num;
	int seat_no;
	string clas;
};
struct house
{
	string colony;
	int house_no;
	float house_marla;
};
int main()
{
	students s1;
	s1.name = "wasif";
	s1.age = 19;
	s1.roll_num = "fa19_bse_101";
	s1.email ="mirzawasif922@gmail.com";



}
