 #include<stdio.h>
#include<string.h>
int main()
{
   char str[22];
   puts("Enter a string");
   gets(str);
   int size=0;
   int k=0;
   while(str[k]!='\0')
   {
       size++;
       k++;
   }
   printf("Size=%d\n",size);
   //int j=size-1;
   for(int i=0,j=size-1;i<=j;i++,j--)
   {
       char temp=str[i];
       str[i]=str[j];
       str[j]=temp;
   }
   puts("The revers of the string is =");
   puts(str);
   return 0;
}
