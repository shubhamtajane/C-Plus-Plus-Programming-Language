#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
  while(*str!='\0')
  {
	  if(*str == ch)
	   {
	     return TRUE;
	  }
	 str++;
	 }
	 return FALSE;
 }



int main()
{ 
  char arr[20];
  char cValue;
  BOOL bRet=FALSE;
  
  printf("Enter String\n");
  cin.getline(arr,20);
  
  printf("Enter Character\n");
  scanf("%c",&cValue);
  
  bRet=ChkChar(arr,cValue);
  
  if(bRet==TRUE)
  {
    printf("Character Found");
   }
   else
   {
    printf("Character Not Found");
    }
return 0;
}
  