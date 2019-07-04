#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int checkInt(){
    int a, c;
    float ab;

    cout << "Input digit you want to check. \n";
    cin >> a;

    c=a % 10;
    ab = c;
    ab = ab/2;

    if(floor(ab) == ab){
        cout << "It's Even!. \n";
    }else{
        cout << "It's Odd!. \n";
    }

    system("pause");
    return 1;
}
int main()
{ checkInt();}




