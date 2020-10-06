# Emulator_Gamebuino

Bonjour,

Après le dev de mon jeu sur la console, je me suis dis qu'il manquait un outils pour tester rapidement son jeu sans devoir téleverser son code sur la console.

C'est pour ça que je me suis lancé dans une longue et aventureuse mission, celle de devoir crée un éditeur unique pour la Gamebuino, où il suffirait de devoir executer la commande make dans un terminale pour que le jeu se lance sur l'ordi sans devoir modifier le code du .ino.

~~Pour l'instant la moitié de la lib Gamebuino-Meta est réalisée, (avec quelques class supplémentaires comme des class qui permette de faire du Vectoriel), je suis en train de créé la class Image.~~

Les classes principales de Gamebuino (display, image, gamebuino) sont fonctionnels. (Je n'aurais plus le temps de la maintenir, je vous donnerais accès au repo si vous maintenez la lib)

### Comment ça marche ?

Pour l'instant pas d'éditeur fonctionnel mais si vous voulez retrouver la structure d'Arduino (`loop()` et `setup()`)  vous pouvez modifier le fichier `game.cpp` dans le dossier `[repo_name]/srcs/`.

Pour compiler votre code, sauvegardez le fichier `game.cpp` et lancez la commande `make` à la racine du repo.

~~Un fois la compilation effectué vous pouvez lancer votre jeu en executant le binaire nommé emulate à la racine du repo.~~

La commande `make` lance directement le jeu (la compilation se fait avec les flags `-Wall -Wextra -Werror` ces flags transformes vos Warning en Erreur de compilation)

### Comment je rajoute des fichiers a mon jeu ? 

C'est très simple pour rajouter des fichiers `C++`, il vous suffit de les ajouter dans `[repo_name]/srcs/game_files/`. ATTENTION : Ils devront tous finir avec l'extention `.cpp` sinon il ne seront pas pris en compte lors de la compilation.

Vous pouvez aussi rajouter des headers hpp, dans le dossier `[repo_name]/includes/game_includes`. ATTENTION : Pour inclure ces Headers dans un fichier vous devrez utiliser un include dans ce style `#include "game_includes/[headers_name.hpp]"`;

### Avertissement :

La fenêtre s'ouvre avec une résolution de `800x640` soit 10 fois plus que l'écran de Gamebuino. J'ai prévu le coup avec un define `P(x)` qui fais x10 la valeur de x, normalement toutes les fonctions qui print un pixel, une ligne... réalise le x10 sauf `drawImage()` qui prend paramètre la `W` et `H` de l'image (Je vous laisse le choix de la taille).

Si votre gestion de la physique est liée à des pixels il se pourrait que ça provoque des bugs (je n'ai pas suffisament de recule pour savoir).

### Codez bien ;) 
