/* Program to read a text file and count the occurrences in the file of 
     a specified string entered during execution
   Written by Lesther Reynoso
   Adapted from Ron's class example which was adapted from Fig 5-1 from
     Nyhoff
   February 2011
   Language C++ (g++ target)
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

int main(void)
{ int i, j,      //loop control variables
      num,       //number of occurrances
      pop;       //position of previous number
  string infile; //the name of the file that inputted by the user
  string s;      //copy of the contents of that file 
  string search; //the string the user is searching for
  ifstream filein;
  char ch;
  cout<<"Enter the name of the file of characters: ";
  cin>>infile;
  filein.open(infile.data() );
  assert(filein.is_open() );
  i=0;
  while (!(filein.eof() ))
   { ch=filein.get();
     s.insert(i,1,ch);
     i++;
   }
  
  cout<<"Enter the string you want to search for: ";
  cin>>search;
  
  pop=0;
  num=0;

  if ( s.find(search, pop) < s.length())
    for (j=0; j <= (s.length()); j++)
     {
      while ( s.find(search, pop) < 501)
       { pop = s.find(search, pop) + 1;
         num++;
       }
     }
    else
      cout<<"The string that was entered was not found in the file"
          <<endl;
   
  cout<<"The string you entered: "<<search<<endl<<"was found " 
       <<num<<" times";
  return 0;
}
