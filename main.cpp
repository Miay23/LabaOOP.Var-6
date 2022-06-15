#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float floatA, floatB, floatC, floatD, floatE, floatF, floatResult;
    double doubleA, doubleB, doubleC, doubleD, doubleE, doubleF, doubleResult;
    int m, n, p;

        cout << "Vedi A tipa (float): ";
        cin >> floatA;
        cout << "Vedi A tipa (double): ";
        cin >> doubleA;
        cout << "Vedi B tipa (float): ";
        cin >> floatB;
        cout << "Vedi B tipa (double): ";
        cin >> doubleB;

    floatC = pow((floatA - floatB), 3);
    floatD = pow(floatA, 3) - (3 * pow(floatA, 2) * floatB);
    floatE = pow(floatB, 3) - (3 * pow(floatB, 2) * floatA);
    floatF = floatC - floatD;
    floatResult = floatF / floatE;


    doubleC = pow((doubleA - doubleB), 3);
    doubleD = pow(doubleA, 3) - (3 * pow(doubleA, 2) * doubleB);
    doubleE = pow(doubleB, 3) - (3 * pow(doubleB, 2) * doubleA);
    doubleF = doubleC - doubleD;
    doubleResult = doubleF / doubleE;

        cout << printf("\n Rezyltat s tipom float = %f", floatResult);
        cout << printf("\n Rezyltat s tipom double  = %f", doubleResult);

     
        cout << printf("\n Rezyltat s tipom float B = %f ,a Rezyltat s tipom double B = %f", floatB, doubleB);



        cout << " \n \n Sravneni i podschet vvedi N: ";
        cin >> n;
        cout << "a tut vvedi M: ";
        cin >> m;

    p = ++n * ++m;
        cout << printf("\n 1) p = ++n * ++m = %d , n = %d, m = %d    //", p, n, m);

    if (m++ < n) {
        cout << "\n 2) m++ < n: Pravda";
    }
    else {
        cout << "\n 2) m++ < n: ne pravda";
    }

    if (n++ > m) {
        cout << "\n 3) n++ > m: Pravda";
    }
    else {
        cout << "\n 3) n++ > m : ne pravda";
    }

    return 0;

}