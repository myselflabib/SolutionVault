#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        char name[50];
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon;

    pokemon arr[2];

    strcpy(arr[0].name, "pikachu");
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 150;
    arr[0].tier = 'S';

    for (int i = 0; i < 1; i++)
    {
        printf("%s\n", arr[0].name);
        printf("%d\n", arr[0].attack);
        printf("%d\n", arr[0].speed);
        printf("%c\n", arr[0].tier);
    }
}