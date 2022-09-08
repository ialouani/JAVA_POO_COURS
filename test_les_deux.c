#include<stdio.h>
#include<stddef.h>

#include<stdlib.h> //pour la macro de retour $? qui vaut 0.

#include<assert.h>
#include "telecommande.h"
#include "charniere.h"

int main(){
  struct charniere p0,p1,p2;
  chrn_init(&p0);
  chrn_init(&p1);
  chrn_init(&p2);
  assert(!chrn_est_ferme(&(p0)));

  struct telecommande tele;
  tlcm_init(&tele);

  tlcm_positionner(&tele,p0);
  tlcm_positionner(&tele,p1);
  tlcm_positionner(&tele,p2);

  tlcm_desactiver_tout(&tele);
  assert(!chrn_est_ferme(&(tele.mes_portes[0])));
  assert(!chrn_est_ferme(&(tele.mes_portes[1])));
  assert(!chrn_est_ferme(&(tele.mes_portes[2])));

  tlcm_activer(&tele,0);
  tlcm_activer(&tele,2);
  tlcm_activer(&tele,1);

  assert(!chrn_est_ferme(&(tele.mes_portes[0])));
  assert(!chrn_est_ferme(&(tele.mes_portes[1])));
  assert(!chrn_est_ferme(&(tele.mes_portes[2])));

  printf("ALL TESTS OK!\n");

  return EXIT_SUCCESS;
}
