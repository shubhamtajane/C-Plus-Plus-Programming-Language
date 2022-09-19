#include<iostream>
using namespace std;

int CountChar(char *str,char ch)
{
  int iCnt=0;
   while(*str!='\0')
   {
     if(*str==ch)
	 {
	   iCnt++;
	 }
	 str++;
   }
   return iCnt;
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
  
  iRet=CountChar(arr,cValue);
 
   printf("Character Count Frequency is %d",iRet);
   
 return 0;
}