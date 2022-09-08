#include "charniere.h"


#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

void chrn_init(struct charniere* c){
  c->ferme=OUVERT_PORTE;
}
//pivoter charniere;porte ferme tout au debut;l'initialisation se fera comme ca.

void chrn_fermer(struct charniere* c){
  c->ferme=FERME_PORTE;
}

void chrn_ouvrir(struct charniere* c){
  c->ferme=OUVERT_PORTE;
}

//ajout de cette derniere;essentielle aux tests.

int chrn_est_ferme(struct charniere* p){
  return p->ferme=FERME_PORTE;
}
