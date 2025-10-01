#include<stdio.h>
#define PI 3.14159265359
#define area(r) (PI*r*r)
// float area(float r){
//     return PI*r*r;
// }

int main(){
    printf("%f\n", area(10));
}