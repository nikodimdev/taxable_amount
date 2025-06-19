#include <stdio.h>


int 
main ()
{

    float dollars, amount;

    printf ("Укажите сумму в доларах: ");
    scanf ("%f", &dollars);



    printf ("С добавлением налога: %.2f\n", dollars * 1.05);

    return 0;
}




