## 2. Cours I - Variables

*Liens rapides*

1.0. [Définition](#10-définition)
- 1.0.1. [Le type d'une variable](#101-le-type-dune-variable)
    - 1.0.1.1 [Les types primitifs](#1011-les-types-primitifs)
        - 1.0.1.1.1. [Les intégrales](#10111-les-intégrales)
        - 1.0.1.1.2. [Les flottantes](#10112-les-flottantes)
        - 1.0.1.1.3. [Les binaires](#10113-les-binaires)
    - 1.0.1.2. [Les types personnalisés](#1012-les-types-personnalisés)
        - 1.0.1.2.1. [Les données](#10121-les-données)
        - 1.0.1.2.2. [Les énumérations](#10122-les-énumérations)
        - 1.0.1.2.3. [Les classes](#10123-les-classes)
- 1.0.2. [La taille d'une variable](#102-la-taille-dune-variable)
    - 1.0.2.1. [La taille des types primitifs](#1021-la-taille-des-types-primitifs)
        - 1.0.2.1.1. [La taille des intégrales](#10211-la-taille-des-intégrales)
        - 1.0.2.1.2. [La taille des flottantes](#10212-la-taille-des-flottantes)
        - 1.0.2.1.3. [La taille des binaires](#10213-la-taille-des-binaires)
    - 1.0.2.2. [La taille des types personnalisés](#1022-la-taille-des-types-personnalisés)
        - 1.0.2.2.1. [La taille des données](#10221-la-taille-des-données)
        - 1.0.2.2.2. [La taille des énumérations](#10222-la-taille-des-énumérations)
        - 1.0.2.2.3. [La taille des classes et des objets](#10223-la-taille-des-classes-et-des-objets)
- 1.0.3. [Le nom ou alias d'une variable](#103-le-nom-ou-alias-dune-variable)
- 1.0.4. [La durée de vie d'une variable](#104-la-durée-de-vie-dune-variable)
- 1.0.5. [L'information d'une variable](#105-linformation-dune-variable)
- 1.0.6. [La mutabilité d'une variable](#106-la-mutabilité-dune-variable)
- 1.0.7. [L'identifiant d'une variable](#107-lidentifiant-dune-variable)
- 1.0.8. [La nature d'une variable](#108-la-nature-dune-variable)
- 1.0.9. [La visibilité d'une variable](#109-la-visibilité-dune-variable)
- 1.0.10. [L'addresse d'une variable](#1010-laddresse-dune-variable)

### 1.0. Définition
Les variables sont des 'boîtes' qui conservent de l'information.
Toutes variables possèdent les propriétés fondamentales suivantes:
- Un type
- Une taille
- Un nom ou alias
- Une durée de vie
- De l'information
- Une mutabilité
- Un identifiant
- Une nature
- Une addresse

#### 1.0.1. Le type d'une variable
Le type restreint la variable à ce qu'elle peut contenir comme information.

Il est impossible de changer le type d'une variable une fois déclarée.

Il existe 2 catégories de type de variables:
- Types primitifs
- Types personnalisés

##### 1.0.1.1. Les types primitifs
Les types primitifs aussi appelés 'types fondamentaux' sont spécifiés par le standard du language de programmation Mrald.
Les types primitifs sont séparés en 3 sous-catégories:
- Les intégrales
- Les flottantes
- Les binaires

Tous les types primitifs sont copiables.

##### 1.0.1.1.1. Les intégrales
Les variables de type intégral ne peuvent contenir que des valeurs entières comme information.
ex: 0, -1, 2014, -31

Les intégrales sont séparées en 2 sous-catégories:
- Les intégrales signées (char, short, int, long, int8, int16, int32, int64)
- Les intégrales non signées (byte, ushort, uint, ulong, uint8, uint16, uint32, uint64)

La différence entre les variables signées et non signées c'est leur interprétation de la valeur.
Les variables signées utilisent le dernier 'bit' pour savoir si le nombre (formé par les 'bits' précédents) est négatif.

Cela implique, par conséquent, 2 choses:
- Les variables signées perdent un 'bit' de précision
- Les variables non signées ne peuvent pas être négatives

Voici un tableau comparatif des valeurs représentées par les types intégraux:

| Type 		| Signé		| Valeur défaut | Valeur Minimale 				| Valeur Maximale 				| Valeurs possibles 			|
| --------- | --------- | ------------- | ----------------------------- | ----------------------------- | ----------------------------- |
|	char	|	Oui		|   '\0'        |	-128						|	+127						|	256							|
|	short	|	Oui		|     0         |	-32,768 					|	+32,767						|	65,536						|
|	int		|	Oui		|     0         |	-2,147,483,648				|	+-2,147,483,647				|	4,294,967,296				|
|	long	|	Oui		|     0         |	-9,223,372,036,854,775,808	|	+9,223,372,036,854,775,807	|	18,446,744,073,709,551,616	|
|	int8	|	Oui		|     0         |	-128						|	+127						|	256							|
|	int16	|	Oui		|     0         |	-32,768						|	+32,767						|	65,536						|
|	int32	|	Oui		|     0         |	-2,147,483,648				|	+2,147,483,647				|	4,294,967,296				|
|	int64	|	Oui		|     0         |	-9,223,372,036,854,775,808	|	+9,223,372,036,854,775,807	|	18,446,744,073,709,551,616	|
|	byte	|	Non		|     0         |	0							|	+255						|	256							|
|	ushort	|	Non		|     0         |	0							|	+65,535						|	65,536						|
|	uint	|	Non		|     0         |	0							|	+4,294,967,295				|	4,294,967,296				|
|	ulong	|	Non		|     0         |	0							|	+18,446,744,073,709,551,615	|	18,446,744,073,709,551,616	|
|	uint8	|	Non		|     0         |	0							|	+255						|	256							|
|	uint16	|	Non		|     0         |	0							|	+65,535						|	65,536						|
|	uint32	|	Non		|     0         |	0							|	+4,294,967,295				|	4,294,967,296				|
|	uint64	|	Non		|     0         |	0							|	+18,446,744,073,709,551,615	|	18,446,744,073,709,551,616	|

##### 1.0.1.1.2. Les flottantes
Les variables de type flottante peuvent contenir des valeurs avec des parts fractionnelles.
ex: -0.555, 3.6667, 0.0, 3.14

Les flottantes peuvent aussi représenter des valeurs négatives.
Le standard du language de programmation Mrald défini les flottantes par la norme IEEE-754.

Les flottantes supportées:
- Simple précision (float, f32)
- Double précision (double, f64)

Les flottantes non supportées ou expérimentales:
- Demie précision (half, f16)
- Double précision étendue (f128)

Voici un tableau comparatif des valeurs représentées par les types flottants:

| Type 		| Signé		| Valeur défaut | Valeur Minimale 				| Valeur Maximale 				| Nombre de chiffres 			|
| --------- | --------- | ------------- | ----------------------------- | ----------------------------- | ----------------------------- |
|   float   |   Oui     |   0.0         |   ~ -3.4x10e38                |   ~ +3.4x10e38                |   7                           |
|   f32     |   Oui     |   0.0         |   ~ -3.4x10e38                |   ~ +3.4x10e38                |   7                           |
|   double  |   Oui     |   0.0         |   ~ -1.7x10e308               |   ~ +1.7x10e308               |   15                          |
|   f64     |   Oui     |   0.0         |   ~ -1.7x10e308               |   ~ +1.7x10e308               |   15                          |

##### 1.0.1.1.3. Les binaires
Les variables de type binaire ne peuvent contenir que 2 valeurs possibles:
- true
- false

De la même manière qu'un 'bit' ne peut contenir qu'un 0 ou 1.
Les variables binaires peuvent être utiliser pour représenter une comparaison ou pour exécuter du code sous condition.

Les binaires supportées:
- Les booléens (boolean)

Voici un tableau comparatif des valeurs représentées par les types binaires:
| Type      | Signé     | Valeur défaut | Valeurs possibles     |
| --------- | --------- | ------------- | --------------------- |
|   boolean |   Non     |   false       |   true, false         |

##### 1.0.1.2. Les types personnalisés
Les types personnalisés sont aussi appelés des 'types définis par les usagers'. Lorsque vous devez utiliser une variable qui ne peut être représenté par un type primitif, il est recommandé d'utiliser un type personnalisé existant ou d'en créer un nouveau. Le standard du language de programmation Mrald permet leur création grâce aux modèles suivants:
- Les données
- Les énumérations
- Les classes

##### 1.0.1.2.1. Les données
Reprenant notre exemple des 'boîtes', imaginez que vous collez plusieurs de ces petites 'boîtes' ensemble pour ne former qu'un seul 'meuble de rangement'. L'avantage d'avoir regroupé ces 'boîtes' c'est que vous pouvez créer des variables qui peuvent contenir plus d'information.

Dorénavant les 'boîtes' que vous avez mises ensemble seront nommées des 'champs' dans votre nouveau type de données. Il est primordial que vous comprenez que nous n'avons pas créé une plus grosse 'boîte', mais plutôt un 'espace de rangement' pour ces 'boîtes' que l'on appèlera des 'champs'.

Tous les types de données sont copiables.

Points très importants:
- Un type de données ne comporte **que** des 'champs'
- Les 'champs' n'ont pas durée de vie prolongée*(1)
- Les 'champs' sont tous mutables*(2)
- Les 'champs' sont tous publiquement accessibles*(3)
- Il faut accéder aux 'champs' pour lire ou conserver l'information
- La 'disposition' de ses 'champs' est fixe
- Vous ne pouvez **pas** utiliser de *classe* comme type de 'champs'*(4)
- Il est permis d'utiliser des types primitifs, données*(5), énumérations comme type de 'champs'
- Il est permis de *'surcharger des opérateurs'* pour un type de données*(6)

*(1)Les 'champs' disparaissent tous lorsque la durée de vie de la variable se termine.

*(2)Les 'champs' d'un type de données ne peuvent pas être *non-mutable*. Seuls les variables, ou *'membres d'une classe'*, ont cette propriété. Par conséquent, il est impossible de spécifier une 'mutabilité' aux 'champs' d'un type de données.

*(3)Les 'champs' d'un type de données ne peuvent pas être *'encapsulés'*. Seuls les *'membres attributs d'une classe'* ont cette propriété. Par conséquent, il est impossible de spécifier un *'niveau d'accès'* aux 'champs' d'un type de données.

*(4)Les 'champs' ne peuvent **pas** être 'construits' ou initialisé par des objets.

*(5)Sous les conditions suivantes:
- Les types de données valides pour des 'champs' doivent être **différents** des types de données définis
- Les types de données valides pour des 'champs' ne doivent **pas** comporter  de 'champs' de données à leur tour

*(6)Sauf les opérateurs réservés et l'opérateur **'as'**

À retenir, le mot clé **data** que nous verrons plus tard comment utiliser.

##### 1.0.1.2.2. Les énumérations
Une énumération est un type personnalisé d'une intégrale, qui contrairement à un type primitif, ne peut que prendre certaines valeurs entières fixes et prédéfinies.

Les énumérations sont souvent utilisées pour représenter des 'états' ou pour faire des manipulations de 'bits'.

Tous les types d'énumérations sont copiables.

Points importants:
- Les valeurs peuvent être assignées par l'usager avec des constantes; sinon le compilateur doit s'en occuper
- La valeur par 'défaut' peut être assignées par l'usager; sinon le compilateur doit s'en occuper
- Le type d'intégrale est automatiquement déduit par le compilateur
- Il est impossible de *'surcharger des opérateurs'* pour les énumérations

À retenir, le mot clé **enum** que nous verrons plus tard comment utiliser.

##### 1.0.1.2.3. Les classes
Les classes sont comme un dessin industriel pour une voiture. Sur le dessin, on spécifie combien il y aura de roues, de sièges, mais le dessin vous dira aussi si le véhicule peut se déplacer, stopper, ou perdre du carburant lorsqu'il se déplace à une certaine vitesse. Eh bien, c'est ça une classe. Lorsque vous créez une variable de type classe, elle possédera tous les **'atouts'** que la classe lui fournira, mais **pas tous** seront **accessibles**.

Les variables des classes s'appèlent des **'objets'**.

La définition formelle d'un objet selon le standard du language de programmation Mrald est la suivante:
- *L'objet est l'instance d'une classe*

Les objets ne sont **pas tous copiables**.

Les classes ont des 'membres'.*
Ces 'membres' sont divisés en 2 catégories:
- Les attributs
- Les méthodes

**Tous** les membres possèdent un 'niveau d'accès'.
Par **défaut**, la classe donne un 'niveau d'accès' **privé** à tous ses membres.
Il existe 3 'niveaux d'accès' parmi lesquels une classe peut assigner à chacun de ses membres:
- Accès privé
- Accès protégé
- Accès publique

Les 'membres attributs' ne sont pas tous 'mutables'.*
Par **défaut**, les 'membres attributs' sont **mutables**.
Pour qu'un 'membre attribut' soit *non-mutable* vous devez utilisez le mot clé **readonly**.

Points très importants:
- Seuls les objets **copiables** peuvent être 'retourner par une fonction, méthode ou opérateur'
- Il est impossible de modifier ses 'membres méthodes'
- Il est impossible de modifier la 'mutabilité' des 'membres attributs' d'une classe
- Tout 'membre attribut' de type primitif peut être initialisé par défaut
- Tout 'membre attribut' de type énumération peut être initialisé par défaut
- Tout 'membre attribut' de type données doit explicitement être initialisé (dans chacun des constructeurs de la classe)*
- Tout 'membre attribut' de type classe doit explicitement être initialisé (dans chacun des constructeurs de la classe)*
- Tout 'membre attribut' non-mutable doit explicitement être initialisé (dans chacun des contructeurs de la classe)*
- Il est impossible de modifier le 'niveau d'accès' des membres d'une classe
- Il est permis de *'surcharger des opérateurs'* pour une classe (sauf pour les opérateurs réservés et sauf l'opérateur **'as'** qui sera pris en charge par le compilateur dans un *contexte d'héritage*)
- Il n'est **pas** permis d'utiliser un *'opérateur'* comme 'méthode membre'

Pour y voir plus clair avec les 'niveaux d'accès' et la mutabilité des 'membres attributs', voici un petit exemple:
- Vous avez une maison, c'est un objet qui a été contruit par une architecte. Celle-ci comporte 3 chambres chacune avec porte et code d'accès. La première chambre est pour invité et le code d'accès est publiquement affiché sur la porte. La deuxième chambre est vous et à votre mère et vous seuls avez son code d'accès. La troisième chambre est à vous, il n'y a que vous qui connaissez le code pour y entrer et il vous est interdit de le partager.
- Dans la deuxième chambre, il y a des meubles mais selon les plans de l'architecte, il est impossible de les déplacer dans la pièce. Heureusement, dans la troisième chambre, à vous, vous pouvez ajouter des meubles comme bon vous souhaite. Mais peut importe si vous pouviez apporter des changements dans votre chambre, votre mère ne pourra jamais y accéder, puisque c'est écrit ainsi dans les plans de l'architecte. Et personne ne peut changer les plans.
- Voyons si vous avez compris ceci:
    - Les plans de l'architecte sont la classe
    - La maison est l'objet de la classe
    - Les chambres sont les membres attributs
    - Les portes et codes d'accès sont les 'niveaux d'accès'
    - Les meubles dans les chambres sont des valeurs
        - Les meubles ne peuvent changer dans la deuxième chambre parce qu'ils sont non-mutables
        - Les meubles dans la troisième chambre sont mutables par défaut

Nous avons un peu effleuré les concepts d'***objet***, d'***encapsulation*** et d'***héritage***, mais nous en reparlerons, plus en détail, dans un autre chapitre réservé, ainsi que du ***polymorphisme***.

*Ne vous inquiétez pas si vous ne comprenez pas tout. Ce n'est après tout que le premier chapitre. :)

À retenir, le mot clé **class** que nous verrons plus tard comment utiliser.

#### 1.0.2. La taille d'une variable

##### 1.0.2.1. La taille des types primitifs

La taille des variables de type primitif sont spécifiées par le standard du language de programmation Mrald.

##### 1.0.2.1.1. La taille des intégrales

Voici un tableau comparatif des tailles représentées par les types intégraux:
| Type      | Nombre de bits    | Nombre d'octets   |
| --------- | ----------------- | ----------------- |
|	char	|	8		        |   1               |
|	short	|	16		        |   2               |
|	int     |	32		        |   4               |
|	long	|	64		        |   8               |
|	int8	|	8		        |   1               |
|	int16	|	16		        |   2               |
|	int32	|	32		        |   4               |
|	int64	|	64		        |   8               |
|	byte	|	8		        |   1               |
|	ushort	|	16		        |   2               |
|	uint	|	32		        |   4               |
|	ulong	|	64		        |   8               |
|	uint8	|	8		        |   1               |
|	uint16	|	16		        |   2               |
|	uint32	|	32		        |   4               |
|	uint64	|	64		        |   8               |

##### 1.0.2.1.2. La taille des flottantes

Voici un tableau comparatif des tailles représentées par les types flottants:
| Type      | Nombre de bits    | Nombre d'octets   |
| --------- | ----------------- | ----------------- |
|   float   |   32              |   4               |
|	f32     |	32              |   4               |
|	double	|	64              |   8               |
|	f64     |	64              |   8               |

##### 1.0.2.1.3. La taille des binaires

Voici un tableau comparatif des tailles représentées par les types binaires:
| Type      | Nombre de bits    | Nombre d'octets   |
| --------- | ----------------- | ----------------- |
|   boolean |   32              |   4               |

##### 1.0.2.2. La taille des types personnalisés

##### 1.0.2.2.1. La taille des données

La taille des variables de type données est la somme de la taille de tous les 'champs' du type de données.

##### 1.0.2.2.2. La taille des énumérations

La taille des variables de type énumération est la taille du type d'intégrale qui a été automatiquement déduite par le compilateur.

##### 1.0.2.2.3. La taille des classes et des objets

La taille des classes est connue par le compilateur, même en cas de *'polymorphisme'*, mais il faut distinguer la taille des classes; de la taille des objets de la classe.

Nous n'expliquerons pas ici comment le calcul de la taille d'une classe se fait, mais sachez que c'est le travail du compilateur de le faire. D'ailleurs il est inutile pour les 'usagers' de connaître la taille des classes.

La taille des objets d'une classe est la somme de la taille de ses 'membres attributs'.

La taille d'un 'membre attribut' varie selon son 'type':
- C'est-à-dire, qu'un 'membre attribut' dont le type est soit primitif, données ou énumération a une taille connue et définitive par le compilateur
- Toutefois, lorsqu'un 'membre attribut' est de type 'classe' alors le calcul de la taille peut dans certains cas, ne pas être calculable; sauf au moment de la création de l'objet. En d'autre terme, cela va dépendre si le 'membre attribut' est *'polymorphique'*


#### 1.0.3. Le nom ou alias d'une variable

#### 1.0.4. La durée de vie d'une variable

#### 1.0.5. L'information d'une variable

#### 1.0.6. La mutabilité d'une variable

#### 1.0.7. L'identifiant d'une variable

#### 1.0.8. La nature d'une variable

La nature d'une variable informe le compilateur si une variable est soit créée 'de toute pièce', soit une 'copie' ou soit un 'alias' (aka une réference).

Dans un contexte où une variable est un 'paramètre d'entrée', l'usager peut informer le compilateur de sa nature.

Dans un contexte où une variable est créée ou modifiée par un 'retour de fonction, méthode ou opérateur', le standard du language de programmation Mrald spécifie que le compilateur **doit** impérativement faire une 'copie' (c'est-à-dire aucun retour par référence).

*Certains objets (aka instances d'une classe) pourrait ne pas être 'copiable' ou trop 'lourd'.

Notes importantes:
- Par **défaut** les 'paramètres' sont des **'alias'** (aka des réferences) **mutables**
- Si l'usager utilise le mot clé **readonly** dans la *'signature du paramètre'* alors c'est un **'alias non-mutable'**
- Si l'usager utilise le mot clé **copy** dans la *'signature du paramètre'* alors c'est une **'copie'**
- Vous ne pouvez **pas** utilisez les mots clé **readonly** et **copy** essemble dans la **même** 'signature du paramètre'
- Il est impossible pour un 'usager' d'informer le compilateur de la nature d'une variable quand celle-ci est créée ou modifiée par un 'retour de fonction, méthode ou opérateur', parce que celle-ci **doit** toujours être une copie
- Toute variable de type primitifs, données ou énumérations sont **copiable**
- Il est **impossible** qu'un **'retour de fonction, méthode ou opérateur'** puisse retourner un **'objet non copiable'**. Le compilateur est formellement interdit, par le standard du language de programmation Mrald, de produire une compilation de ce *'type de bloc'*

#### 1.0.9. La visibilité d'une variable

Selon le standard du language de programmation Mrald, il est formellement spécifié qu'**aucune variable** ne peut être **'globale'**. Une variable ne peut qu'être *locale* dans son *bloc natif ou sous-blocs suivants*.

Notes importantes:
- Il est impossible de créer une variable *'globale'*
- Il est impossible d'*exporter* une variable d'un *'module'*; puisque ce n'est pas valide comme *composante exposable de module*

#### 1.0.10. L'addresse d'une variable

L'addresse d'une variable ou d'un objet c'est en quelque sorte son espace de rangement. C'est l'endroit en mémoire qui détient de l'information. Parfois l'information d'une variable est une autre addresse et la valeur de celle-ci peut aussi changer puisqu'elle se trouve dans une variable. Donc l'addresse on ne la connait pas à l'avance, il faut généralement la demander au système d'opération quand on a besoin de beaucoup d'espace. Nous 'empruntons' de l'espace (aka de la mémoire), et celle-ci est limitée sur une machine et quand on 'libère de la mémoire' on dit essentiellement au système d'opération qu'il peut s'en servir pour autre chose. Si on ne fait pas attention à la gestion des addresses (aka la gestion de la mémoire) et qu'on essaie d'accéder à ce qui s'y trouve on risque de causer des crashs, des gels, des comportements inhabituels, voire des dégâts ou bris sur la machine. Yikes..

D'autant plus, les processeurs modernes sont multitaches et possède les capabilités de traiter des opérations en parallèle, avec des 'threads' par exemple, alors il faut aussi ajouter des méchanismes sécuritaires pour éviter que plus d'un *'thread'* puisse *'exécuter une instruction d'écriture'* sur une même *'section critique'* ou qu'on utilise des *'primitives atomiques'* ou des *'instructions vectorielles'* lorsque c'est avantageux.

Pour toutes ces raisons, le standard du language de programmation Mrald **interdit** formellement que le compilateur donne aux 'usagers' accès aux addresses, que ce soit pour des variables, objets, fonctions, etc. Cela doit être encapsulé par le compilateur.

Évidemment, il existe des outils pour le développement qui pourrait en quelques sortes montrer des addresses en temps réel avec du code déassemblé, mais cela est différent que si vous écriviez du code et que vous utilisiez des 'pointeurs'. Les **'pointeurs'** ne sont **pas autorisé** et ne font pas parti du standard du language de programmation Mrald.

[Précédent](/docs/v1.0.0/fr/hello-world-fr.md) | [Suivant]()

[Retour vers Table des Matières](/docs/v1.0.0/fr/toc-fr.md)
[Haut](#2-cours-i---variables)

*Copyright (c) 2024 Eric Nantel*