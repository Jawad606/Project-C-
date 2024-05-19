#include<iostream>
using namespace std;


long hms_to_secs(int hh, int mm, int ss)
{
	long total_seconds = hh * 3600 + mm * 60 + ss;
	return total_seconds;
}

int main() {
	int hours, minutes, seconds;
	char ch = 'a';
	do {
		cout << "\nEnter hours: ";
		cin >> hours;
		cout << "Enter minutes: ";
		cin >> minutes;
		cout << "Enter seconds: ";
		cin >> seconds;
		cout << "\nPress s to submit your values: ";
		cin >> ch;
	} while (ch != 's');

	cout << "\nTotal time in seconds is: " << hms_to_secs(hours, minutes, seconds) << endl;
	return 0;
}


