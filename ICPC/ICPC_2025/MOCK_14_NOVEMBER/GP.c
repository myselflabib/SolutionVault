#include<stdio.h>
#include<string.h>
char line[]="abracadabr\0abraka";
int main(void)
{
printf("%d %d\n",sizeof(line),strlen(line));
return 0;
}