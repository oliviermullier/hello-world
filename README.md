#hello_world 

Ceci est un exemple de dépôt GIT.
On considère que la création du dépôt a déjà été réalisé, le dépôt contient donc la branche *master*.
Les instructions qui suivent permettent l'ajout d'un fichier **README.md**, la création d'une branche *devel*
sur laquelle le fichier **hello_world.c** est ajouté.
Afin de figer le developpement actuel, la branche *devel* est fusionnée avec la branche *master*.

La suite logique (non présente ici) est de reprendre la branche devel afin de continuer le developpement du projet.
La branche *master* contient quant à elle la dernière version stable du projet.
Il s'agit ici d'appliquer un workflow git basique.
Un workflow git est une méthodologie d'utilisation de GIT dans le développement de projet.
Plus de détails ici :
idée générale et exemples : [https://delicious-insights.com/fr/articles/git-workflows-generality/](https://delicious-insights.com/fr/articles/git-workflows-generality/) 
un workflow git classique : [https://nvie.com/posts/a-successful-git-branching-model/](https://nvie.com/posts/a-successful-git-branching-model/) 

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
