#include <iostream>
using namespace std;
void findHigh(double *data, int size, int &index, double &highVal);
int main() {
    int index;
    double highValue;
    double sensor[] = {76.25, 85.45, -45.90, 99.34, 72.20, -65.90, 66.33, 99.77, 88.5,
          -44.12, 45.75, 57.77, -88.42, 99.47, 75.75, 88.45, 65.64, 77.21, -24, 62};
    // statement to call the findHigh function goes here
    findHigh(sensor,sizeof(sensor)/sizeof(double),index,highValue);
    cout << "The highest sensor value read is at index " << index << " and is " << highValue;
    return 0;
}
