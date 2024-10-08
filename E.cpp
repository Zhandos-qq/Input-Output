#include <iostream>
using namespace std;
int main(){
    int v , t;
    cin >> v >> t;
    int S1 = v * t;
    cout << (S1%109+109)%109;
    return 0;
}