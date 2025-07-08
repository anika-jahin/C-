/*Q-8: (a|b)c+d
● Meaning:
○ Starts with 'a' or 'b'
○ Followed by one or more 'c's
○ Ends with exactly one 'd' */

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
    if(!((str[0]=='a' || str[0]=='b') && str[len-1]=='d')){
        printf("Invalid expression.");
        return 0;
    }else{
        for(int i=1;i<len-1;i++){
            if(str[i]!='c'){
                printf("Invalid expression.");
                return 0;
            }
        }
        printf("Valid expression.");
    }

}


