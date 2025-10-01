#include<stdio.h>
#include<stdbool.h>
typedef struct Date{
    int day;
    int month;
    int year;

}Date;
int main(){
    Date a, b;

    a.day = 6;
    a.month = 3;
    a.year = 2009;

    b.day = 24;
    a.month = 8;
    a.year= 2005;

    bool flag = true;
    
    if (a.day != b.day) flag = false;
    if (a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;

    if (flag == false) printf("not same class");
     
}