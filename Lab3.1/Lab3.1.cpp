// Lab_03_1.cpp
// <Գ���� �����>
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 12

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	
	cout << "x = "; cin >> x;

	A = ((x+2)/(x * x)) + 1.0;
	// ����� 1: ������������ � ��������� ����
	       
	       if (x < 0)
		       B = (x * x * x) - (2 * x * x * x * x);

		   if (0 <= x && x <= 2)
			   B = (abs(x) + exp(x)) * (abs(x) + exp(x)) * (abs(x) + exp(x));

	       if (x > 2)
		       B = 4 * cos(x * x - 2);

	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	
	// ����� 2: ������������ � ����� ����
	      
	      if (x < 0)
		      B = (x * x * x) - (2 * x * x * x * x);
	else
		  if (0 <= x && x <= 2)
			  B = (abs(x) + exp(x)) * (abs(x) + exp(x)) * (abs(x) + exp(x));
    else
	      if (x > 2)
			  B = 4 * cos(x * x - 2);
	y = A + B;
	
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}