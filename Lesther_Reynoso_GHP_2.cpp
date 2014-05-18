/* Program to create a matrix with the addition of two other matrixes 
     with user inputted values
   Written by Lesther Reynoso
   Adapted from class examples and class textbook
   February 2011
   Language C++ (g++ target)
*/

#include <iostream>
using namespace std;

int main(void)
{ int mat1[3][3], mat2[3][3], mat3[3][3];
  int row, col, num, n;
  num=3;
  cout<<"Enter 9 whole number values for the first 3 by 3 matrix with a space after each value: "<<endl;
  for (row = 0; row < num; row++)
    for (col = 0; col < num; col++)
      cin>>mat1[row][col];
  cout<<"Enter 9 whole number values for the second 3 by 3 matrix with a space after each value: "<<endl;
  for (row = 0; row < num; row++)
    for (col = 0; col < num; col++)
      cin>>mat2[row][col];
//addition process
  for (row = 0; row < num; row++)
    for (col = 0; col < num; col++)
      mat3[row][col]=mat1[row][col] + mat2[row][col];  



//matrix printout
  cout<<"Matrix 1"<<endl;
  for (row = 0; row < num; row++)
    for (col = 0; col < num; col++)
    { cout<<mat1[row][col]<<"   ";
      if (col==2)
        cout<<endl;
    }
  cout<<"Matrix 2"<<endl;
  for (row = 0; row < num; row++)
    for (col = 0; col < num; col++)
    { cout<<mat2[row][col]<<"   ";
      if (col==2)
        cout<<endl;
    }
  cout<<"Matrix 3"<<endl;
  for (row = 0; row < num; row++)
    for (col = 0; col < num; col++)
    { cout<<mat3[row][col]<<"   ";
      if (col==2)
        cout<<endl;
    }
  
return 0;

}
