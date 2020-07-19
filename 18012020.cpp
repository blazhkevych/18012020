#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a, b, c;
	cout << "Введите a ";
	cin >> a;
	cout << "Введите b ";
	cin >> b;
	cout << "Введите c ";
	cin >> c;
	if (a <= c and c <= b) cout << "+";
	else cout << "-";

	return 0;
}


/*SetConsoleOutputCP(1251);
	int x, y;
	cout << "Введите x ";
	cin >> x;
	cout << "Введите y ";
	cin >> y;
	if (x > 0 and y > 0) cout << "1";
	else if (x < 0 and y > 0) cout << "2";
	else if (x < 0 and y < 0) cout << "3";
	else if (x > 0 and y < 0) cout << "4";
	else if (x == 0 and y == 0) cout << "нолик";
	else if (x == 0) cout << "оу";
	else cout << "ох";

	return 0;*/
	/*{
		SetConsoleOutputCP(1251);
		int a, b, c;
		cout << "Введите a ";
		cin >> a;
		cout << "Введите b ";
		cin >> b;
		cout << "Введите c ";
		cin >> c;
		double p = (a + b + c) / 2.0;
		double sq = (p * (p - a) * (p - b) * (p - c)); // sqrt - це корінь
		if (sq > 0)
		{
			double s = sqrt(sq);
			cout << s << endl;
		}
		else
		cout << "not triangle" << endl;

	}*/