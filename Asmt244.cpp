#include<iostream>
using namespace std;
 
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{  
    while(*str!='\0')
	{
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
           return TRUE;
         }
        str++;
    }
}


int main()
{
   char arr[20];
   BOOL bRet=FALSE;
   
   printf("Enter String\n");
   scanf("%[^'\n']s",arr);
   
   bRet=ChkVowel(arr);
   
   if(bRet==TRUE)
   {
    printf("Contains Vowels");
   }
   else
   {
    printf("There is No vowel");
   }
   return 0;
 }