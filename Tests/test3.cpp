#include <iostream>
#include <string>
#include "../lab17.cpp"
using namespace std;

int main() {
    int index;

    // find high value and index position with array of doubles
    float fpData[] = {199.34, 72.20, -65.90, 66.33, 299.77, 88.5,
          -44.12, 45.75,  88.45, 65.64, 77.21, -24, 6.62};
    float fpHigh = fpData[0];
    findHigh(fpData,sizeof(fpData)/sizeof(double),index,fpHigh);
    cout << "The highest value is at index " << index << " and is " << fpHigh << endl;

    return 0;
}

