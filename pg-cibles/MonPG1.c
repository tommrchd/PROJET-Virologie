#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

char * strtoupper( char * dest, const char * src ) {
    char * result = dest;
    while( *dest++ = toupper( *src++ ) );
    return result;
}

char* replace_char(char* str, char find, char replace){
    char *current_pos = strchr(str,find);
    while (current_pos) {
        *current_pos = replace;
        current_pos = strchr(current_pos+1,find);
    }
    return str;
}

int main(int argc, char *argv[]) {

char validation = 'n';
char * motADeviner;
char * motCapsLock;
char result[20];
char jeuEnCours = 't';


while (validation == 'n' || validation == 'N')
{
    printf("Joueur 1 choisi un mot à faire deviner : ");
    scanf("%s", motADeviner);

    motCapsLock = strtoupper(result, motADeviner);

    printf("Voulez vous bien faire deviner le mot %s ? y/n ", motCapsLock);
    scanf("%s", &validation);

    if (validation == 'y' || validation == 'Y')
    {
        break;
    } else {
        validation = 'n';
    }
}

system("clear");
printf("Au tour de Joueur 2 !\n");

printf("\n                  ___________      ");
printf("\n                 |/          |     ");
printf("\n                 |           0     ");
printf("\n                 |          /|\\    ");
printf("\n                 |           |     ");
printf("\n                 |          / \\    ");
printf("\n                 |                 ");
printf("\n               __|__               \n");

printf("\nFin du jeu !\n");
return EXIT_SUCCESS;
}