/*Q-5:(ab)+
● Accept one or more repetitions of 'ab'. */

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];

    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int len=strlen(str);

    if(len<2 || len%2 != 0){
        printf("Invalid expression.");
        return 0;
    }else{
        for(int i=0;i<len;i+=2){
            if(!(str[i]=='a' && str[i+1]=='b')){
                printf("Invalid expression.");
                return 0;
            }
        }
        printf("Valid Expression.");
    }



}



