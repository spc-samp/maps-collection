# maps-collection

Il maps-collection è un repository dedicato a fornire gratuitamente una raccolta diversificata di mappe per SA-MP (San Andreas Multiplayer). Il nostro obiettivo è fornire mappe per sviluppatori e creatori di server, facilitando la creazione di ambienti immersivi e personalizzati nei loro server.

## Lingue

- Português: [README](../../)
- Deutsch: [README](../Deutsch/README.md)
- English: [README](../English/README.md)
- Español: [README](../Espanol/README.md)
- Français: [README](../Francais/README.md)
- Polski: [README](../Polski/README.md)
- Русский: [README](../Русский/README.md)
- Svenska: [README](../Svenska/README.md)
- Türkçe: [README](../Turkce/README.md)

## Indice

- [maps-collection](#maps-collection)
  - [Lingue](#lingue)
  - [Indice](#indice)
  - [Caratteristiche](#caratteristiche)
  - [Mappe](#mappe)
    - [Officina Auto](#officina-auto)
  - [Licenza](#licenza)
    - [Cosa puoi fare ✅](#cosa-puoi-fare-)
    - [Cosa devi fare ⚠️](#cosa-devi-fare-️)
    - [Cosa non puoi fare ❌](#cosa-non-puoi-fare-)

## Caratteristiche

Le mappe fornite sono distribuite in formato include, offrendo la massima flessibilità per gli sviluppatori. Gli utenti possono:

- Attivare semplicemente l'include nel proprio Gamemode, integrando istantaneamente l'intera mappatura.
- Copiare il codice sorgente e adattarlo direttamente nel proprio Gamemode, se preferiscono una personalizzazione più dettagliata.

Gli include sono sviluppati con intelligenza e compatibilità in mente:

- Contengono verifiche condizionali `#if !defined` e `#elseif defined` per il rilevamento automatico dell'include/plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin).
- Se il plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin) è attivo, gli oggetti vengono creati utilizzando `CreateDynamicObject()`.
- Qualora l'include/plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin) non sia presente, gli oggetti vengono creati con `CreateObject()`.

## Mappe

### Officina Auto

- Include: [01-workshop](../../maps-sources/01-workshop.inc)
- Screenshots:
  ![Screenshot-01](../../screenshots/01-workshop/01.png)
  ![Screenshot-02](../../screenshots/01-workshop/02.png)
  ![Screenshot-03](../../screenshots/01-workshop/03.png)
  ![Screenshot-04](../../screenshots/01-workshop/04.png)
  ![Screenshot-05](../../screenshots/01-workshop/05.png)
  ![Screenshot-06](../../screenshots/01-workshop/06.png)
  ![Screenshot-07](../../screenshots/01-workshop/07.png)

## Licenza

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

Puoi ottenere una copia della licenza su:
https://opensource.org/licenses/MIT

### Cosa puoi fare ✅

1. **Uso Commerciale**: 
   - Totale libertà per uso commerciale
   - Possibilità di vendere prodotti basati sul codice
   - Nessun pagamento di royalty richiesto
   - Possibilità di utilizzarlo in prodotti proprietari

2. **Modifiche**: 
   - Modifica completa del codice sorgente
   - Creazione di lavori derivati
   - Adattamento per qualsiasi scopo
   - Integrazione con altri sistemi

3. **Distribuzione**: 
   - Distribuzione del software originale
   - Condivisione di versioni modificate
   - Inclusione in altri progetti
   - Distribuzione commerciale

4. **Uso Privato**: 
   - Utilizzo in progetti privati
   - Modifiche confidenziali
   - Nessun obbligo di divulgazione
   - Uso interno illimitato

5. **Sublicenza**: 
   - Possibilità di cambiare la licenza del codice derivato
   - Scelta di termini diversi per le modifiche
   - Combinazione con altre licenze
   - Creazione di termini propri per la distribuzione

### Cosa devi fare ⚠️

1. **Includere la Licenza**: 
   - Mantenere una copia della licenza con il codice
   - Includerla in tutte le distribuzioni
   - Preservare il testo originale
   - Mantenerla visibile e accessibile

2. **Attribuzione**: 
   - Mantenere l'avviso di copyright
   - Includere in tutte le copie
   - Preservare i crediti originali
   - Documentare l'origine del codice

### Cosa non puoi fare ❌

1. **Ritenere Responsabili gli Autori**: 
   - Nessuna garanzia di funzionamento
   - Gli autori non sono responsabili per danni
   - Nessun supporto obbligatorio
   - Uso a proprio rischio e pericolo