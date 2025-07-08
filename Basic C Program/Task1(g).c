/* Q-7: 0(1|0)*
● Accept '0' followed by any combination of '0's and '1's. */

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
    }else if(str[0]!='0'){
        printf("Invalid expression.");
        return 0;
    }else{
        for(int i=1;i<len;i+=2){
            if(!(str[i]=='1' || str[i]=='0')){
                printf("Invalid expression.");
                return 0;
            }
        }
        printf("Valid Expression.");
    }
}
