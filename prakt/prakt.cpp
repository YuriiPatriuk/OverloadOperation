﻿#include <iostream>
#include "date.h"

//Создайте класс с именем Date для хранения даты(или
//    используйте ранее созданный).
//    В классе должна быть функция - член, которая увеличивает день на 1. +
//    Напишите соответствующие конструкторы и функции - члены.
//    В классе должны быть перегружены операциии++, --,
//    != , == , > , > , += -=

int main()
{
    Date date;
    date.input();
    date.print();
    date.addDay();
    date.print();
    date.addDay();
    date.print();
}
