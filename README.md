# ft_printf

**ft_printf** est une réimplémentation personnalisée de la fonction standard `printf` en C, développée dans le cadre du cursus de l'école 42. Ce projet vise à comprendre et reproduire le fonctionnement interne de `printf`, en gérant divers formats de sortie pour les chaînes de caractères, les nombres, et d'autres types de données.

## Fonctionnalités

- **Gestion des conversions** :
  - `%c` : Affiche un caractère.
  - `%s` : Affiche une chaîne de caractères.
  - `%p` : Affiche une adresse mémoire (pointeur).
  - `%d` et `%i` : Affiche un entier signé.
  - `%u` : Affiche un entier non signé.
  - `%x` et `%X` : Affiche un nombre en hexadécimal (en minuscules `%x` ou en majuscules `%X`).
  - `%%` : Affiche un pourcentage littéral.

- **Manipulation des arguments variadiques** : Utilisation de la bibliothèque standard C pour gérer un nombre variable d'arguments (via `va_list`, `va_start`, `va_arg`, et `va_end`).

- **Gestion de la précision et de la largeur** : Support des spécificateurs de largeur et de précision pour le formatage des chaînes et des nombres.

## Installation

Pour compiler et utiliser **ft_printf**, suivez les étapes ci-dessous :

1. Clonez ce dépôt sur votre machine locale :
    ```bash
    git clone https://github.com/votre-nom-utilisateur/ft_printf.git
    ```

2. Accédez au répertoire du projet :
    ```bash
    cd ft_printf
    ```

3. Compilez la bibliothèque en utilisant `make` :
    ```bash
    make
    ```

4. Pour inclure **ft_printf** dans votre propre projet, compilez votre code avec `libftprintf.a` :
    ```bash
    gcc -Wall -Werror -Wextra -o my_program my_program.c libftprintf.a
    ```

## Utilisation

Vous pouvez utiliser **ft_printf** comme vous utiliseriez la fonction standard `printf`. Voici quelques exemples d'utilisation :

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Affiche un entier : %d\n", 42);
    ft_printf("Affiche un hexadécimal : %x\n", 255);
    return 0;
}
