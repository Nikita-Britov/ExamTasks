#include <iostream>

using namespace std;

/*
* int		- целые числа (5, 100, 85)
* double	- вещественные числа (1.05, 8.4)
* char		- символ
* bool		- логическое значение (true, false)
* string	- строка (набор символов)
*/

void main()
{
	// const - неизмен€емые значени€ в программе
	// int - тип данных, хран€щий целые числа
	const int size = 15;
	// ћассив - это переменна€, котора€ хранит некоторое кол-во значений одного типа
	// ћассивы хран€т значени€ в €чейках, к которым можно обращатьс€ по индексу. (Ќумераци€ начинаетс€ с нул€)
	int arr[size];
	int max_pos = 0, sum = 0;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		if (arr[i] > arr[max_pos])
			max_pos = i;
	}

	/*
	*  ”величение на 1 разными способами
	*
	*  count = count + 1
	*  count += 1
	*  count++
	*/

	for (int i = max_pos + 1; i < size; i++)
	{
		if (arr[i] % 5 == 0)
			sum += arr[i];
	}
	cout << sum;
}
