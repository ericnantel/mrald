## 3. Cours II - Données et Énumérations
---

---
### 2.0. Définition des Données

Les données sont des types personnalisés, copiables, qui contiennent des 'champs'.

---
### 2.1. Définition des Énumérations

Les énumérations sont des types personnalisés, copiables, qui utilisent un type primitif intégral, sélectionné automatiquement par le compilateur, mais qui n'acceptent que certaines valeurs, constantes et étiquettées, comme information.

:star: Point très important à retenir:
- Les types d'énumérations doivent contenir au moins une valeur étiquettée.

:bulb: Facultativement vous pouvez aussi définir:
- Les constantes pour les valeurs étiquettées des types d'énumération.
- Les valeurs étiquettées par défaut des types d'énumération.

---
#### 2.1.1. Déclaration d'un type d'énumération

Pour déclarer un type d'énumération, vous devez écrire un bloc de déclaration avec le mot-clé '**enum**' et y inclure au moins une valeur étiquettée.

Voyons comment définir un nouveau type d'énumération dans l'exemple ci-bas.

:book: Exemple 15.
- Déclarons un type d'énumération pour des fruits tropicaux:
    ```mrald
        enum FruitTropicaux
            Banane
            Ananas
            Orange
            Mangue
        end
    ```

---
#### 2.1.2. Utilisation d'un type d'énumération

Une fois votre type déclaré, vous pouvez l'utiliser comme variable.

:book: Exemple 16.
- Déclarons une variable de type FruitTropicaux:
    ```mrald
        FruitTropicaux mon_fruit_tropical
    ```

Dans l'exemple ci-haut, la variable 'mon_fruit_tropical' contient 'Banane' comme information. Puisque 'Banane' est la valeur étiquettée 'par défaut' choisie par le compilateur.

Essayons maintenant de déclarer et d'initialiser une variable de type d'énumération.

:book: Exemple 17.
- Déclarons et initialisons une variable de type FruitTropicaux:
    ```mrald
        FruitTropicaux mon_fruit_tropical = FruitTropicaux.Banane
    ```

:star: Point très important à retenir:
- Pour assigner une valeur étiquettée à une variable de type d'énumération, vous devez utiliser l'opérateur d'accès '**.**'.

---
#### 2.1.3. Opération sur une variable de type d'énumération

Les variables de type d'énumération ne supportent pas les opérateurs arithmétiques ni leur surcharges.

---
#### 2.1.4. Comparaison de variables de type d'énumération

Les variables de type d'énumération de même type peuvent se comparer.

:book: Exemple 18.
- Voyons si deux variables de type FruitTropicaux sont identiques ou différentes:
    ```mrald
        FruitTropicaux fruit1 = FruitTropicaux.Ananas
        FruitTropicaux fruit2 = FruitTropicaux.Mangue
        boolean fruit_identique = fruit1 == fruit2
        boolean fruit_different = fruit1 != fruit2
    ```

:star: Point très important à retenir:
- Les surcharges des opérateurs '==' et '!=' sont prises en charge par le compilateur.

---
#### 2.1.4. Inversion de variables de type d'énumération

Les variables de type d'énumération ne supportent pas l'opérateur d'inversion '!' ni ses surcharges.

---
#### 2.1.5. Déduction des variables de type d'énumération

Comme les valeurs étiquettées doivent être utilisées avec l'opérateur d'accès, le type d'énumération est facilement détectable pour le compilateur.

---
#### 2.1.6. Conversion des variables de type d'énumération

Il est possible de convertir, avec l'opérateur de conversion 'as', une variable de type d'énumération en un autre type, et vice-versa, si et seulement si les types et les valeurs sont compatibles.

:book: Exemple 19.
- Convertissons une variable de type FruitTropicaux en une variable de type 'int':
    ```mrald
        FruitTropicaux fruit = FruitTropicaux.Banane
        int chiffre = fruit as int
    ```

Dans l'exemple ci-haut, la variable 'chiffre' aura une valeur de 0. Puisque 0 est la constante choisie pour 'Banane' par le compilateur.

:star: Point très important à retenir:
- L'opérateur de conversion 'as' utilise les constantes des valeurs étiquettées pour convertir.

---
#### 2.1.7. Personnalisation des constantes des valeurs étiquettées

Nous avons vu que le compilateur choisi automatiquement des constantes pour les valeurs étiquettées des types d'énumération.

Toutefois, vous pouvez définir ces constantes dans la déclaration du type d'énumération.

:book: Exemple 20.
- Définissons des constantes pour les valeurs étiquettées dans la déclaration du type d'énumération FruitTropicaux:
    ```mrald
        enum FruitTropicaux
            Banane = 5
            Ananas = 21
            Orange = 38
            Mangue = 57
        end
    ```

---
#### 2.1.8. Personnalisation des valeurs étiquettées par défaut

Le compilateur choisi automatiquement l'une des valeurs étiquettées des types d'énumération par défaut. Généralement la première listée dans la déclaration du type.

Toutefois, vous pouvez définir la valeur étiquettée par défaut pour un type d'énumération.

:book: Exemple 21.
- Definissons une valeur étiquettée par défaut pour le type FruitTropicaux:
    ```mrald
        default FruitTropicaux = FruitTropicaux.Mangue
    ```

Si vous définissez cette valeur étiquettée par défaut alors celle-ci sera utilisée par défaut.

:book: Exemple 22.
- Déclarons une variable de type FruitTropicaux:
    ```mrald
        FruitTropicaux fruit
    ```

Dans l'exemple ci-haut, la variable 'fruit' a été initialisée par défaut avec la valeur étiquettée 'FruitTropicaux.Mangue'.

:star: Point très important à retenir:
- La définition doit se faire immédiatement après la déclaration du type d'énumération.

---


[Précédent](/docs/v1.0.0/fr/course-1-variables-fr.md) | [Suivant]()

[Retour vers Table des Matières](/docs/v1.0.0/fr/toc-fr.md)
[Haut](#3-cours-ii---données-et-énumérations)

*Copyright (c) 2024 Eric Nantel*