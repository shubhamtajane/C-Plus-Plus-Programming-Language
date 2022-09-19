#include<iostream>
using namespace std;

void Display (char *str)
{
    char *start=str;
	char *end=str;
	char temp;
	
	while(*end!='\0')
	{
	  end++;
	}
	end--;
    
	while(start<end)
	{
	  temp=*start;
	  *start=*end;
	  *end=temp;
	  
	  start++;
	  end--;
	}
	

}



int main()
{
  char arr[20];
  int iRet=0;
  
  printf("Enter String\n");
  scanf("%[^'\n']s",arr);
  
  Display(arr);
  printf("%s",arr);
  
  return 0;
}