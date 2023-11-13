#include <iostream>
using namespace std;
void findHigh(double *data, int size, int &index, double &highVal);
int main() {
    int index;
    double highValue;
    double sensor3[] = {16.95, 16.45};
    // statement to call the findHigh function goes here
    findHigh(sensor3,2,index,highValue);
    cout << index << endl << highValue;
    return 0;
}


