#include "ft_perso.h"
#include <stdio.h>

int main()
{
t_perso jack;
jack.name = strdup("jack");
jack.life = 100.0;
jack.age = 42;
jack.profession = SAVE_THE_WORLD;
printf("Jack name: %s\n", jack.name);
printf("Jack life: %f\n", jack.life);
printf("Jack age: %d\n", jack.age);
printf("Jack profession: %s\n", jack.profession);
return (0);


}
