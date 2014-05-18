/* Program to take a non negative integer and place commas in the 
    correct locations
   Written by Lesther Reynoso
   April 2011
   Language C++ <g++ target>
*/

#include <iostream>
#include <string>
using namespace std;

string comma(string num);
int length, times, n;

int main(void)
{ string number;
  string newnum;
 cout<<"Enter a non negative integer greater than 999 to place commas in: ";
 cin>>number;
 length=number.length();
if ((length%3)!=0)
  times=(length/3);
else
  times=(length/3)-1; 
 n=0;
 newnum=comma(number);
 cout<<newnum<<endl;
return 0;

}

string comma(string num)
/* Recursive function to insert commas
   Written by Lesther Reynoso
   April 2011
   Language C++ <g++ target>
*/
{ n=n+3;
  while (times!=0)
  { num.insert(num.end()-n,',');
    n=n+1;
    times=times-1;
    return(comma(num));
  }
 return(num);
}

