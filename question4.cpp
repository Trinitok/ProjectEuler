#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace  std;

bool isPalindrome(int val){
    string s = std::to_string(val);
    if (s == string(s.rbegin(), s.rend())){
        return true;
    }
    else return false;
}

int q4(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

//    Find the largest palindrome made from the product of two 3-digit numbers.
    int i;
    int j;
    int palin = 0;
    for(i = 100; i <= 999; i ++){
        for(j = 100; j < 1000; j ++){
            if(isPalindrome(i * j)){
                if(i * j > palin){
                    palin = i * j;
                }
            }
        }
    }
    cout << palin << endl;
    return a.exec();
}
