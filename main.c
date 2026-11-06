#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()

{

	srand(time(NULL));
	int random_number = rand() % 100 + 1;
	printf("Choisissez un nombre entre 1 et 100 :\n");
	scanf("%d", &random_number);

return(0);

}
