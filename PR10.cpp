#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double xp, xk, dx, x, y, R1, R2; 

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R1 = "; cin >> R1; 
    cout << "R2 = "; cin >> R2; 

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x <= -6)
            y = R2 / 2;
        else if (-6 < x && x <= -2 * R2)
            y = R2 / 2 + (-R2 / 2) / (-2 * R2 + 6) * (x + 6);
        else if (-2 * R2 < x && x <= 0)
            y = sqrt(R2 * R2 - (x + R2) * (x + R2)); 
        else if (x < 0 && x <= 2 * R1)
            y = -sqrt(R1 * R1 - (x - R1) * (x - R1)); 
        else
            y = -R1 * x + 2 * R1 * R1;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}
