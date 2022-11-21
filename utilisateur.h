#ifndef UTILISATEUR_H_INCLUDED
#define UTILISATEUR_H_INCLUDED
#include <stdio.h>
#include<string.h>


typedef struct
{
    int j;
    int m;
    int a;
} date;
typedef struct
{
    char nom [50];
    char prenom[50];
    int cin;
    int id;
    char mdp[50];
    char sexe[50];
    char role[50];
    int numvote;
    int vote;
    date d;

} utilisateur;
typedef struct
{
    char nom_liste[20];
    int id_liste;
    int id1;
    int id2;
    int id3;
    int id_tete_liste;
    date date_ajout;
    char orientation[20];
    char vote[20];
    char region[20];
    int num_liste;
    int nb_vote;
} listeE;

int ajouter(char *, utilisateur u );
int ajouter1(char *, listeE E );
int L_ordre( char *fichierliste, listeE TL[], char * filename);
float agemoyen(char * fichierusers);
#endif // UTILSATEUR_H_INCLUDED

