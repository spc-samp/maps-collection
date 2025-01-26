# maps-collection

Le maps-collection est un dépôt dédié à la mise à disposition gratuite d'une collection diversifiée de mappings pour SA-MP (San Andreas Multiplayer). Notre objectif est de fournir des mappings aux développeurs et créateurs de serveurs, facilitant la création d'environnements immersifs et personnalisés sur leurs serveurs.

## Langues

- Português: [README](../../)
- Deutsch: [README](../Deutsch/README.md)
- English: [README](../English/README.md)
- Español: [README](../Espanol/README.md)
- Italiano: [README](../Italiano/README.md)
- Polski: [README](../Polski/README.md)
- Русский: [README](../Русский/README.md)
- Svenska: [README](../Svenska/README.md)
- Türkçe: [README](../Turkce/README.md)

## Table des matières

- [maps-collection](#maps-collection)
  - [Langues](#langues)
  - [Table des matières](#table-des-matières)
  - [Caractéristiques](#caractéristiques)
  - [Mappings](#mappings)
    - [Atelier Automobile](#atelier-automobile)
  - [Licence](#licence)
    - [Ce que vous pouvez faire ✅](#ce-que-vous-pouvez-faire-)
    - [Ce que vous devez faire ⚠️](#ce-que-vous-devez-faire-️)
    - [Ce que vous ne pouvez pas faire ❌](#ce-que-vous-ne-pouvez-pas-faire-)

## Caractéristiques

Les mappings fournis sont distribués au format includes, offrant une flexibilité maximale aux développeurs. Les utilisateurs peuvent:

- Activer simplement l'include dans leur Gamemode, intégrant instantanément le mapping complet.
- Copier le code source et l'adapter directement dans leur propre Gamemode, s'ils préfèrent une personnalisation plus détaillée.

Les includes sont développés avec intelligence et compatibilité à l'esprit:

- Ils possèdent des vérifications conditionnelles `#if !defined` et `#elseif defined` pour la détection automatique de l'include/plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin).
- Si le plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin) est actif, les objets sont créés en utilisant `CreateDynamicObject()`.
- Si l'include/plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin) n'est pas présent, les objets sont créés avec `CreateObject()`.

## Mappings

### Atelier Automobile

- Include: [01-workshop](../../maps-sources/01-workshop.inc)
- Screenshots:
  ![Screenshot-01](../../screenshots/01-workshop/01.png)
  ![Screenshot-02](../../screenshots/01-workshop/02.png)
  ![Screenshot-03](../../screenshots/01-workshop/03.png)
  ![Screenshot-04](../../screenshots/01-workshop/04.png)
  ![Screenshot-05](../../screenshots/01-workshop/05.png)
  ![Screenshot-06](../../screenshots/01-workshop/06.png)
  ![Screenshot-07](../../screenshots/01-workshop/07.png)

## Licence

Copyright © SA-MP Programming Community

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Vous pouvez obtenir une copie de la licence sur:
https://opensource.org/licenses/MIT

### Ce que vous pouvez faire ✅

1. **Usage Commercial**:
   - Liberté totale pour l'usage commercial
   - Possibilité de vendre des produits basés sur le code
   - Pas de paiement de redevances nécessaire
   - Utilisation possible dans des produits propriétaires

2. **Modification**:
   - Modification complète du code source
   - Création de travaux dérivés
   - Adaptation à tout usage
   - Intégration avec d'autres systèmes

3. **Distribution**:
   - Distribution du logiciel original
   - Partage des versions modifiées
   - Inclusion dans d'autres projets
   - Distribution commerciale

4. **Usage Privé**:
   - Utilisation dans des projets privés
   - Modifications confidentielles
   - Aucune obligation de divulgation
   - Usage interne sans restriction

5. **Sous-licence**:
   - Possibilité de changer la licence du code dérivé
   - Choix de différents termes pour vos modifications
   - Combinaison avec d'autres licences
   - Création de vos propres termes de distribution

### Ce que vous devez faire ⚠️

1. **Inclure la Licence**:
   - Conserver une copie de la licence avec le code
   - Inclure dans toutes les distributions
   - Préserver le texte original
   - Maintenir visible et accessible

2. **Attribution**:
   - Maintenir l'avis de droits d'auteur
   - Inclure dans toutes les copies
   - Préserver les crédits originaux
   - Documenter l'origine du code

### Ce que vous ne pouvez pas faire ❌

1. **Tenir les Auteurs Responsables**:
   - Pas de garanties de fonctionnement
   - Les auteurs ne sont pas responsables des dommages
   - Pas de support obligatoire
   - Utilisation à vos propres risques