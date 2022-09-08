#ifndef CHARNIERE_H
#define CHARNIERE_H

#define FERME_PORTE 0
#define OUVERT_PORTE 1

struct charniere{
  int ferme;
  long canal;
};

void chrn_init(struct charniere*);
void chrn_fermer(struct charniere*);
void chrn_ouvrir(struct charniere*);
int chrn_est_ferme(struct charniere* p);//ajout de cette derniere pour le code
//test client final.

#endif 
