# Implementasi Sederhana Kriptografi Teks dengan C++

Proyek ini adalah implementasi sederhana dari kriptografi teks menggunakan bahasa pemrograman C++. Dengan proyek ini, pengguna dapat mengenkripsi teks yang dimasukkan menggunakan kunci numerik dan mendekripsinya kembali menjadi teks asli.

## Fitur Utama

- **Enkripsi dan Dekripsi Teks**: Proyek ini mendukung enkripsi teks yang diinput oleh pengguna, serta dekripsi untuk mengembalikan teks terenkripsi ke bentuk plaintext.
- **Penggunaan Kunci Numerik**: Pengguna diminta untuk memasukkan kunci numerik. Kunci ini digunakan sebagai dasar untuk proses enkripsi dan dekripsi, dengan melakukan operasi matematika terhadap teks yang dimasukkan.
- **Operasi Matematika**: Teks yang dienkripsi diproses melalui penambahan atau pengurangan berdasarkan kunci yang diberikan oleh pengguna, membuat teks sulit dibaca tanpa kunci yang sesuai.

## Cara Kerja

1. **Input Teks**: Pengguna akan diminta memasukkan teks (plaintext) yang akan dienkripsi.
2. **Input Kunci**: Pengguna akan diminta memasukkan kunci numerik. Kunci ini akan menentukan bagaimana teks dienkripsi.
3. **Proses Enkripsi**: Teks asli akan diubah menjadi ciphertext menggunakan operasi matematika berdasarkan kunci.
4. **Proses Dekripsi**: Teks terenkripsi (ciphertext) dapat diubah kembali ke teks asli (plaintext) dengan menggunakan kunci yang sama.
   
   **Contoh Sederhana**:
   - **Enkripsi**: Misalkan pengguna memasukkan teks "HELLO" dengan kunci 3. Setiap karakter dalam teks akan digeser berdasarkan kunci.
     - 'H' akan menjadi 'K', 'E' akan menjadi 'H', dan seterusnya.
   - **Dekripsi**: Teks "KHOOR" akan kembali menjadi "HELLO" dengan kunci yang sama.

## Teknologi

- **Bahasa Pemrograman**: C++
- **Konsep**: Kriptografi dasar, operasi matematika sederhana seperti penambahan atau pengurangan nilai ASCII berdasarkan kunci yang diberikan.

## Struktur Proyek

- `main.cpp`: File utama yang berisi logika enkripsi dan dekripsi.
- **Fungsi Utama**:
  - `encryptText()`: Menerima teks asli dan kunci numerik sebagai input, mengembalikan ciphertext.
  - `decryptText()`: Menerima ciphertext dan kunci numerik untuk mengembalikan plaintext asli.

## Cara Menjalankan Proyek

1. **Clone repositori**:
   ```bash
   git clone https://github.com/RusdyZain/KriptografiText.git
   ```
2. **Navigasi ke direktori proyek**:
   ```bash
   cd KriptografiText
   ```
3. **Kompilasi program**:
   ```bash
   g++ main.cpp -o kriptografi
   ```
4. **Jalankan program**:
   ```bash
   ./kriptografi
   ```
5. **Ikuti instruksi di terminal** untuk memasukkan teks dan kunci.

## Contoh Penggunaan

### Input:
```
Masukkan teks: HELLO
Masukkan kunci: 3
```

### Output Enkripsi:
```
Teks terenkripsi: KHOOR
```

### Input Dekripsi:
```
Masukkan teks terenkripsi: KHOOR
Masukkan kunci: 3
```

### Output Dekripsi:
```
Teks asli: HELLO
```

## Tujuan Pembelajaran

Proyek ini cocok bagi pemula yang ingin belajar dasar-dasar kriptografi, seperti:
- Bagaimana kunci dapat digunakan untuk mengamankan teks.
- Penerapan operasi matematika sederhana pada karakter teks.
- Proses dasar enkripsi dan dekripsi.

Meskipun sederhana, proyek ini memberikan pemahaman mengenai konsep dasar kriptografi yang dapat dikembangkan lebih lanjut untuk sistem keamanan yang lebih kompleks.

## Batasan

- **Keamanan**: Teknik enkripsi ini hanya untuk tujuan pendidikan dan sangat sederhana. Jangan gunakan di aplikasi nyata yang memerlukan tingkat keamanan tinggi.
- **Karakter yang Didukung**: Saat ini, program ini hanya mendukung karakter huruf alfabet, tidak mendukung karakter non-alfabet (seperti simbol atau angka) secara penuh.

## Kontribusi

Jika Anda ingin meningkatkan proyek ini, Anda dapat:
1. **Fork** repositori ini.
2. Buat branch fitur baru (`git checkout -b fitur-baru`).
3. Lakukan commit terhadap perubahan Anda (`git commit -am 'Menambahkan fitur baru'`).
4. Push ke branch tersebut (`git push origin fitur-baru`).
5. Buat pull request.
