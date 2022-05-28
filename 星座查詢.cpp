#include<iostream>
using namespace std;

int main()
{
	int month,day;
	cin >> month >> day;

	switch (month)
	{
		case 1:
			if (day >= 1 && day <= 20)
				cout << "Capricorn" << endl;
			else if (day >= 21 && day <= 31)
				cout << "Aquarius" << endl;
			break;
		case 2:
			if (day >= 1 && day <= 18)
				cout << "Aquarius" << endl;
			else if (day >= 19 && day <= 28)
				cout << "Pisces" << endl;
			break;
		case 3:
			if (day >= 1 && day <= 20)
				cout << "Pisces" << endl;
			else if (day >= 21 && day <= 31)
				cout << "Aries" << endl;
			break;
		case 4:
			if (day >= 1 && day <= 20)
				cout << "Aries" << endl;
			else if (day >= 21 && day <= 31)
				cout << "Taurus" << endl;
			break;
		case 5:
			if (day >= 1 && day <= 21)
				cout << "Taurus" << endl;
			else if (day >= 22 && day <= 31)
				cout << "Gemini" << endl;
			break;
		case 6:
			if (day >= 1 && day <= 21)
				cout << "Gemini" << endl;
			else if (day >= 22 && day <= 31)
				cout << "Cancer" << endl;
			break;
		case 7:
			if (day >= 1 && day <= 22)
				cout << "Cancer" << endl;
			else if (day >= 23 && day <= 31)
				cout << "Leo" << endl;
			break;
		case 8:
			if (day >= 1 && day <= 23)
				cout << "Leo" << endl;
			else if (day >= 24 && day <= 31)
				cout << "Virgo" << endl;
			break;
		case 9:
			if (day >= 1 && day <= 23)
				cout << "Virgo" << endl;
			else if (day >= 24 && day <= 31)
				cout << "Libra" << endl;
			break;
		case 10:
			if (day >= 1 && day <= 23)
				cout << "Libra" << endl;
			else if (day >= 24 && day <= 31)
				cout << "Scorpio" << endl;
			break;
		case 11:
			if (day >= 1 && day <= 22)
				cout << "Scorpio" << endl;
			else if (day >= 23 && day <= 31)
				cout << "Sagittarius" << endl;
			break;
		case 12:
			if (day >= 1 && day <= 21)
				cout << "Sagittarius" << endl;
			else if (day >= 22 && day <= 31)
				cout << "Capricorn" << endl;
			break;
	}
	return 0;
}
