#include "charniere.h"
#include "telecommande.h"


#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>



void tlcm_init(struct telecommande* t){
  t->nb_porte=0;
}

//l'initialisation se fait comme ca tout simplement;sans portes associees
//charnieres.

void tlcm_positionner(struct telecommande* t, struct charniere p){
  if(t->nb_porte < MAX_BOUTON){
    t->mes_portes[t->nb_porte]=p;
    t->nb_porte++;
  }
}

//on essaie d'associe apres l'initialisation la telecommande a de possibles
//portes charnieres ; c'est à dire que t->mes_portes qui sera un tableau de
//charnieres va contenir que p c'est à dire appyer t->nb_porte fois < MAX_
//BOUTON avec incrementation pour ouvrir la charniere p en question.

void tlcm_activer(struct telecommande* t, int numero_bouton){
  if(numero_bouton<t->nb_porte){
    chrn_ouvrir(&(t->mes_portes[numero_bouton]));
  }
}

//cela permet d'ouvrir d'activer la telecommande sur une charniere
//tout en gardant en l'esprit qu'on active on appuie via le numero_bouton
//correspondant a la porte qui lui correpond tout cela si numero_bouton<t->nb
//_porte correspondant.

void tlcm_desactiver(struct telecommande* t, int numero_bouton){
  if(numero_bouton<t->nb_porte)
    chrn_ouvrir(&(t->mes_portes[numero_bouton]));
}

void tlcm_desactiver_tout(struct telecommande* t){
  int i;
  for(i=0;i<t->nb_porte;i++){
    if(t->mes_portes[i].ferme == OUVERT_PORTE)
      chrn_fermer(&(t->mes_portes[i]));
  }
}
