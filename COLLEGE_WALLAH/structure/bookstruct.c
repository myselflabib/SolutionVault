#include<stdio.h>
#include<string.h>

int main(){
    typedef struct book
    {
        char name[50];
        int NofPage;
        int price;
    } book;

    book a;
    book b;
    book c;


    strcpy(b.name, "Secret Sven");
    b.price = 411.5;
    b.NofPage = 100;
    
    strcpy(a.name, "Secret Sven");
    a.price = 411.5;
    a.NofPage = 100;

    strcpy(a.name, "Secret Sven");
    a.price = 411.5;
    a.NofPage = 100;

    printf("%s\n", a.name);
}