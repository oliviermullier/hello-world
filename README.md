#hello_world 

Ceci est un exemple de dépôt GIT.

##commandes saisies

Récupération du dépôt GIT :


```console
olivier@mullier:~$ git clone git@github.com:oliviermullier/hello-world.git
```


```console
olivier@mullier:~$ cd hello_world
```
(Édition du fichier __README.md__)


Ajout du fichier README.md


```console
olivier@mullier:~$ git add README.md
```


Sauvegarde des changements en local


```console
olivier@mullier:~$ git commit -m "ajout du fichier README.md"
```


Déploiement des modifications sur le dépôt GIT


```console
olivier@mullier:~$ git push
```


Création d'une nouvelle branche de développement


```console
olivier@mullier:~$ git branch devel
```


Passage à la branche devel


```console
olivier@mullier:~$ git checkout devel
```


Édition du fichier __hello_world.c__ dans le dossier GIT


```c
#include <stdio.h>

int main(){
    printf("Hello world\n");
    return 0;
}
```
Ajout du fichier hello_world.c


```console
olivier@mullier:~$ git add GIT/hello_world.c
```

Sauvegarde des changements en local


```console
olivier@mullier:~$ git commit -m "ajout du fichier hello_world.c"
```


Déploiement des modifications sur le dépôt GIT (dans la branche devel)


```console
olivier@mullier:~$ git push --set-upstream origin devel
```


Retour sur la branch master


```console
olivier@mullier:~$ git checkout master
```


Fusion de la branche devel dans la branche master


```console
olivier@mullier:~$ git merge devel
```


Déploiement des modifications


```console
olivier@mullier:~$ git push
```
