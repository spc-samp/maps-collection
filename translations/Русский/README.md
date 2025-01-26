# maps-collection

Maps-collection - это репозиторий, посвященный бесплатному предоставлению разнообразной коллекции картографирования для SA-MP (San Andreas Multiplayer). Наша цель - предоставить картографирование разработчикам и создателям серверов, облегчая создание погружающих и персонализированных сред на их серверах.

## Языки

- Português: [README](../../)
- Deutsch: [README](../Deutsch/README.md)
- English: [README](../English/README.md)
- Español: [README](../Espanol/README.md)
- Français: [README](../Francais/README.md)
- Italiano: [README](../Italiano/README.md)
- Polski: [README](../Polski/README.md)
- Svenska: [README](../Svenska/README.md)
- Türkçe: [README](../Turkce/README.md)

## Оглавление

- [maps-collection](#maps-collection)
  - [Языки](#языки)
  - [Оглавление](#оглавление)
  - [Характеристики](#характеристики)
  - [Картографирование](#картографирование)
    - [Авто Мастерская](#авто-мастерская)
  - [Лицензия](#лицензия)
    - [Что вы можете делать ✅](#что-вы-можете-делать-)
    - [Что вы должны делать ⚠️](#что-вы-должны-делать-️)
    - [Что вы не можете делать ❌](#что-вы-не-можете-делать-)

## Характеристики

Предоставляемые картографирования распространяются в формате includes, предлагая максимальную гибкость для разработчиков. Пользователи могут:

- Просто активировать include в своем Gamemode, мгновенно интегрируя полное картографирование.
- Копировать исходный код и адаптировать его непосредственно в своем собственном Gamemode, если предпочитают более подробную настройку.

Includes разработаны с учетом интеллекта и совместимости:

- Имеют условные проверки `#if !defined` и `#elseif defined` для автоматического обнаружения include/plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin).
- Если плагин [streamer](https://github.com/samp-incognito/samp-streamer-plugin) активен, объекты создаются с использованием `CreateDynamicObject()`.
- Если include/plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin) отсутствует, объекты создаются с помощью `CreateObject()`.

## Картографирование

### Авто Мастерская

- Include: [01-workshop](../../maps-sources/01-workshop.inc)
- Screenshots:
  ![Screenshot-01](../../screenshots/01-workshop/01.png)
  ![Screenshot-02](../../screenshots/01-workshop/02.png)
  ![Screenshot-03](../../screenshots/01-workshop/03.png)
  ![Screenshot-04](../../screenshots/01-workshop/04.png)
  ![Screenshot-05](../../screenshots/01-workshop/05.png)
  ![Screenshot-06](../../screenshots/01-workshop/06.png)
  ![Screenshot-07](../../screenshots/01-workshop/07.png)

## Лицензия

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

Вы можете получить копию лицензии по адресу:
https://opensource.org/licenses/MIT

### Что вы можете делать ✅

1. **Коммерческое использование**: 
   - Полная свобода коммерческого использования
   - Возможность продавать продукты на основе кода
   - Без необходимости выплаты роялти
   - Возможность использования в проприетарных продуктах

2. **Модификация**: 
   - Полная модификация исходного кода
   - Создание производных работ
   - Адаптация для любых целей
   - Интеграция с другими системами

3. **Распространение**: 
   - Распространение оригинального программного обеспечения
   - Обмен модифицированными версиями
   - Включение в другие проекты
   - Коммерческое распространение

4. **Частное использование**: 
   - Использование в частных проектах
   - Конфиденциальные модификации
   - Без обязательства раскрытия
   - Неограниченное внутреннее использование

5. **Сублицензирование**: 
   - Возможность изменения лицензии производного кода
   - Выбор различных условий для своих модификаций
   - Комбинирование с другими лицензиями
   - Создание собственных условий распространения

### Что вы должны делать ⚠️

1. **Включение лицензии**: 
   - Сохранять копию лицензии вместе с кодом
   - Включать во все дистрибутивы
   - Сохранять оригинальный текст
   - Поддерживать видимость и доступность

2. **Атрибуция**: 
   - Сохранять уведомление об авторских правах
   - Включать во все копии
   - Сохранять оригинальные авторские права
   - Документировать происхождение кода

### Что вы не можете делать ❌

1. **Привлекать к ответственности авторов**: 
   - Без гарантий работоспособности
   - Авторы не несут ответственности за ущерб
   - Без обязательной поддержки
   - Использование на свой страх и риск