#include<iostream>
#include<ctime>
#include<cstdlib>

void fill_arr(short arr[], short length, short left, short right) {
	srand(time(NULL));
	for (short i = 0; i < length; i++)
		arr[i] = rand() % (right - left + 1) + left;
}

void print_arr(short arr[], short length) {
	for (short i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

	//�������� ������� 14.1

		/*�������� ������, ��������� �� 10 - �� �����.
	��������� ������ ����� � ������� �������
	�������������� ���� ������ ��������� �������.
	*/
int main() {
	setlocale(LC_ALL, "rus");
	float n = 0.0F;
	const short size = 10;
	short arr1[size];
	std::cout << "\n\n\t\tHome work 14.1\n\n";
	fill_arr(arr1, size, 50, 70);
	print_arr(arr1, size);
	short k = 0;
	for (short i = 0; i < size; i++) {
		short z = arr1[i];
		if (z % 2 == 0) {
			n += arr1[i];
			k++;
		}
	}
	std::cout << "������� �������������� ������ ��������� ������� = " << n / (float)k;
	//�������� ������� 14.2

		/*�������� ������, ��������� �� 10 - �� ���������
	����� � ��������� �� 50 �� 70. ������������ ������
	����� N, � ��������� ������� ��� �������� �������,
	������� ������ � ���������� �� N � 3 �� N + 3.
	��� ��������� ���������� ����� ����������
	������������ ������� rand(), srand() � time().
	*/
	std::cout << "\n\n\t\tHome work 14.2\n\n";
	
	short min = arr1[0];
	for (short i = 0; i < size; i++) {
		if (arr1[i] < min)
			min = arr1[i];
	}
	
	short max = arr1[0];
	for (short i = 0; i < size; i++) {
		if (arr1[i] > max)
			max = arr1[i];
	}
	short N;
	do	{
		std::cout << "������� ����� � ��������� �� " << min - 3 << " �� " << max + 3 << "  -> ";		
		std::cin >> N;
		for (short i = 0; i < size; i++) {
			short m = arr1[i];
			if (m <= N + 3 && m >= N - 3)
				std::cout << arr1[i] << ' ';
		}
	}
	while (N < min - 3 || N > max + 3);



	return 0;
}
