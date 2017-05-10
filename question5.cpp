#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace  std;

int gcd(int x, int y){
    if(x < 0 || y < 0){
        return 1;
    }
    while(y != 0){
        int z = x % y;
        x = y;
        y = z;
    }
    return x;
}

int lcm(int x, int y){
    printf("the value of y is %d\n", y);
    return x / (gcd(x,y)*y);
}

int q5(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
    int i;
    int mul = 1;
    for(i = 1; i < 11; i ++){
        mul = lcm(i, mul);
    }
    cout << mul << endl;

    return a.exec();
}
