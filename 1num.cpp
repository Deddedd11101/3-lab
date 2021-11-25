// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int i, sum;
   // i = 1; sum = 0;
   // for (; i <= 100; i++) sum += i; верно

    // sum = 0;
    // for (i = 1; i <= 100;) sum += i++; верно

   // for (i = 1, sum = 0; i <= 100; sum += i + , i++); ошибка синтаксиса

   // for (i = 1, sum = 0; i <= 100; sum += i++); верно 

   // for (i = 0, sum = 0; i++, i <= 100; sum += i); верно
    std::cout << sum;
}


