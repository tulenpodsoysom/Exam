//TODO: ������ ��� ������� ������� � �����, ������� � �������� (� �������� ����� �����).
//TODO: ����� ������������ ���������� ������� ����� ����� ��������� � ��� �� ��������.
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

	cout << "������� ����, ������, ������� ������� ������� �������." << endl;
	cin >> first_h >> first_m >> first_s;
	cout << "������� ����, ������, ������� ������� ������� �������." << endl;
	cin >> second_h >> second_m >> second_s;

	int t1 = first_h * 60 * 60 + first_m * 60 + first_s;
	int t2 = second_h * 60 * 60 + second_m * 60 + second_s;
	int t3 = abs(t1 - t2);

	cout << t3 / 60 / 60 << " �����, "
		<< t3 / 60 % 60 << " �����, " 
		<< t3 % 60 << " ������";
}