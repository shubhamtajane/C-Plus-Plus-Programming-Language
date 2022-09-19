#include<iostream>
using namespace std;

int FirstChar(char *str,char ch)
{
   int iCnt=0;
   int iCt=0;
  while(*str!='\0')
  {  
     iCnt++;
    if(*str==ch)
	{
	 return iCnt-1;
	}
	 str++;
   }
    return -1;
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
  
  iRet=FirstChar(arr,cValue);
  
  printf("Character location is %d",iRet);
  return 0;
}