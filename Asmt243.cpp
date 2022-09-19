#include<iostream>
using namespace std;

int Difference(char *str)
{
  int iCnt=0;
  int sCnt=0;
  int iCapital=0;
  int iSmall=0;
  int iDiff=0;
  
  while(*str!='\0')
  {
    if((*str>='a')&&(*str<='z'))
	{
	   iSmall=sCnt++;
	  
	}
	else if((*str>='A')&&(*str<='Z'))
	{
	 iCapital=iCnt++;
	}
	str++;
  }
  iDiff=iSmall-iCapital;
  return iDiff;
  
}
	 



int main()
{
  char arr[20];
  int iRet=0;
  
  printf("Enter String\n");
  scanf("%[^'\n']s",arr);
  
  iRet=Difference(arr);
  
  printf("%d",iRet);
  
  return 0;
}