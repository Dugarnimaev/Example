// 59 Даны действительные числа x, y. Определить, принадлежит ли точка с координатами x, y заштрихованной части плоскости
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const float r1 = 0.4, R = 1;
    float a, x, y; int n;
    cout << "Input X: " << endl;
    cin >> x;
    cout << "Input Y: " << endl;
    cin >> y;
    a = pow(x, 2) + pow(y, 2);
    if (r1 < a && a < R) {
        cout << "Yes ";
    }
     else {
        cout << "No";
    }
    return 0;
}
