#include <stdio.h>
 
 int main ()
 {
  char nome [50];
   char prenom [50];
  char sexe [10];
  char email [50];
  int age ;
  entrez//
  printf ("entrez votre nom:");
 scanf ("%s", nome);

 printf ("entrez votre prenom:");
 scanf ("%s", prenom);

 printf("entrez votre sexe:");
 scanf ("%s", sexe);

printf ("entrez votre email:");
scanf ("%s", email);

printf("entrez votre age");
scanf("%d", &age);

         afficher les donnees//
printf ("\n informations personnelles:\n");
printf ("name: %s\n",nome);
printf("prenom: %s\n", sexe);
printf("email: %s\n", email);
printf("age: %d\n",age);
return 0;

 }