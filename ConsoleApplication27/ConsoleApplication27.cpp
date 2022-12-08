#include <iostream>
#include <cmath> 

using namespace std;





int main()
{
    setlocale(LC_ALL, "RU");
    double a, b, c, d, x1, x2, x;

    cout << "Введите коэфициент уровнения A => ";
    cin >> a;
    cout << "Введите коэфициент уровнения B => ";
    cin >> b;
    cout << "Введите коэфициент уровнения C => ";
    cin >> c;

     d = b * b - 4 * a * c;
     if (d > 0) {
         x1 = ((-b) + sqrt(d)) / (2 * a);
         x2 = ((-b) - sqrt(d)) / (2 * a);
         cout << "x1 = " << x1 << "\n";
         cout << "x2 = " << x2 << "\n";
     }
     if (d == 0) {
         x1 = -(b / (2 * a));
         cout << "x1 = x2 = " << x1 << "\n";
     }
     if (d < 0)
         cout << "D < 0, Уравнение не имеет решений";
 }

    /*if ((b * b - 4 * a * c) >= 0)
    {
        x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x1 = " << x1 << "\n";
        x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x2 = " << x2 << "\n";
    }
    else
    {
        cout << "D < 0, Уравнение не имеет решений" << endl;
    }*/

}

