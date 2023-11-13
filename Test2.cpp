#include <iostream>
using namespace std;
void findHigh(double *data, int size, int &index, double &highVal);
int main() {
    int index;
    double highValue;
    double sensor2[] = {0.25, .45, -0.90, 0.34, -0.20, 0.33, 0.33, -0.90, 0.85,0.92, .75};

    // statement to call the findHigh function goes here
    findHigh(sensor2,11,index,highValue);
    cout << index << endl << highValue;
    return 0;
}


