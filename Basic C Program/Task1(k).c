/*Q-11: a(bc|cd)+
● Meaning:
○ Starts with 'a'
○ Followed by one or more of 'bc' or 'cd'*/
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
    if(!(str[0]=='a')){
        printf("Invalid expression.");
        return 0;
    }else{
        for(int i=1;i<len;i+=2){
            if(!((str[i]=='b' && str[i+1]=='c') ||(str[i]=='c' && str[i+1]=='d'))){
                printf("Invalid expression.");
                return 0;
            }
        }
        printf("Valid expression.");
    }

}
