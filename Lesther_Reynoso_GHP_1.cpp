/* Program to search a matrix for the value inputted by the user and 
    report accurate feedback
   Written by Lesther Reynoso
   Adapted from class textbook
   February 2011
   Language C++ (g++ target)
*/

#include <iostream>
using namespace std;

int main(void)
{ int mat[3][3]=
     {     {45, 77, 93},
           {78, 79, 85},
           {72, 96, 77}
     };
  int value, row, col, n;
  char found;
  
  n=3;

  cout<<"Enter the value you want to search for: "<<endl;
  cin>>value;
  for (int row = 0; row < n; row++)
    for (int col = 0; col <n; col++)
      if (mat[row][col] == value)
       {found = true;
        cout<<"The first time the number you entered was found was in position "<<row<<", "<<col<<endl;
        row=n;
        col=n;    
       }
      else
        found = false;
  if (found==false)
    cout<<"The number "<<value<<" was not found in the matrix"<<endl;
  return 0;


}
