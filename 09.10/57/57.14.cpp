#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	switch (n / 10)
	{
	case 1: switch (n % 10)
	{
	case 0: cout << "������"; break;
	case 1: cout << "�����������"; break;
	case 2: cout << "����������"; break;
	case 3: cout << "����������"; break;
	case 4: cout << "������������"; break;
	case 5: cout << "����������"; break;
	case 6: cout << "�����������"; break;
	case 7: cout << "����������"; break;
	case 8: cout << "������������"; break;
	case 9: cout << "������������"; break;
	default:
		break;
	} break;
	case 2: cout << "�������� "; break;
	case 3: cout << "�������� "; break; 
	case 4: cout << "����� "; break;
	case 5: cout << "��������� "; break; 
	case 6: cout << "���������� "; break;
	case 7: cout << "��������� "; break; 
	case 8: cout << "����������� "; break;
	case 9: cout << "��������� "; break;
	default:
		break;
	}
	if (n < 10 || n > 20)
	switch (n % 10)
	{
	case 1: cout << "����"; break;
	case 2: cout << "���"; break;
	case 3: cout << "���"; break;
	case 4: cout << "������"; break;
	case 5: cout << "����"; break;
	case 6: cout << "�����"; break;
	case 7: cout << "����"; break;
	case 8: cout << "������"; break;
	case 9: cout << "������"; break;
	default:
		break;
	}
}