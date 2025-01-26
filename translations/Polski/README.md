# maps-collection

Maps-collection to repozytorium poświęcone bezpłatnemu udostępnianiu zróżnicowanej kolekcji mapowań dla SA-MP (San Andreas Multiplayer). Naszym celem jest dostarczenie mapowań programistom i twórcom serwerów, ułatwiając tworzenie immersyjnych i spersonalizowanych środowisk na ich serwerach.

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

- [maps-collection](#maps-collection)
  - [Języki](#języki)
  - [Spis treści](#spis-treści)
  - [Charakterystyka](#charakterystyka)
  - [Mapowania](#mapowania)
    - [Warsztat samochodowy](#warsztat-samochodowy)
  - [Licencja](#licencja)
    - [Co możesz zrobić ✅](#co-możesz-zrobić-)
    - [Co musisz zrobić ⚠️](#co-musisz-zrobić-️)
    - [Czego nie możesz zrobić ❌](#czego-nie-możesz-zrobić-)

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

Możesz uzyskać kopię licencji na stronie:
https://opensource.org/licenses/MIT

### Co możesz zrobić ✅

1. **Użytek komercyjny**: 
   - Pełna swoboda użytku komercyjnego
   - Możliwość sprzedaży produktów opartych na kodzie
   - Brak konieczności płacenia tantiem
   - Możliwość wykorzystania w produktach własnościowych

2. **Modyfikacja**: 
   - Pełna modyfikacja kodu źródłowego
   - Tworzenie prac pochodnych
   - Dostosowywanie do dowolnego celu
   - Integracja z innymi systemami

3. **Dystrybucja**: 
   - Dystrybucja oryginalnego oprogramowania
   - Udostępnianie zmodyfikowanych wersji
   - Włączanie do innych projektów
   - Dystrybucja komercyjna

4. **Użytek prywatny**: 
   - Wykorzystanie w projektach prywatnych
   - Modyfikacje poufne
   - Brak obowiązku ujawniania
   - Nieograniczone użytkowanie wewnętrzne

5. **Sublicencjonowanie**: 
   - Możliwość zmiany licencji kodu pochodnego
   - Wybór różnych warunków dla swoich modyfikacji
   - Łączenie z innymi licencjami
   - Tworzenie własnych warunków dystrybucji

### Co musisz zrobić ⚠️

1. **Dołączenie licencji**: 
   - Zachowanie kopii licencji wraz z kodem
   - Dołączanie do wszystkich dystrybucji
   - Zachowanie oryginalnego tekstu
   - Utrzymanie widoczności i dostępności

2. **Uznanie autorstwa**: 
   - Zachowanie informacji o prawach autorskich
   - Dołączanie do wszystkich kopii
   - Zachowanie oryginalnych kredytów
   - Dokumentowanie pochodzenia kodu

### Czego nie możesz zrobić ❌

1. **Pociągać autorów do odpowiedzialności**: 
   - Brak gwarancji działania
   - Autorzy nie ponoszą odpowiedzialności za szkody
   - Brak obowiązkowego wsparcia
   - Użytkowanie na własne ryzyko