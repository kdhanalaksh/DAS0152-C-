#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n1,n2,n3,n4,multi;
    float geometricMeanResult;
    cout << "Enter four numbers: ";
    cin >>n1>>n2>>n3>>n4;
    multi=n1*n2*n3*n4;
    cout << "Multiplication of the four numbers: " <<multi;
    geometricMeanResult = pow(n1*n2*n3*n4,0.25);
    cout << "Geometric mean of the four numbers: " <<  geometricMeanResult;

    return 0;
}

