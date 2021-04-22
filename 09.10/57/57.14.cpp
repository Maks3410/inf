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
	case 0: cout << "десять"; break;
	case 1: cout << "одиннадцать"; break;
	case 2: cout << "двенадцать"; break;
	case 3: cout << "тринадцать"; break;
	case 4: cout << "четырнадцать"; break;
	case 5: cout << "пятнадцать"; break;
	case 6: cout << "шестнадцать"; break;
	case 7: cout << "семнадцать"; break;
	case 8: cout << "восемнадцать"; break;
	case 9: cout << "девятнадцать"; break;
	default:
		break;
	} break;
	case 2: cout << "двадцать "; break;
	case 3: cout << "тридцать "; break; 
	case 4: cout << "сорок "; break;
	case 5: cout << "пятьдесят "; break; 
	case 6: cout << "шестьдесят "; break;
	case 7: cout << "семьдесят "; break; 
	case 8: cout << "восемьдесят "; break;
	case 9: cout << "девяносто "; break;
	default:
		break;
	}
	if (n < 10 || n > 20)
	switch (n % 10)
	{
	case 1: cout << "один"; break;
	case 2: cout << "два"; break;
	case 3: cout << "три"; break;
	case 4: cout << "четыре"; break;
	case 5: cout << "пять"; break;
	case 6: cout << "шесть"; break;
	case 7: cout << "семь"; break;
	case 8: cout << "восемь"; break;
	case 9: cout << "девять"; break;
	default:
		break;
	}
}