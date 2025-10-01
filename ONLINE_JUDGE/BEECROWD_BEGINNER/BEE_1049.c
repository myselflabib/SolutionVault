#include <stdio.h>

int main() {
    char name1[20], name2[20], name3[20];
    scanf("%s", name1);
    scanf("%s", name2);
    scanf("%s", name3);
    char DIVI1[20] = "vertebrado";
    char DIVI2[20] = "invertebrado";

    char CLAS1[20] = "ave";
    char CLAS2[20] = "mamifero";
    char CLAS3[20] = "inseto";
    char CLAS4[20] = "anelideo";

    char UCLASS1[20] = "carnivoro";
    char UCLASS2[20] = "onivoro";
    char UCLASS3[20] = "hematofago";
    char UCLASS4[20] = "herbivoro";

    if (name1 == DIVI1 &&  name2 == CLAS1 && name3 == UCLASS1) 
    {
        printf("aguia\n");
    }
    else if (name1 == DIVI1 && name2 == CLAS1 && name3 == UCLASS2)
    {
        printf("aguia\n");
    }
    else if (name1 == DIVI1 && name2 == CLAS1 && name3 == UCLASS2 )
    {
        printf("pomba\n");
    }
    else if (name1 == DIVI1 && name2 == CLAS2 && name3 == UCLASS2)
    {
        printf("homem\n");
    }
    else if (name1 == DIVI1 && name2 == CLAS2 && name3 == UCLASS3)
    {
        printf("pulga\n");
    }
    else if (name1 == DIVI1 && name2 == CLAS3 && name3 == UCLASS4)
    {
        printf("lagarta\n");
    }
    else if (name1 == DIVI1 && name2 == CLAS3 && name3 == UCLASS3)
    {
        printf("sanguessuga\n");
    }
    else if (name1 == DIVI2 && name2 == CLAS4 && name3 == UCLASS3)
    {
        printf("sanguessuga\n");
    }
    else if (name1 == DIVI2 && name2 == CLAS4 && name3 == UCLASS4)
    {
        printf("minhoca\n");
    }
    
    
    
    return 0;
}