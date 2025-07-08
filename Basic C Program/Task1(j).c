/*Q-10: (a|b)*abb
● Meaning:
○ Any sequence of 'a' and 'b' ending in 'abb'*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];

    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int len=strlen(str);
    if(len<3){
        printf("Invalid expression.");
        return 0;
    }
    if(!(str[len-3]=='a' && str[len-2]=='b' && str[len-1]=='b')){
        printf("Invalid expression.");
        return 0;
    }else{
        for(int i=0;i<len-3;i++){
            if(!(str[i]=='a' || str[i]=='b')){
                printf("Invalid expression.");
                return 0;
            }
        }
        printf("Valid expression.");
    }

}
