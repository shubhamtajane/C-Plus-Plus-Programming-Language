#include<iostream>

using namespace std;

void Display(char ch)
  {
  
	  if((ch>='A')&&(ch<='Z'))
	  { 
	     while(ch<='Z')
		 {
	      cout<<ch<<endl;
	      ch++;
	     }
	  }
	  else if((ch>='a')&&(ch<='z'))
	  {
	       while(ch>='a')
	       {
	        cout<<ch<<endl;
	        ch--;
	       }
	  }
}


int main()
{
  char cValue='\0';
  int iRet=0;
  
  printf("Enter Character\n");
  scanf("%c",&cValue);
  
 Display(cValue);
  
  return 0;
 }