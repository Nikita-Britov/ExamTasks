#include <iostream>

using namespace std;

void main()
{
	// const - ������������ �������� � ���������
	const int size = 15;
	// ������ - ��� ����������, ������� ������ ��������� ���-�� �������� ������ ����
	// ������� ������ �������� � �������, � ������� ����� ���������� �� �������. (��������� ���������� � ����)
	int arr[size];
	int max_pos = 0, sum = 0;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		if (arr[i] > arr[max_pos])
			max_pos = i;
	}

	/*
	*  ���������� �� 1 ������� ���������
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
