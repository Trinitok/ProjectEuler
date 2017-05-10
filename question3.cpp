#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace  std;

int q3(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    The prime factors of 13195 are 5, 7, 13 and 29.

//    What is the largest prime factor of the number 600851475143 ?
    int target = 600851475143;
    int max = 1;

    //  newton method for finding prime factors
    int i;
    for(i = 3; i <= sqrt(target); i += 2){
        while(target % i == 0){
            if(i > max){
                max = i;
            }
            target = target / i;
        }
    }

    if(target > max){
        max = target;
        printf("%d", target);
    }
    cout << max << endl;
    return a.exec();
}
