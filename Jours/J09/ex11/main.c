#include <stdio.h>
#include "ft_perso.h"
int main()
{
	t_perso donnie;
	donnie.name = strdup("Donnie");
	donnie.life = 100.0;
	donnie.age = 24;
	donnie.profession = SAVE_AUSTIN_POWERS;
	printf("%s", donnie.profession);
	(void)donnie;
	return (0);
}
