C Programlama: Fibonacci Serisi ve İstatistiksel Analiz

Bu proje, kullanıcının belirlediği terim sayısı kadar Fibonacci dizisi oluşturan ve bu dizi üzerinde temel istatistiksel hesaplamalar yapan bir C uygulamasıdır.

 Teknik yapı
* **Dinamik Girdi:** Kullanıcıdan alınan komutları (start/exit) ve terim sayılarını işler.
* **İstatistik Hesaplama:** Oluşturulan dizinin toplamını, ortalamasını, minimum ve maksimum değerlerini anlık olarak hesaplar.
* **Hata Yönetimi:** Geçersiz sayısal girişleri kontrol eder.

 Kullanılan Fonksiyonlar
* `generateFibonacci()`: Ana algoritmayı yöneten ve sonuçları ekrana basan fonksiyon.
* `strcmp` & `atoi`: String karşılaştırma ve veri tipi dönüştürme işlemleri.
