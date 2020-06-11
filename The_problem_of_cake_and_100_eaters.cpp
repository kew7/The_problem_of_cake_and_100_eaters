/*
«адача.

    Ќа столе стоит большой торт.
      столу по очереди подход€т 100 человек.
    ѕервый человек берет 1 % целого торта.
    ¬торой человек берет 2 % от остатка.
    “ретий человек берет 3 % от остатка
    (и так далее до сотого, который забирает себе 100% остатка).

    „еловек с каким номером получит наибольший кусок торта и сколько это будет процентов от исходного?
*/

// –ешение

#include <iostream>
#include <math.h>
#include <array>
using namespace std;

// вычисление факториала
long double fact(int N)
{
    if (N < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль
    if (N == 0) // если пользователь ввел ноль,
        return 1; // возвращаем факториал от нул€ - не удивл€етесь, но это 1 =)
    else // ¬о всех остальных случа€х
        return N * fact(N - 1); // делаем рекурсию.
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