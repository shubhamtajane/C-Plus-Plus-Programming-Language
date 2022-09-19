#include<iostream>
using namespace std;

int LastChar(char *str,char ch)
{
   int iCnt=0;
   int ind= -1;
  while(*str!='\0')
  {  
     
    if(*str==ch)
	{
	    ind=iCnt;
	}
	iCnt++;
	 str++;
   }
   
   return ind;
}


int main()
{
  char arr[20];
  char cValue=0;
  int iRet=0;
  
  printf("Enter String\n");
  cin.getline(arr,20);
  
  printf("Enter Character\n");
  scanf("%c",&cValue);
  
  iRet=LastChar(arr,cValue);
  
  printf("Character location is %d",iRet);
  return 0;
}