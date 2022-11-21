#include <stdio.h>
#include <string.h>
#include"utilisateur.h"
int main()
{
    int x;
    int x1;
    listeE TL[100]= {};
    int n=0;
    float agemoy;
    utilisateur u= {"yasmine","amor",10833472,1599932,"yasmine123","femme","candidat",12,-1,30,07,2002};
    utilisateur u1= {"jasmine","amor",4564888,54654548,"jasmine123","femme","agent_bureau",9,1,16,8,2003};
    utilisateur u2= {"aya","amor",5645465,1236547,"aya123","femme","electeur",8,3,05,05,1980};
    utilisateur u3= {"ahmed","amar",98976566,13215778,"ahmed123","homme","candidat",15,7,12,01,1990};
    utilisateur u4= {"anis","ben_amor",4564888,54654548,"anis123","homme","electeur",16,9,14,04,2000};
    utilisateur u5= {"hedi","sassi",15648798,34654748,"hedi123","homme","agent_bureau",11,6,11,12,1997};
    listeE E= {"list1",5465464,4548877,5454665,4645884,323487,12,1,2002,"gauche","list3","monastir",1,0};
    listeE E1= {"list2",5445448,9632354,4512265,7856565,4787796,8,3,2002,"gauche","list1","sousse",2,0};
    listeE E2= {"list3",3221344,96332322,45213215,78896565,4787796,10,14,2002,"gauche","list4","tunis",3,0};
    listeE E3= {"list4",7978844,4213313,45412123,75577865,4787796,7,5,2002,"gauche","list1","ariana",4,0};
    listeE E4= {"list5",2131544,49555467,45213214,14126565,4787796,30,02,2002,"gauche","list2","ben_arous",5,0};
    x=ajouter("utilisateur.txt",u);
    x=ajouter("utilisateur.txt",u1);
    x=ajouter("utilisateur.txt",u2);
    x=ajouter("utilisateur.txt",u3);
    x=ajouter("utilisateur.txt",u4);
    x=ajouter("utilisateur.txt",u5);
    x1=ajouter1("liste.txt",E);
    x1=ajouter1("liste.txt",E1);
    x1=ajouter1("liste.txt",E2);
    x1=ajouter1("liste.txt",E3);
    x1=ajouter1("liste.txt",E4);
    n= L_ordre( "liste.txt",TL,"utilisateur.txt" );
    printf("le nombre des liste est: %d \n ",n);
    agemoy=agemoyen("utilisateur.txt");
    printf("l'age moyen est:%.2f \n",agemoy);

    return 0;
}


