// Date: 19/07/2024

#include<stdio.h>
int main(){
    int a = 1, b = 1;
    printf("This the value of and program: %d\n", a&&b);
    printf("This the value of or program: %d\n", a||b);
    printf("the value of not(a) is %d\n", !a);
    printf("the value of not(b) is %d\n", !b);


    if(a && b){
        printf("the program is true\n");
    }

    //its also same as the 1st.
    if(a){
        if(b){
            printf("the program is true\n");
        }
    }
    return 0;
}