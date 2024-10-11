#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a , b;
    cin >> a >> b;
    float c = sqrt (a * a + b * b);
    printf ("%.1f" , c);
    return 0;
}