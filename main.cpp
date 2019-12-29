#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main(){
    int a, c;
    float ab;

    cout << "Input digit you want to check. \n";
    cin >> a;

    c = a % 2;
    ab = c;
    ab = ab/2;

    if(floor(ab) == ab){
        cout << "It's Even!. \n";
    }else{
        cout << "It's Odd!. \n";
    }

    system("pause");
}




