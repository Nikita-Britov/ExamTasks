// Подключение библиотек
// iostream - библиотека для ввода/вывода
#include <iostream>
#include <cmath>

using namespace std;

/*
*  <тип результата> <название функции>(<парметры функции>...)
*  {
*		[return <возвращаемые значения>]
*  }
*/

// Создаём функцию для рассчёта расстояния между двумя точками
// Функция возвращает double, т.к. квадратный корень возвращает вещественное число
double GetDistance(int x1, int y1, int x2, int y2)
{
	// sqrt() - корень квадратный
	// pow(<число>, <степень>) - число в степени
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << "P: " << GetDistance(x1, y1, x2, y2) +
		GetDistance(x2, y2, x3, y3) + GetDistance(x1, y1, x3, y3);
}
