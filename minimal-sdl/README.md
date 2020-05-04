# Exemple d'utilisation de la SDL
 
Ceci est un exemple minimal d'utilisation de la SDL ainsi que SDL_Image.
Il ne fait qu'afficher une fenêtre ainsi qu'une image png et permet de voir si la SDL a bien été installée.

## Compilation
Dans le fichier src, la compilation se fait à l'aide de la commande

```console
olivier@mullier:~/Directory/to/src$ gcc main.c $(sdl-config --cflags --libs) -lSDL_image -o minimal.x
```

L'éxecutable minimal.x est alors créé.
L'exécution de minimal.x entraîne l'affichage d'une fenêtre noire contenant 2 fois l'image logo.png que l'on peut fermer avec la croix.