#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr,int iSize,T iNo)
{
  int iCnt=0;

  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    if(arr[iCnt]==iNo)
	{
	  return iCnt;
	}
	
}
}




int main()
{
 int arr[]={10,20,30,10,30,40,10,40,10};
 int iRet=SearchFirst(arr,9,40);
 printf("%d",iRet);
 return 0;
}