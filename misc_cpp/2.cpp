// Посчитать вещественные корни квадратного уравнения ax^2+bx
//+c=0. На вход подаются коэффициенты a, b, c. Постараться
//учесть все возможные варианты значений коэффициентов.
#include <iostream>
#include <cmath>
//misc_cpp


int main(){
    double a, b, c, d, x1, x2;
    std::cout << "Введите a: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;
    std::cout << "Введите c: ";
    std::cin >> c;
    if (a == 0) {
        x1 = -c/b;
        std::cout << "x = " << x1 << std::endl;
    }else
    {
        d = b*b - 4*a*c;
        if (d>0)
        {
            x1 = ((-b)+sqrt(d))/(2*a);
            x2 = ((-b)-sqrt(d))/(2*a);
            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
        }
        if (d==0)
        {
            x1 = -(b/(2*a));
            std::cout << "x1 = x2 = " << x1 << std::endl;
        }
        if (d < 0)
        {
            std::cout << "d<0 -> Вещественных корней нет" << std::endl;
        }
    }
    return 0;
}
