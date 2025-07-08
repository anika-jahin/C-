/*Q-6: a(bc)+
● Accept 'a' followed by one or more repetitions of 'bc'.*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];

    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int len=strlen(str);

    if(len<3 || len%2 == 0){
        printf("Invalid expression.");
        return 0;
    }else if(str[0]!='a'){
        printf("Invalid expression.");
        return 0;
    }else{
        for(int i=1;i<len;i+=2){
            if(!(str[i]=='b' && str[i+1]=='c')){
                printf("Invalid expression.");
                return 0;
            }
        }
        printf("Valid Expression.");
    }
}
