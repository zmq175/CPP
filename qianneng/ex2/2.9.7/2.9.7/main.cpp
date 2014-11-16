//==================================================================
//Program: Print diamond
//this code is written for homework of Qianneng's book
//exercise 2 page61 no.7
//written by Liu Yuanqi
//student number:201426811417
//College of Computer Science and Technology,College of Software
//Zhejiang university of Techonology
//written in VS2010
//==================================================================
#include <iostream>
using namespace std;
int main()
{
  int charnum,line,spacetime;
for (line=0;line<10;++line)
  {
   for (spacetime=10;spacetime>line;--spacetime) 
     {
      cout<<" ";
      }
   for (charnum=line*2-1;charnum>0;--charnum)
    {
      cout<<"%";
    }
    cout<<'\n';
  }  
for (line=10;line>0;--line)
  {
   for (spacetime=10;spacetime>line;--spacetime) 
     {
      cout<<" ";
      }
   for (charnum=line*2-1;charnum>0;--charnum)
    {
      cout<<"%";
    }
    cout<<'\n';
  }
}
//this program is written before this class.