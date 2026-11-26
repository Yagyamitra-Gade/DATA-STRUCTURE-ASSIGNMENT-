#include <iostream>
using namespace std;

template <typename T> T myMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){

    cout << "Max of 4 and 7 is: " << myMax<int>(4, 8) << endl;
    cout << "Max of 3.5 and 7.5 is :" << myMax<double>(3.5, 7.5) << endl;
    cout << "Max of 'g' and 'e' is: " << myMax<char>('g', 'e') << endl;

    return 0;
}
