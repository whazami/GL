#include "userint.h"
#include "stdio.h"

int main (void)
{
	char ligne1[80] =  "Nom: pentagone_B", nom_fig[100], message[100];
	char ligne2[80] =  "Nb points: 5"; 
	char ligne3[80] =  "Coordonnees: 10 20 30 20 30 40 43 53 35 65";
	long x[5], y[5], nb_pts;
	
	if(ligne3[41]==0 || ligne2[11]==0 || ligne1[5]==0)
		MessagePopup("Erreur", "Il manque au moins une donnée.");
	
	else
	{
    sscanf(ligne1,"%*s %s",nom_fig);
	sscanf(ligne2,"%*s %*s %d",&nb_pts);
	sscanf(ligne3,"%*s %d %*d %d %*d %d %*d %d %*d %d %*d",&x[0], &x[1], &x[2], &x[3], &x[4]);
	sscanf(ligne3,"%*s %*d %d %*d %d %*d %d %*d %d %*d %d",&y[0], &y[1], &y[2], &y[3], &y[4]);
	
	sprintf(message,"La figure %s possède %d sommets",nom_fig,nb_pts);
	MessagePopup("informations figure",message);
	}
return 0;
}
