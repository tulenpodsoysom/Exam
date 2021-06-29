//TODO: «адано два момента времени в часах, минутах и секундах (в пределах одних суток).
//TODO: Ќайти длительность промежутка времени между этими моментами в тех же единицах.
#include <iostream>

using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int first_h;
	int first_m;
	int first_s;
	int second_h;
	int second_m;
	int second_s;

	cout << "¬ведите часы, минуты, секунды первого момента времени." << endl;
	cin >> first_h >> first_m >> first_s;
	cout << "¬ведите часы, минуты, секунды второго момента времени." << endl;
	cin >> second_h >> second_m >> second_s;

	int t1 = first_h * 60 * 60 + first_m * 60 + first_s;
	int t2 = second_h * 60 * 60 + second_m * 60 + second_s;
	int t3 = abs(t1 - t2);

	cout << t3 / 60 / 60 << " „асов, "
		<< t3 / 60 % 60 << " ћинут, " 
		<< t3 % 60 << " —екунд";
}