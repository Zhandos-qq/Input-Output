#include <iostream>
using namespace std;
int main(){
    unsigned int a;
    cin >> a;
    int b = ((a-(a % 10))/10)%10;
    cout << b;
    return 0;
}