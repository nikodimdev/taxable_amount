#include <stdio.h>


int 
main ()
{

    float dollars, amount;


    printf("Укажите сумму в доларах: ");
    scanf ("%f", &dollars);



    printf("С добавлением налога: %.2f\n", dollars * 1.05);


    return 0;
}




/*

Задача из книги C Programming: A Modern Approach" (2nd Edition) by K.N. King
Цель: написать программу которая попросит пользователя
ввести сумму в долларах и центах и затем отобразит сумму с
добавленным 5% - ным налогом




*/