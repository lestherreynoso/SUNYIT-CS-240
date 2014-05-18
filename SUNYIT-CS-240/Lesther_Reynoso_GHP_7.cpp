/*
   Program to hash 15 words into an array of strings
   Written by Lesther Reynoso
   Adapted from class examples
   April 2011
   Language C++ <g++ target>
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{ char first_letter;
  char last_letter;
  int i, n, count,             //loop control variable
      hv;                      //hash value of word
  string word; 
  string hasharray[23];
  count=0;
 cout<<"Enter 15 words to hash into an array"<<endl;
 
 for (i=0; i<23; i++)
  hasharray[i]="??";

 for (n=1; n<16; n++)
  { cout<<"Enter word "<<n<<":"<<endl;
    cin>>word;
    first_letter=word[0];
    last_letter=word[(word.length())-1];
    hv=(int(first_letter) + int(last_letter))%23;
    while(1)
   { if (hv<23)
      {  if (hasharray[hv] == "??")
         { hasharray[hv]=word;
           break;
         }
         else
           hv++;
      }
     else if (hv >= 23)
       hv=1;
     } 
  } 
 cout<<endl;
 for (i=0; i<23; i++)
   cout<<"Position "<<i<<":"<<hasharray[i]<<endl;
 while(1)
{ cout<<"Enter a word to search for (999 to exit): ";
 cin>>word;
 if (word == "999")
   break;
 else
  { first_letter=word[0];
    last_letter=word[(word.length())-1];
    hv=(int(first_letter) + int(last_letter))%23;
   while (1)
   { if (hv < 23) 
    { if (hasharray[hv]==word)
       { cout<<"The word was found in position "<<hv<<endl;
         break; 
       }
      else
      {if (count==24)
          { cout<<"The word you entered was not found"<<endl;
            break;          
          }
       else
       {
         count++;
         hv++;
       }
      }
    }
    else if (hv >= 23)
      hv=1;
   }
  }
}
return 0;


}
