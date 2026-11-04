#include <iostream>
using namespace std;

int main(){
    int values[3] = {70, 80, 90};
    int* p = values; //p points at values[0]

    cout << *p << '\n'; //values[0]
    cout << *(p+1) << '\n'; //values1[]; p itsel hasn't changed

    p = p + 2; //new p points at values[2]
    cout << *p << '\n';
    --p;                  //back one element to values[1]
    cout << *p << '\n';
    return 0;
}