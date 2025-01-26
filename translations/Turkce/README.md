# maps-collection

Maps-collection, SA-MP (San Andreas Multiplayer) için çeşitli haritalama koleksiyonunu ücretsiz olarak sunmaya adanmış bir depodur. Amacımız, geliştiricilere ve sunucu oluşturucularına, sunucularında sürükleyici ve özelleştirilmiş ortamlar oluşturmalarını kolaylaştıran haritalamalar sağlamaktır.

## Diller

- Português: [README](../../)
- Deutsch: [README](../Deutsch/README.md)
- English: [README](../English/README.md)
- Español: [README](../Espanol/README.md)
- Français: [README](../Francais/README.md)
- Italiano: [README](../Italiano/README.md)
- Polski: [README](../Polski/README.md)
- Русский: [README](../Русский/README.md)
- Svenska: [README](../Svenska/README.md)

## İçindekiler

- [maps-collection](#maps-collection)
  - [Diller](#diller)
  - [İçindekiler](#i̇çindekiler)
  - [Özellikler](#özellikler)
  - [Haritalar](#haritalar)
    - [Oto Servisi](#oto-servisi)
  - [Lisans](#lisans)
    - [Yapabilecekleriniz ✅](#yapabilecekleriniz-)
    - [Yapmanız Gerekenler ⚠️](#yapmanız-gerekenler-️)
    - [Yapamayacaklarınız ❌](#yapamayacaklarınız-)

## Özellikler

Sağlanan haritalar, geliştiricilere maksimum esneklik sunan include formatında dağıtılmaktadır. Kullanıcılar:

- Haritamayı anında entegre etmek için Gamemode'larında include'u etkinleştirebilirler.
- Daha detaylı özelleştirme için kaynak kodu kopyalayıp doğrudan kendi Gamemode'larına adapte edebilirler.

Include'lar zeka ve uyumluluk göz önünde bulundurularak geliştirilmiştir:

- Include/plugin [streamer](https://github.com/samp-incognito/samp-streamer-plugin)'ın otomatik tespiti için koşullu `#if !defined` ve `#elseif defined` kontrolleri içerir.
- [Streamer](https://github.com/samp-incognito/samp-streamer-plugin) eklentisi aktifse, nesneler `CreateDynamicObject()` kullanılarak oluşturulur.
- [Streamer](https://github.com/samp-incognito/samp-streamer-plugin) include/plugin mevcut değilse, nesneler `CreateObject()` ile oluşturulur.

## Haritalar

### Oto Servisi

- Include: [01-workshop](../../maps-sources/01-workshop.inc)
- Screenshots:
  ![Screenshot-01](../../screenshots/01-workshop/01.png)
  ![Screenshot-02](../../screenshots/01-workshop/02.png)
  ![Screenshot-03](../../screenshots/01-workshop/03.png)
  ![Screenshot-04](../../screenshots/01-workshop/04.png)
  ![Screenshot-05](../../screenshots/01-workshop/05.png)
  ![Screenshot-06](../../screenshots/01-workshop/06.png)
  ![Screenshot-07](../../screenshots/01-workshop/07.png)

## Lisans

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

Lisansın bir kopyasını buradan alabilirsiniz:
https://opensource.org/licenses/MIT

### Yapabilecekleriniz ✅

1. **Ticari Kullanım**: 
   - Tamamen ticari kullanım serbestliği
   - Koda dayalı ürünler satabilirsiniz
   - Telif ücreti ödeme zorunluluğu yok
   - Tescilli ürünlerde kullanabilirsiniz

2. **Değişiklik**: 
   - Kaynak kodunda tam değişiklik
   - Türev çalışmalar oluşturma
   - Herhangi bir amaca uyarlama
   - Diğer sistemlerle entegrasyon

3. **Dağıtım**: 
   - Orijinal yazılımı dağıtma
   - Değiştirilmiş sürümleri paylaşma
   - Diğer projelere dahil etme
   - Ticari olarak dağıtma

4. **Özel Kullanım**: 
   - Özel projelerde kullanım
   - Gizli değişiklikler
   - Açıklama zorunluluğu yok
   - Sınırsız dahili kullanım

5. **Alt Lisanslama**: 
   - Türetilmiş kodun lisansını değiştirebilirsiniz
   - Değişiklikleriniz için farklı şartlar seçebilirsiniz
   - Diğer lisanslarla birleştirebilirsiniz
   - Dağıtım için kendi şartlarınızı oluşturabilirsiniz

### Yapmanız Gerekenler ⚠️

1. **Lisans Ekleme**: 
   - Lisans kopyasını kodla birlikte tutma
   - Tüm dağıtımlara dahil etme
   - Orijinal metni koruma
   - Görünür ve erişilebilir tutma

2. **Atıf**: 
   - Telif hakkı bildirimini koruma
   - Tüm kopyalara dahil etme
   - Orijinal kredileri koruma
   - Kodun kaynağını belgeleme

### Yapamayacaklarınız ❌

1. **Yazarları Sorumlu Tutma**: 
   - Çalışma garantisi yok
   - Yazarlar hasarlardan sorumlu değil
   - Zorunlu destek yok
   - Kullanım riski size ait