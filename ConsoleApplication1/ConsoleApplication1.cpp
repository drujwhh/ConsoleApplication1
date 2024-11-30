#include <iostream>
#include <cmath>
using namespace std;

void TrianglePS(float a, float& P, float& S) {
    P = 3 * a;
    S = (pow(a, 2) * sqrt(3)) / 4;
}
int main() {
    setlocale(LC_ALL, "RU");
    float number;
    float res;
    float res1;
    for (int i = 0; i < 3; i++) {
        cout << "Введите число" << endl;
        cin >> number;
        TrianglePS(number, res, res1);
        cout << "Сторона: " << number << " " << "Периметр классный" << " " << res << " " << "Площадь" << " " << res1 << endl;
    }


    return 0;
}


