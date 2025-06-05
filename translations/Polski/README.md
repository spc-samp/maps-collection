# Maps Collection

Maps Collection to repozytorium poświęcone bezpłatnemu udostępnianiu zróżnicowanej kolekcji mapowań dla SA-MP (San Andreas Multiplayer). Naszym celem jest dostarczenie mapowań programistom i twórcom serwerów, ułatwiając tworzenie immersyjnych i spersonalizowanych środowisk na ich serwerach.

## Języki

- Português: [README](../../)
- Deutsch: [README](../Deutsch/README.md)
- English: [README](../English/README.md)
- Español: [README](../Espanol/README.md)
- Français: [README](../Francais/README.md)
- Italiano: [README](../Italiano/README.md)
- Русский: [README](../Русский/README.md)
- Svenska: [README](../Svenska/README.md)
- Türkçe: [README](../Turkce/README.md)

## Spis treści

- [Maps Collection](#maps-collection)
  - [Języki](#języki)
  - [Spis treści](#spis-treści)
  - [Charakterystyka](#charakterystyka)
  - [Mapowania](#mapowania)
    - [Warsztat samochodowy](#warsztat-samochodowy)
  - [Licencja](#licencja)
    - [Warunki użytkowania](#warunki-użytkowania)
      - [1. Przyznane uprawnienia](#1-przyznane-uprawnienia)
      - [2. Obowiązkowe warunki](#2-obowiązkowe-warunki)
      - [3. Prawa autorskie](#3-prawa-autorskie)
      - [4. Wyłączenie gwarancji i ograniczenie odpowiedzialności](#4-wyłączenie-gwarancji-i-ograniczenie-odpowiedzialności)

## Charakterystyka

Udostępniane mapowania są dystrybuowane w formacie include, oferując maksymalną elastyczność dla programistów. Użytkownicy mogą:

- Po prostu aktywować include w swoim Gamemode, natychmiastowo integrując pełne mapowanie.
- Skopiować kod źródłowy i dostosować bezpośrednio we własnym Gamemode, jeśli preferują bardziej szczegółową personalizację.

Includes są opracowane z myślą o inteligencji i kompatybilności:

- Posiadają warunkowe sprawdzenia `#if !defined` i `#elseif defined` do automatycznego wykrywania include/pluginu [streamer](https://github.com/samp-incognito/samp-streamer-plugin).
- Jeśli plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin) jest aktywny, obiekty są tworzone przy użyciu `CreateDynamicObject()`.
- Jeśli include/plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin) nie jest obecny, obiekty są tworzone za pomocą `CreateObject()`.

## Mapowania

### Warsztat samochodowy

- Include: [01-workshop](../../maps-sources/01-workshop.inc)
- Screenshots:
  ![Screenshot-01](../../screenshots/01-workshop/01.png)
  ![Screenshot-02](../../screenshots/01-workshop/02.png)
  ![Screenshot-03](../../screenshots/01-workshop/03.png)
  ![Screenshot-04](../../screenshots/01-workshop/04.png)
  ![Screenshot-05](../../screenshots/01-workshop/05.png)
  ![Screenshot-06](../../screenshots/01-workshop/06.png)
  ![Screenshot-07](../../screenshots/01-workshop/07.png)

## Licencja

Copyright © **SA-MP Programming Community**

To oprogramowanie jest licencjonowane na warunkach licencji MIT ("Licencja"); możesz korzystać z tego oprogramowania zgodnie z warunkami Licencji. Kopię Licencji można uzyskać pod adresem: [MIT License](https://opensource.org/licenses/MIT)

### Warunki użytkowania

#### 1. Przyznane uprawnienia

Niniejsza licencja bezpłatnie przyznaje każdej osobie otrzymującej kopię tego oprogramowania i powiązanych plików dokumentacji następujące prawa:
* Używanie, kopiowanie, modyfikowanie, łączenie, publikowanie, rozpowszechnianie, sublicencjonowanie i/lub sprzedaż kopii oprogramowania bez ograniczeń
* Zezwalanie osobom, którym oprogramowanie jest dostarczane, na to samo, pod warunkiem przestrzegania poniższych warunków

#### 2. Obowiązkowe warunki

Wszystkie kopie lub istotne części oprogramowania muszą zawierać:
* Powyższą informację o prawach autorskich
* Niniejsze zezwolenie
* Poniższe wyłączenie odpowiedzialności

#### 3. Prawa autorskie

Oprogramowanie i cała powiązana dokumentacja są chronione prawami autorskimi. **SA-MP Programming Community** zachowuje oryginalne prawa autorskie do oprogramowania.

#### 4. Wyłączenie gwarancji i ograniczenie odpowiedzialności

OPROGRAMOWANIE JEST DOSTARCZANE "TAK JAK JEST", BEZ JAKIEJKOLWIEK GWARANCJI, WYRAŹNEJ LUB DOROZUMIANEJ, W TYM MIĘDZY INNYMI GWARANCJI PRZYDATNOŚCI HANDLOWEJ, PRZYDATNOŚCI DO OKREŚLONEGO CELU I NIENARUSZANIA PRAW.

W ŻADNYM WYPADKU AUTORZY LUB POSIADACZE PRAW AUTORSKICH NIE PONOSZĄ ODPOWIEDZIALNOŚCI ZA JAKIEKOLWIEK ROSZCZENIA, SZKODY LUB INNE ZOBOWIĄZANIA, CZY TO W RAMACH DZIAŁAŃ UMOWNYCH, DELIKTOWYCH CZY INNYCH, WYNIKAJĄCYCH Z OPROGRAMOWANIA LUB ZWIĄZANYCH Z NIM LUB Z JEGO UŻYTKOWANIEM LUB INNYMI CZYNNOŚCIAMI W OPROGRAMOWANIU.

---

Szczegółowe informacje o licencji MIT można znaleźć pod adresem: https://opensource.org/licenses/MIT