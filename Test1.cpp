#include <iostream>
using namespace std;
void findHigh(double *data, int size, int &index, double &highVal);
int main() {
    int index;
    double highValue;
    double sensor1[] = {-123.01, -231.02, -342.03, -231.04, -132.20, -65.90};
    // statement to call the findHigh function goes here
    findHigh(sensor1,6,index,highValue);
    cout << index << endl << highValue;
    return 0;
}

