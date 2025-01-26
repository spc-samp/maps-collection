# maps-collection

O maps-collection é um repositório dedicado a disponibilizar gratuitamente uma coleção diversificada de mapeamentos para o SA-MP (San Andreas Multiplayer). Nosso objetivo é fornecer mapeamento para desenvolvedores e criadores de servidores, facilitando a criação de ambientes imersivos e personalizados em seus de servidores.

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

- [maps-collection](#maps-collection)
  - [Idiomas](#idiomas)
  - [Índice](#índice)
  - [Características](#características)
  - [Mapeamemtos](#mapeamemtos)
    - [Auto Oficina](#auto-oficina)
  - [Licença](#licença)
    - [O que você pode fazer ✅](#o-que-você-pode-fazer-)
    - [O que você deve fazer ⚠️](#o-que-você-deve-fazer-️)
    - [O que você não pode fazer ❌](#o-que-você-não-pode-fazer-)

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

Você pode obter uma cópia da licença em:
https://opensource.org/licenses/MIT

### O que você pode fazer ✅

1. **Uso Comercial**: 
   - Liberdade total para uso comercial
   - Pode vender produtos baseados no código
   - Sem necessidade de pagamento de royalties
   - Pode usar em produtos proprietários

2. **Modificação**: 
   - Modificação completa do código fonte
   - Criar trabalhos derivados
   - Adaptar para qualquer propósito
   - Integrar com outros sistemas

3. **Distribuição**: 
   - Distribuir o software original
   - Compartilhar versões modificadas
   - Incluir em outros projetos
   - Distribuir comercialmente

4. **Uso Privado**: 
   - Uso em projetos privados
   - Modificações confidenciais
   - Sem obrigação de divulgação
   - Uso interno irrestrito

5. **Sublicenciamento**: 
   - Pode mudar a licença do código derivado
   - Escolher diferentes termos para suas modificações
   - Combinar com outras licenças
   - Criar termos próprios para distribuição

### O que você deve fazer ⚠️

1. **Incluir Licença**: 
   - Manter cópia da licença com o código
   - Incluir em todas as distribuições
   - Preservar texto original
   - Manter visível e acessível

2. **Atribuição**: 
   - Manter aviso de direitos autorais
   - Incluir em todas as cópias
   - Preservar créditos originais
   - Documentar origem do código

### O que você não pode fazer ❌

1. **Responsabilizar os Autores**: 
   - Sem garantias de funcionamento
   - Autores não são responsáveis por danos
   - Sem suporte obrigatório
   - Uso por conta e risco