#include <iostream>
#include <string>
#include "../lab17.cpp"
using namespace std;

int main() {
    int index;

    // find high value and index position with array of strings
    string stringData[] = {"Apple", "apple1", "apple10", "apples", "apricot", "1apple"};
    string stringHigh = stringData[0];
    findHigh(stringData,sizeof(stringData)/sizeof(stringData[0]),index,stringHigh);
    cout << "The highest value is at index " << index << " and is " << stringHigh << endl;

    return 0;
}

