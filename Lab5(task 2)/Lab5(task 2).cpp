#include "pch.h"
using namespace System;

int main(array<System::String^>^ args)
{
    Console::WriteLine(L"Лабораторна робота 5, Завдання 2, Варіант 4");

    Console::Write(L"Введіть кількість рядків n: ");
    int n = Convert::ToInt32(Console::ReadLine());

    array<double>^ x = gcnew array<double>(n);

    for (int i = 0; i < n; i++) {
        Console::Write(L"Введіть число x{0}: ", i + 1);
        x[i] = Convert::ToDouble(Console::ReadLine());
    }

    array<double, 2>^ matrix = gcnew array<double, 2>(n, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i, j] = Math::Pow(x[j], i + 1);
        }
    }

    Console::WriteLine(L"Отримана матриця:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Console::Write(L"{0,10:F1} ", matrix[i, j]);
        }
        Console::WriteLine();
    }

    return 0;
}