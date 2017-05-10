#include <QCoreApplication>
#include <stdio.h>
#include <iostream>

using namespace  std;

int q1(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

//    Find the sum of all the multiples of 3 or 5 below 1000.

    //  find all multiples of 3
    int i = 1;
    long sum = 0;
    while(i * 3 < 1000){
        sum += (i * 3);
        i ++;
    }

    //  find all multiples of 5
    i = 1;
    while(i * 5 < 1000){
        sum += (i * 5);
        i ++;
    }

    //  eliminate duplicates
    i = 1;
    while(i * 3 * 5 < 1000){
        sum -= (i * 3 * 5);
        i ++;
    }
    cout << sum << endl;


    return a.exec();
}
