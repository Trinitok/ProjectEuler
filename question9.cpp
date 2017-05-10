#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <QString>
#include <string>

using namespace  std;


int q9(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

//    a2 + b2 = c2
//    For example, 32 + 42 = 9 + 16 = 25 = 52.

//    There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//    Find the product abc.
    int i;
    int j;
    int k;
    for(i = 1; i < 1000; i ++){
        for(j = i + 1; j < 1000;j ++){
            for(k = j + 1; k < 1000; k ++){
                if(i * i + j * j == k * k && i + j + k == 1000){
                    cout << i*j*k << endl;
                }
            }
        }
    }
    return a.exec();
}
