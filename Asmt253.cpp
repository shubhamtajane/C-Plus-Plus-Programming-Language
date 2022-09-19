#include<iostream>
using namespace std;

void strtoggleX(char *str)
{
   while(*str!='\0')
   {
     if((*str>='a')&&(*str<='z'))
	 {
	    *str=*str-32;
	  }
	 else if((*str=='M')||(*str=='O')||(*str=='S'))
    {
	   *str=*str+32;
    }
	str++;
}
}

int main()
{
  char arr[20];
  
  printf("Enter String\n");
  scanf("%[^'\n']s",arr);
  
  strtoggleX(arr);
  printf("%s",arr);
  
  return 0;
 }