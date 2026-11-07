#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	srand(time(NULL));
	int random_number = rand() % 100 + 1;
	int number_user;
	printf("Choisissez un nombre entre 1 et 100 :\n");
	scanf("%d", &number_user);

	while(number_user != random_number)
	{
		if (number_user > random_number)
		{
			printf("C'est moins\n");
		}
		else if (number_user < random_number)
		{
			printf("C'est plus\n");
		}
		printf("Choisissez un nombre entre 1 et 100 :\n");
		scanf("%d", &number_user);
	}
	if(number_user == random_number)
	{
		printf("Bon numéro trouvé !!\n");
	}

	return 0;
}
