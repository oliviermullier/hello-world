# Exemple d'utilisation de la SDL
 
Ceci est un exemple minimal d'utilisation de la SDL.
Il ne fait qu'afficher une fenêtre et permet de voir si la SDL a bien été installée.

## Compilation
Dans le fichier src, la compilation se fait à l'aide de la commande

```console
olivier@mullier:~/Directory/to/src$ gcc main.c $(sdl-config --cflags --libs) -o minimal.x
```

L'éxecutable minimal.x est alors créé.
L'exécution de minimal.x entraîne l'affichage d'une fenêtre noire que l'on peut fermer avec la croix.