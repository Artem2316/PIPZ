#include "pch.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Лабораторна робота 5, Завдання 1, Варіант 4");

    Console::Write(L"Введіть потужність споживачiв електроенергiї S(ВА): ");
    double S = Convert::ToDouble(Console::ReadLine());

    Console::WriteLine(L"Для виходу з програми напишіть '0'");
    while (true) {
        Console::Write(L"Введіть напругу U(В): ");
        double U = Convert::ToDouble(Console::ReadLine());

        if (U == 0) {
            break;
        }

        double Ikz = S / (Math::Sqrt(3) * U);
        Console::WriteLine(L"Струм короткого замикання I_кз(A) = {0:F2}", Ikz);
    }

    return 0;
}
