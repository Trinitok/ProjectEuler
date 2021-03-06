#include <QCoreApplication>
#include <stdio.h>
#include <iostream>

using namespace  std;

int q2(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

//    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

//    By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

    /* Declare an array to store Fibonacci numbers. */
      int *f;
      int i;
      int max;
      int sum = 0;

      /* 0th and 1st number of the series are 0 and 1*/
      f[0] = 0;
      f[1] = 1;

      for (i = 2; f[i-1] < 4000000; i++)
      {
          /* Add the previous 2 numbers in the series
             and store it */
          f[i] = f[i-1] + f[i-2];
          max = i - 1;
      }

      for(max; max > 0; max --){
          if(f[max] % 2 == 0){
              sum += f[max];
          }
      }

      cout << sum << endl;
    return a.exec();
}
