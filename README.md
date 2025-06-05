# Maps Collection

O Maps Collection é um repositório dedicado a disponibilizar gratuitamente uma coleção diversificada de mapeamentos para o SA-MP (San Andreas Multiplayer). Nosso objetivo é fornecer mapeamento para desenvolvedores e criadores de servidores, facilitando a criação de ambientes imersivos e personalizados em seus de servidores.

## Idiomas

- Deutsch: [README](translations/Deutsch/README.md)
- English: [README](translations/English/README.md)
- Español: [README](translations/Espanol/README.md)
- Français: [README](translations/Francais/README.md)
- Italiano: [README](translations/Italiano/README.md)
- Polski: [README](translations/Polski/README.md)
- Русский: [README](translations/Русский/README.md)
- Svenska: [README](translations/Svenska/README.md)
- Türkçe: [README](translations/Turkce/README.md)

## Índice

- [Maps Collection](#maps-collection)
  - [Idiomas](#idiomas)
  - [Índice](#índice)
  - [Características](#características)
  - [Mapeamemtos](#mapeamemtos)
    - [Auto Oficina](#auto-oficina)
  - [Licença](#licença)
    - [Termos e Condições de Uso](#termos-e-condições-de-uso)
      - [1. Permissões Concedidas](#1-permissões-concedidas)
      - [2. Condições Obrigatórias](#2-condições-obrigatórias)
      - [3. Direitos Autorais](#3-direitos-autorais)
      - [4. Isenção de Garantias e Limitação de Responsabilidade](#4-isenção-de-garantias-e-limitação-de-responsabilidade)

## Características

As mapeações disponibilizadas, são distribuídas em formato de includes, oferecendo máxima flexibilidade para os desenvolvedores. Os usuários podem:

- Ativar simplesmente o include no seu Gamemode, integrando instantaneamente o mapeamento completo.
- Copiar o código-fonte e adaptar diretamente no seu próprio Gamemode, caso prefiram personalização mais detalhada.

Os includes são desenvolvidos com inteligência e compatibilidade em mente:

- Possuem verificações condicionais `#if !defined` e `#elseif defined` para detecção automática do include/plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin).
- Se o plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin) estiver ativo, os objetos são criados utilizando `CreateDynamicObject()`.
- Caso o include/plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin) não esteja presente, os objetos são criados com `CreateObject()`.

## Mapeamemtos

### Auto Oficina

- Include: [01-workshop](maps-sources/01-workshop.inc)
- Screenshots:
  ![Screenshot-01](screenshots/01-workshop/01.png)
  ![Screenshot-02](screenshots/01-workshop/02.png)
  ![Screenshot-03](screenshots/01-workshop/03.png)
  ![Screenshot-04](screenshots/01-workshop/04.png)
  ![Screenshot-05](screenshots/01-workshop/05.png)
  ![Screenshot-06](screenshots/01-workshop/06.png)
  ![Screenshot-07](screenshots/01-workshop/07.png)

## Licença

Copyright © **SA-MP Programming Community**

Este software é licenciado sob os termos da Licença MIT ("Licença"); você pode utilizar este software de acordo com as condições da Licença. Uma cópia da Licença pode ser obtida em: [MIT License](https://opensource.org/licenses/MIT)

### Termos e Condições de Uso

#### 1. Permissões Concedidas

A presente licença concede, gratuitamente, a qualquer pessoa que obtenha uma cópia deste software e arquivos de documentação associados, os seguintes direitos:
* Utilizar, copiar, modificar, mesclar, publicar, distribuir, sublicenciar e/ou vender cópias do software sem restrições
* Permitir que pessoas para as quais o software é fornecido façam o mesmo, desde que sujeitas às condições a seguir

#### 2. Condições Obrigatórias

Todas as cópias ou partes substanciais do software devem incluir:
* O aviso de direitos autorais acima
* Este aviso de permissão
* O aviso de isenção de responsabilidade abaixo

#### 3. Direitos Autorais

O software e toda a documentação associada são protegidos por leis de direitos autorais. A **SA-MP Programming Community** mantém a titularidade dos direitos autorais originais do software.

#### 4. Isenção de Garantias e Limitação de Responsabilidade

O SOFTWARE É FORNECIDO "COMO ESTÁ", SEM GARANTIA DE QUALQUER TIPO, EXPRESSA OU IMPLÍCITA, INCLUINDO, MAS NÃO SE LIMITANDO ÀS GARANTIAS DE COMERCIALIZAÇÃO, ADEQUAÇÃO A UM DETERMINADO FIM E NÃO VIOLAÇÃO. 

EM NENHUMA CIRCUNSTÂNCIA OS AUTORES OU TITULARES DOS DIREITOS AUTORAIS SERÃO RESPONSÁVEIS POR QUALQUER REIVINDICAÇÃO, DANOS OU OUTRA RESPONSABILIDADE, SEJA EM AÇÃO DE CONTRATO, DELITO OU DE OUTRA FORMA, DECORRENTE DE, FORA DE OU EM CONEXÃO COM O SOFTWARE OU O USO OU OUTRAS NEGOCIAÇÕES NO SOFTWARE.

---

Para informações detalhadas sobre a Licença MIT, consulte: https://opensource.org/licenses/MIT