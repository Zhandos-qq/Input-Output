#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int b = a - 1;
    int c = a + 1;
    cout << "The next number for the number " << a << " is " << c << "." << endl;
    cout << "The previous number for the number " << a << " is " << b <<".";
    return 0;
}