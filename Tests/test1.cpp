#include <iostream>
#include <string>
#include "../lab17.cpp"
using namespace std;

int main() {
    int index;

    // find high value and index position with array of integers
    int intData[] = {35, 45, 55, 20, 90, 50, 65, 50, 85};
    int intHigh = intData[0];
    findHigh(intData,sizeof(intData)/sizeof(int),index,intHigh);
    cout << "The highest value is at index " << index << " and is " << intHigh << endl;

    return 0;
}

