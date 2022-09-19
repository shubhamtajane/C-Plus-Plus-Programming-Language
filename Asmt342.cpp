#include<iostream>
using namespace std;

template<class T>
T Max(T N1,T N2,T N3)
{
  if((N1>=N2&& N1>=N3))
  {
   cout<<N1;
  }
  if((N2>=N1 && N2>=N3))
  {
   cout<<N2;
  }
  if((N3>=N1&&N3>=N2))
  {
   cout<<N3;
  }
}


int main()
{
  int iNo1;
  int iNo2;
  int iNo3;
  
  printf("Enter first Number\n");
  cin>>iNo1;
  
  printf("Enter Second Number\n");
  cin>>iNo2;
  
  printf("Enter Third Number\n");
  cin>>iNo3;
  
  Max(iNo1,iNo2,iNo3);
  return 0;
 }