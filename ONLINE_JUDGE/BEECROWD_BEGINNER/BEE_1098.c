#include<stdio.h>

int main(){
    
    for (int i = 0; i <= 20; i+=2)
    {
        float I = i/10.0;
        for (float j = 1; j <= 3; j++)
        {
            if (I==0|| I==1||I==2)
            {
                printf("I=%.0f J=%.0f\n", I, I+j);
            }
            else{
                printf("I=%.1f J=%.1f\n", I, I+j);
            }
            
        }
    }
   return 0; 
}
/*
I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
I=0.4 J=1.4
I=0.4 J=2.4
I=0.4 J=3.4
I=0.6 J=1.6
I=0.6 J=2.6
I=0.6 J=3.6
I=0.8 J=1.8
I=0.8 J=2.8
I=0.8 J=3.8
I=1 J=2
I=1 J=3
I=1 J=4
I=1.2 J=2.2
I=1.2 J=3.2
I=1.2 J=4.2
I=1.4 J=2.4
I=1.4 J=3.4
I=1.4 J=4.4
I=1.6 J=2.6
I=1.6 J=3.6
I=1.6 J=4.6
I=1.8 J=2.8
I=1.8 J=3.8
I=1.8 J=4.8
I=2 J=3
I=2 J=4
I=2 J=5
*/