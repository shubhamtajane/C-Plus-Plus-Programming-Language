#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

int Display(char *str)
{
  while(*str!='\0')
  {
    if((*str=='!')||(*str=='@')||(*str=='#')||(*str=='$')||(*str=='%')||(*str=='^')||(*str=='&')||(*str=='*'))
     {
	   return TRUE;
	  }
	  else
	  {
	     return FALSE;
	  }
	 }
	 str++;
}

int main()
{
  char Arr[20];
  int iRet=FALSE;
  cout<<"Enter Character: "<<endl;
  cin.getline(Arr,20);
  
  iRet=Display(Arr);
  if(iRet==TRUE)
  {
    cout<<"It is Special Character"<<endl;
	}
	else
	{
	 cout<<"It is not a Special Character: "<<endl;
	 }
  return 0;
}