#include<iostream>
using namespace std;

template<class T>
T AddN(T *Arr,int iSize)
{
 T iSum;

 int i=0;
 for(i=0;i<iSize;i++)
 {
    iSum=iSum+Arr[i];
 }
 return iSum;
};
 

int main()
{
 int arr[]= {10,20,30,40,50};
 float brr[]= {10.0,3.7,9.8,8.7};
 
 int iRet=0;
 iRet=AddN(arr,5);
 printf("%d\n",iRet);
  
 float fRet=0.0f;
 fRet=AddN(brr,4);
 printf("%f\n",fRet);
return 0;
}