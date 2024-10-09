#include<iostream>
#include<cmath> 
using namespace std;

int main() {
    double h, m, angle;
    cin >> h >> m;

   
    angle = abs((30 * h) - (5.5 * m));

    
    if (angle > 180) {
        angle = 360 - angle;
    }

    cout << angle << endl;
    return 0;
}
