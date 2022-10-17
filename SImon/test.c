#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

void allumer(bool *status)
{
    *status = true;
}

void eteindre(bool *status)
{
    *status = false;
}

void cafe_select(void)
{
    unsigned int choice_cafe = 0;
    printf("1. Café Allongé\n");
    printf("2. Café fort\n");
    printf("Choisir le cafe: ");
    scanf("%d", &choice_cafe);
    switch (choice_cafe)
    {
    case 1:
        printf("Café allongé en cours!\n");
        break;
    case 2:
        printf("Café fort en cours!\n");
        break;
    }
    sleep(10);
}

int maintenance(unsigned int *stocks)
{   
    unsigned int choice_maint = 0;
    printf("\e[1;1H\e[2J");
    printf("**********************************************\n");
    printf("*               MAINTENANCE                  *\n");
    printf("*                                            *\n");
    printf("* 1. Voir les stocks                         *\n");
    printf("* 2.Ajouter du café                          *\n");
    printf("* 3.Voir les ventes                          *\n");
    printf("* 4.Quitter                                  *\n");
    printf("**********************************************\n");
    printf("Choisir le mode: ");
    scanf("%d",&choice_maint);
    switch(choice_maint){
        case 1:
            printf("Il reste %d doses de café", *stocks);
            sleep(4);
            break;
        case 2:
            printf("Combien de café voulez vous ajouter: ");
            unsigned int temp = *stocks;
            scanf("%d", &*stocks);
            printf("Vous avez ajouter %d doses\n", *stocks);
            *stocks += temp;
            sleep(4);
            break;
        case 3:
            sleep(0.1);
        case 4:
            return 0;
    }
    maintenance(&*stocks);
}

int mise_en_page(int *choice, bool status, unsigned int *stocks)
{
    printf("**********************************************\n");
    printf("* 1.Allumer la cafetière                     *\n");
    printf("* 2.Eteindre la cafetière                    *\n");
    printf("* 3.Choisir son café                         *\n");
    printf("* 4.Quitter                                  *\n");
    printf("* 5.Maintenance                              *\n");
    if (status)
    {
        printf("* Cafetière: ALLUMEE                         *\n");
    }
    else
    {
        printf("* Cafetière: ARRETEE                         *\n");
    };

    printf("**********************************************");
    if (!(status))
    {
        printf("\nCafetière eteinte\n");
        printf("Choisir le mode: ");
        scanf("%d", &*choice);
        if (*choice == 1)
        {
            allumer(&status);
        }
        else
        {
            printf("\e[1;1H\e[2J");
            mise_en_page(&*choice, status, &*stocks);
        }
    }
    else
    {
        printf("\n\n");
        printf("Choisir le mode: ");
        scanf("%d", &*choice);
        switch (*choice)
        {
        case 1:
            allumer(&status);
            break;
        case 2:
            eteindre(&status);
            break;
        case 3:
            cafe_select();
        case 4:
            return 0;
        case 5:
            maintenance(&*stocks);
        }
    }
    printf("\e[1;1H\e[2J");
    mise_en_page(&*choice, status, &*stocks);
};

int main(void)
{
    unsigned int choice = 0;
    unsigned int stocks = 8;
    bool status = false;
    mise_en_page(&choice, status, &stocks);
    return 0;
}