// Date: 19/07/2024

#include<stdio.h>
int main(){
    char Ch;
    printf("Enter your Charecter:\n");
    scanf("%c", &Ch);
    printf("The value of the charecter is %d\n", Ch);
    //97-122
    if(Ch>=97 && Ch<=122){
        printf("The Charecter is lower case.\n");
    }
    else{
        printf("The Charecter isnot lower case.\n");
    }
    return 0;
}