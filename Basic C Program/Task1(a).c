/*Q-1: (a|b)*
● Accept any combination (including none) of 'a' and 'b'.*/


#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;

    for(int i=0;i<len;i++){
        if(!(str[i]=='a' || str[i]=='b')){
            printf("Invalid expression\n");
            return 0;
        }
    }
    printf("Valid expression\n");

}
