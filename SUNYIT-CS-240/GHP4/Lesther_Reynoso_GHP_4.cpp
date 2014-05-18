/* Program to determine the prime factorization of a number and 
     displays them in decending order.
   Written by Lesther Reynoso
   Adapated from class examples, DStackt.h taken from class example
   March 2011
   Language C++ (g++ target)
*/

#include <iostream>
using namespace std;
#include "DStackT.h"

int main(void)

{int num, i;
 Stack<int> primefactors;

 cout<<"Enter the number to see the prime factorization: ";
 cin>>num;
 i=2;
 while (num != 1)
  { if (num%i == 0)
     { primefactors.push(i);
       num=num/i;
     }
    else
      i++;
  }
 cout<<"The prime factors in decending order are:"<<endl;
 cout<< primefactors;

return 0;


}
