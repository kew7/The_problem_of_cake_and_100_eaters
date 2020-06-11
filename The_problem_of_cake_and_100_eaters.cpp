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
#include <array>
using namespace std;

// ���������� ����������
long double fact(int N)
{
    if (N < 0) // ���� ������������ ���� ������������� �����
        return 0; // ���������� ����
    if (N == 0) // ���� ������������ ���� ����,
        return 1; // ���������� ��������� �� ���� - �� �����������, �� ��� 1 =)
    else // �� ���� ��������� �������
        return N * fact(N - 1); // ������ ��������.
}

int main()
{
    double 
        Amax = 0;
    int imax = 0;
 
    std::array<double, 100> A;      // the massive of eaters

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