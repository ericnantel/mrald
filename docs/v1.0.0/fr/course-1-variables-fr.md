## 2. Cours I - Variables

*Liens rapides*
1.0. [Définition](#10-définition)
1.0.1. [Le type d'une variable](#101-le-type-dune-variable)
1.0.1.1 [Les types primitifs](#1011-les-types-primitifs)
1.0.1.1.1. [Les intégrales](#10111-les-intégrales)
1.0.1.1.2. [Les flottantes](#10112-les-flottantes)
1.0.1.1.3. [Les binaires](#10113-les-binaires)
1.0.1.2. [Les types personnalisés](#1012-les-types-personnalisés)
1.0.2. [La taille d'une variable](#102-la-taille-dune-variable)
1.0.3. [Le nom ou alias d'une variable](#103-le-nom-ou-alias-dune-variable)
1.0.4. [La durée de vie d'une variable](#104-la-durée-de-vie-dune-variable)
1.0.5. [L'information d'une variable](#105-linformation-dune-variable)
1.0.6. [L'accès lecture d'une variable](#106-laccès-lecture-dune-variable)
1.0.7. [L'accès écriture d'une variable](#107-laccès-écriture-dune-variable)
1.0.8. [L'addresse d'une variable](#108-laddresse-dune-variable)

#### 1.0. Définition
Les variables sont des 'boîtes' qui conservent de l'information.
Toutes variables possèdent les propriétés fondamentales suivantes:
- Un type
- Une taille
- Un nom ou alias
- Une durée de vie
- Une information
- Un accès lecture
- Un accès écriture
- Une addresse

#### 1.0.1. Le type d'une variable
Le type restreint la variable à ce qu'elle peut contenir comme information.
Il est impossible de changer le type d'une variable une fois déclarée.
Il existe 2 catégories de type de variables:
- Types primitifs
- Types personnalisés

#### 1.0.1.1. Les types primitifs
Les types primitifs aussi appelés 'types fondamentaux' sont spécifiés par le standard du language de programmation Mrald.
Les types primitifs sont séparés en 3 sous-catégories:
- Les intégrales
- Les flottantes
- Les binaires

#### 1.0.1.1.1. Les intégrales
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

| Type 		| Signé		| Valeur Minimale 				| Valeur Maximale 				| Valeurs possibles 			|
| --------- | --------- | ----------------------------- | ----------------------------- | ----------------------------- |
|	char	|	Oui		|	-128						|	+127						|	256							|
|	short	|	Oui		|	-32,768 					|	+32,767						|	65,536						|
|	int		|	Oui		|	-2,147,483,648				|	+-2,147,483,647				|	4,294,967,296				|
|	long	|	Oui		|	-9,223,372,036,854,775,808	|	+9,223,372,036,854,775,807	|	18,446,744,073,709,551,616	|
|	int8	|	Oui		|	-128						|	+127						|	256							|
|	int16	|	Oui		|	-32,768						|	+32,767						|	65,536						|
|	int32	|	Oui		|	-2,147,483,648				|	+2,147,483,647				|	4,294,967,296				|
|	int64	|	Oui		|	-9,223,372,036,854,775,808	|	+9,223,372,036,854,775,807	|	18,446,744,073,709,551,616	|
|	byte	|	Non		|	0							|	+255						|	256							|
|	ushort	|	Non		|	0							|	+65,535						|	65,536						|
|	uint	|	Non		|	0							|	+4,294,967,295				|	4,294,967,296				|
|	ulong	|	Non		|	0							|	+18,446,744,073,709,551,615	|	18,446,744,073,709,551,616	|
|	uint8	|	Non		|	0							|	+255						|	256							|
|	uint16	|	Non		|	0							|	+65,535						|	65,536						|
|	uint32	|	Non		|	0							|	+4,294,967,295				|	4,294,967,296				|
|	uint64	|	Non		|	0							|	+18,446,744,073,709,551,615	|	18,446,744,073,709,551,616	|

#### 1.0.1.1.2. Les flottantes
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

| Type 		| Signé		| Valeur Minimale 				| Valeur Maximale 				| Nombre de chiffres 			|
| --------- | --------- | ----------------------------- | ----------------------------- | ----------------------------- |
|   float   |   Oui     |   ~ -3.4x10e38                |   ~ +3.4x10e38                |   7                           |
|   f32     |   Oui     |   ~ -3.4x10e38                |   ~ +3.4x10e38                |   7                           |
|   double  |   Oui     |   ~ -1.7x10e308               |   ~ +1.7x10e308               |   15                          |
|   f64     |   Oui     |   ~ -1.7x10e308               |   ~ +1.7x10e308               |   15                          |

#### 1.0.1.1.3. Les binaires
Les variables de type binaire ne peuvent contenir que 2 valeurs possibles:
- true
- false

De la même manière qu'un 'bit' ne peut contenir qu'un 0 ou 1.
Les variables binaires peuvent être utiliser pour représenter une comparaison ou pour exécuter du code sous condition.

Les binaires supportées:
- Les booléens (boolean)

Voici un tableau comparatif des valeurs représentées par les types binaires:
| Type      | Signé     | Valeurs possibles     |
| --------- | --------- | --------------------- |
|   boolean |   Non     |   true, false         |

#### 1.0.1.2. Les types personnalisés
Les types personnalisés:
- data
- enum ou group
- class

data -> fields (always visible)
class -> members (depends private/public or protected)
TODO..

#### 1.0.2. La taille d'une variable

#### 1.0.3. Le nom ou alias d'une variable

#### 1.0.4. La durée de vie d'une variable

#### 1.0.5. L'information d'une variable

#### 1.0.6. L'accès lecture d'une variable

#### 1.0.7. L'accès écriture d'une variable

#### 1.0.8. L'addresse d'une variable


[Précédent](/docs/v1.0.0/fr/hello-world-fr.md) | [Suivant]()

[Retour vers Table des Matières](/docs/v1.0.0/fr/toc-fr.md)
[Haut](#2-cours-i---variables)

*Copyright (c) 2024 Eric Nantel*