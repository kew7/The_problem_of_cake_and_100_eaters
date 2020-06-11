/*
������.

    �� ����� ����� ������� ����.
    � ����� �� ������� �������� 100 �������.
    ������ ������� ����� 1 % ������ �����.
    ������ ������� ����� 2 % �� �������.
    ������ ������� ����� 3 % �� �������
    (� ��� ����� �� ������, ������� �������� ���� 100% �������).

    ������� � ����� ������� ������� ���������� ����� ����� � ������� ��� ����� ��������� �� ���������?
*/

// �������

#include <iostream>
#include <math.h>
using namespace std;

// ���������� ����������
long double fact(int N)
{
    if (N < 0) // ���� ������������� �����
        return 0; // ���������� ����
    if (N == 0) // ���� ����,
        return 1; // ���������� ��������� �� ���� - �� �����������, �� ��� 1 =)
    else // �� ���� ��������� �������
        return N * fact(N - 1); // ������ ��������.
}

int main()
{
    double A[100],
        Amax = 0;
    int imax = 0;

    // Function formula
    for (int i = 1; i <= 100; i++)
    {
        A[i - 1] = i * fact(100) / (fact(100 - i) * pow(100, i));
    }

    // maximum search
    for (int i = 1; i <= 100; i++)
    {
        if (Amax < A[i - 1]) { Amax = A[i - 1]; imax = i; }
    }

    //print
    cout << endl << Amax << "   number = " << imax << endl;

    getchar();
    return 0;
}