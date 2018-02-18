#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


string whatMon(int);
bool isLeap(int);
int numOfDays(int, bool);
void daysOfMonth(int);


int main() {
	char stay;
	int monthNum, yearNum;

	
	cout << "Enter a month number" << endl;
	cout << "1 = January" << endl << "2 = February" << endl << "3 = March" << endl << "4 = April" << endl << "5 = May" << endl << "6 = June" << endl << "7 = July" << endl << "8 = August" << 
		endl << "9 = September" << endl << "10 = October" << endl << "11 = November" << endl << "12 = December" << endl;
	cin >> monthNum;

	cout << "Enter a year" << endl;
	cin >> yearNum;

	isLeap(yearNum); 
	numOfDays(monthNum, isLeap(yearNum));

	
	cout << whatMon(monthNum) << " " << yearNum << endl;
	cout << " Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
	daysOfMonth(numOfDays(monthNum, isLeap(yearNum)));

	cin >> stay;
	
	return 0;
}

void daysOfMonth(int x) {
	for (int i = 1; i <= x; i++) {
		cout << setw(4) << i;
		
	}

}

int numOfDays(int x, bool leap) {
	int y = 0;
	if (x == 1) {
		y = 31;
	}
	if (x == 2) {
		if (leap == true) {
			y = 29;
		}
		else {
			y = 28;
		}
	}
	if (x == 3) {
		y = 31;
	}
	if (x == 4) {
		y = 30;
	}
	if (x == 5) {
		y = 31;
	}
	if (x == 6) {
		y = 30;
	}
	if (x == 7) {
		y = 31;
	}
	if (x == 8) {
		y = 31;
	}
	if (x == 9) {
		y = 30;
	}
	if (x == 10) {
		y = 31;
	}
	if (x == 11) {
		y = 30;
	}
	if (x == 12) {
		y = 31;
	}
	return y;
}

bool isLeap(int x) {
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0) {
		return true;		
	}
	else {
		return false;		
	}
}

string whatMon(int x) {
	string y;

	if (x == 1) {
		y = "January";
	}
	if (x == 2) {
		y = "February";
	}
	if (x == 3) {
		y = "March";
	}
	if (x == 4) {
		y = "April";
	}
	if (x == 5) {
		y = "May";
	}
	if (x == 6) {
		y = "June";
	}
	if (x == 7) {
		y = "July";
	}
	if (x == 8) {
		y = "August";
	}
	if (x == 9) {
		y = "September";
	}
	if (x == 10) {
		y = "October";
	}
	if (x == 11) {
		y = "November";
	}
	if (x == 12) {
		y = "December";
	}
	return y;
}


