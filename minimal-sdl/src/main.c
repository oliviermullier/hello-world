#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>


void pause()
{
    int continuer = 1;
    SDL_Event event;
 
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_VIDEO); // Initialisation de la SDL
 
    SDL_Surface * ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE); // Ouverture de la fenêtre
    
    // chargement de l'image logo.png
    SDL_Surface *image = IMG_Load("logo.png");
    if(!image) {
        printf("IMG_Load: %s\n", IMG_GetError());//gestion des erreurs
        SDL_Quit(); // Arrêt de la SDL
        return -1;
}
    
    SDL_Rect position_image1, position_image2;
    
    position_image1.x = 20;
    position_image1.y = 20;
    
    SDL_BlitSurface(image, NULL, ecran, &position_image1);
    
    position_image2.x = 240;
    position_image2.y = 20;
    
    SDL_BlitSurface(image, NULL, ecran, &position_image2);
    
    pause(); // Mise en pause du programme
 
    SDL_Quit(); // Arrêt de la SDL
 
    return EXIT_SUCCESS; // Fermeture du programme
}
