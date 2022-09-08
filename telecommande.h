#ifndef TELECOMMANDE_H
#define TELECOMMANDE_H

#include "charniere.h"

#define MAX_BOUTON 3

struct telecommande{
  struct charniere mes_portes[MAX_BOUTON];
  int nb_porte;
};

//la telecommande contient le nombre de portes a possiblement y acceder via
//celle-ci ; ainsi que les charnieres qui sont au plus 3 fois associees
//a celle-ci indirectement via struct charniere[] tableau de structure
//de nombre MAX_BOUTON.

void tlcm_init(struct telecommande* t);
void tlcm_positionner(struct telecommande* t, struct charniere p);
void tlcm_activer(struct telecommande* t, int numero_bouton);
void tlcm_desactiver(struct telecommande* t, int numero_bouton);
void tlcm_desactiver_tout(struct telecommande* t);

#endif
