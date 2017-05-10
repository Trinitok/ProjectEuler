#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace  std;

int q6(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    The sum of the squares of the first ten natural numbers is,

//    1^2 + 2^2 + ... + 10^2 = 385
//    The square of the sum of the first ten natural numbers is,

//    (1 + 2 + ... + 10)^2 = 55^2 = 3025
//    Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

//    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

    //  find the sum of the squares of the first 100 natural numbers
    int i;
    double sum = 0;
    for(i = 1; i < 101; i ++){
        sum += i * i;
    }

    //  find the square of the sum of the first 100 natural numbers
    double sum2 = 0;
    for(i = 1; i < 101; i ++){
        sum2 += i;
    }
    sum2 = sum2 * sum2;
    cout << sum2 - sum << endl;


    return a.exec();
}
