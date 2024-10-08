#include <iostream>
using namespace std;
int main(){
    unsigned int a;
    cin >> a;
    int b = a / 100;
    int c = ((a-(a % 10))/10)%10;
    int d = a % 10;
    cout << b+c+d;
    return 0;
}