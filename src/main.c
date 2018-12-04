#include "stdio.h"

int main (void)
{
	char Nom[100], Prenom[100];
	long age = 0;
	
	printf("Nom : ");
	scanf("%s", Nom);
	printf("Prenom : ");
	scanf("%s", Prenom);
	printf("Age : ");
	scanf("%d", &age);
	printf("Je m'appelle %s %s et j'ai %d ans", Prenom, Nom, age);

return 0;
}
