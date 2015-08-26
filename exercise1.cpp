#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main (){
    float a = 2;
    float b = -3;
    float c = 1;
    float x1, x2;

    x1 = (b+sqrt (b*b-4*a*c))/2*a*c;
    x2 = (b+sqrt (b*b-4*a*c))/2*a*c;

    cout<<"x1="<<x1<<endl<<endl;
    cout<<"x2="<<x2<<endl<<endl;

getch ();
}
