libag - Bibliothèque de fonctions
---------------------------------

La bibliothèque _libag_ complète la _[libft][]_ en y ajoutant des fonctions bonus.

## Utilisation et compilation

_libag_ utilise des fonctions de la [Libft][] et a besoin de son header pour pouvoir être compilé. Il faut fournir au _Makefile_ le chemin vers le dossier le contenant à l'aide de la variable *LIBFT_INC*.

	$> make LIBFT_INC=../libft/includes all

La documentation peut être créée avec la commande suivante :

	$> make doxygen

La documentation est générée grâce à [Doxygen][]. Le _Makefile_ utilise l'alias `doxygen` pour faire appel à l'exécutable, mais si celui-ci n'est pas défini il faut utiliser la commande :

	$> make doxygen DOXYGEN=/CHEMIN/VERS/EXECUTABLE/DE/DOXYGEN

## Fonctions

### - Affichage

- `ag_putcharl` : Affichage d'un caractère suivi d'un retour à la ligne
- `ag_putchars` : Affichage d'un caractère suivi d'un espace
- `ag_putxchar` : Affichage d'un caractère _x_ fois
- `ag_putcharl_fd` : Écriture d'un caractère suivi d'un retour à la ligne sur un `fd`
- `ag_putchars_fd` : Écriture d'un caractère suivi d'un espace sur un `fd`
- `ag_putnbrl` : Affichage d'un nombre suivi d'un retour à la ligne
- `ag_putnbrs` : Affichage d'un nombre suivi d'un espace
- `ag_putnbrl_fd` : Écriture d'un nombre suivi d'un retour à la ligne sur un `fd`
- `ag_putnbrs_fd` : Écriture d'un nombre suivi d'un espace sur un `fd`

### - Gestion de liste

- `ft_lstagnew` : Création d'un maillon : allocation de la taille nécessaire et initialisation des champs
- `ft_lstagadd` : Ajout d'un maillon en tête de liste
- `ft_lstagaddtail` : Ajout d'un maillon en queue de liste
- `ft_lstagdelone` : Suppression d'un maillon
- `ft_lstagdel` : Suppression de toute une liste
- `ft_lstagiter` : Application d'une fonction sur les maillons
- `ft_lstagcountelem` : Dénombrement du nombre de maillon
- `ft_lstagtail` : Renvoie la queue de liste
- `ft_lstagmapif` : Création d'une liste à partir d'une sélection de maillon

### - Gestion de mémoire

- `ft_memrealloc` : Réallocation d'une zone de mémoire. Copie de l'ancienne dans la nouvelle

### - Gestion de fichiers

- `is_dir` : Teste si l'élément pointé est un dossier

### - Autres

- `get_next_line` : Lit une ligne sur un `fd` et la retourne

[libft]: https://github.com/aguerin42/libft.git
[Doxygen]: https://github.com/doxygen/doxygen
