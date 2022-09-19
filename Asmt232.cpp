#include<iostream>
using namespace std;

int Display(char str[])
{
  while(*str!='\0')
  {
    if((*str>='a')&&(*str<='z'))
	{
	  *str=*str-32;
	 }
	 else if((*str>='A')&&(*str<='Z'))
	 {
	  *str=*str+32;
	  }
	
	 str++;
   }
   
 }


int main()
{
  char Arr[20];
  int iRet=0;
  
  cout<<"Enter the Character"<<endl;
  cin.getline(Arr,20);
  
  Display(Arr);
  cout<<"Enter string in upper case: "<< Arr<<endl;
  return 0;
 }