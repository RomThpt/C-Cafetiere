#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void allumer(bool *status)
{
    *status = true;
}

void eteindre(bool *status)
{
    *status = false;
}

void mise_en_page(int *choice, bool status)
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
            mise_en_page(&*choice, status);
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
        }
    }
    printf("\e[1;1H\e[2J");
    mise_en_page(&*choice, status);
};

int main(void)
{
    unsigned int choice = 0;
    bool status = false;
    mise_en_page(&choice, status);

    return 0;
}