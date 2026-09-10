#include <stdio.h>
#include <stdlib.h>

int main() {
    int pizzaSlices, people;
    scanf("%d %d", &pizzaSlices, &people);
    
    div_t slicesPerPerson = div(pizzaSlices, people);

    printf("Teman-teman mendapatkan %d potong :)\n", slicesPerPerson.quot);
    printf("Ghifari mndapatkan %d potong :(\n", slicesPerPerson.rem);
    return 0;
}