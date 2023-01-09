#include <iostream>
#include "ex9.h"
#include "ex10.h"
#include "ex11.h"
#include "ex12.h"
#include "ex13.h"
#include "ex14.h"
#include "ex15.h"

int main() {

    int num;
    std::cout << "Enter the number of task (from 1 to 15):" << std::endl;
    std::cin >> num;
    if (num == 9)
    {
        task9();
    }
    else if (num == 10)
    {
        task10();
    }
    else if (num == 11)
    {
        matrix();
    }
    else if (num == 12)
    {
        matrix_1();
    }
    else if (num == 13)
    {
        task13();
    }
    else if (num == 14)
    {
        task14();
    }
    else if (num == 15)
    {
        task15();
    }

    return 0;
}
