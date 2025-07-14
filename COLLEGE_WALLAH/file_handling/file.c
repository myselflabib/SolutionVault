#include<stdio.h>
int main(){
   FILE* ptr = fopen("dynamic.txt", "w");

   if (ptr == NULL)
   {
      printf("error!\n");
   }
   
   int num;
   printf("enter nm: ");
   scanf("%d", &num);

   fprintf(ptr, "%d", num);
   fclose(ptr);
}