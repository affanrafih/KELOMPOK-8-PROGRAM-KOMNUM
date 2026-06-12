# KELOMPOK 8 - PROGRAM-KOMNUM

Tugas Program Komputasi Numerik menggunakan **Metode Newton-Raphson Modifikasi**.

Program ini digunakan untuk mencari akar persamaan polinomial pangkat tiga:

```text
f(x) = ax^3 + bx^2 + cx + d
```

Metode Newton-Raphson Modifikasi menggunakan rumus:

```text
x baru = x - (f(x) * f'(x)) / ((f'(x))^2 - f(x) * f''(x))
```

## Penjelasan Kode Program

### Variabel Global

```cpp
double a = 0, b = 0, c = 0, d = 0;
```

Variabel ini digunakan untuk menyimpan koefisien dari fungsi:

```text
ax^3 + bx^2 + cx + d
```

Keterangan:

- `a` menyimpan koefisien `x^3`
- `b` menyimpan koefisien `x^2`
- `c` menyimpan koefisien `x`
- `d` menyimpan konstanta

### Fungsi `parseFunction`

```cpp
for (int i = 1; i < s.length(); i++) {
    if (s[i] == '-') {
        s.insert(i, "+");
        i++;
    }
}
```

Bagian ini digunakan untuk membaca string fungsi yang dimasukkan oleh user. Jika terdapat tanda minus (`-`), program menambahkan tanda plus (`+`) sebelumnya agar setiap suku fungsi dapat dipisahkan dengan lebih mudah.

Contoh:

```text
12x^3+2x^2-3x+4
```

akan dipisahkan menjadi beberapa suku:

```text
12x^3
2x^2
-3x
4
```

```cpp
if (i == s.length() || s[i] == '+')
```

Bagian ini digunakan untuk menandai akhir dari sebuah suku. Jika program menemukan tanda `+`, maka suku yang sudah disimpan sementara akan diproses.

```cpp
if (temp.find("x^3") >= 0)
```

Bagian ini digunakan untuk mengidentifikasi jenis suku pada fungsi. Program akan mengecek apakah suku tersebut merupakan suku `x^3`, `x^2`, `x`, atau konstanta, lalu menyimpannya ke variabel koefisien yang sesuai.

### Fungsi `f(x)`

```cpp
double f(double x) {
    return a*x*x*x + b*x*x + c*x + d;
}
```

Fungsi ini digunakan untuk menghitung nilai:

```text
f(x) = ax^3 + bx^2 + cx + d
```

### Turunan Pertama `f'(x)`

```cpp
double df(double x) {
    return 3*a*x*x + 2*b*x + c;
}
```

Fungsi ini digunakan untuk menghitung turunan pertama dari fungsi utama.

Jika:

```text
f(x) = ax^3 + bx^2 + cx + d
```

maka:

```text
f'(x) = 3ax^2 + 2bx + c
```

### Turunan Kedua `f''(x)`

```cpp
double ddf(double x) {
    return 6*a*x + 2*b;
}
```

Fungsi ini digunakan untuk menghitung turunan kedua dari fungsi utama.

Jika:

```text
f'(x) = 3ax^2 + 2bx + c
```

maka:

```text
f''(x) = 6ax + 2b
```

## Input Program

```cpp
string function;
double x0, x_true;
int max_iteration;
```

Program meminta beberapa input dari user, yaitu:

- fungsi polinomial
- tebakan awal (`x0`)
- nilai akar sebenarnya (`x_true`)
- jumlah iterasi maksimum

## Iterasi Newton-Raphson Modifikasi

```cpp
while (iteration <= max_iteration)
```

Perulangan ini digunakan untuk menjalankan proses iterasi sampai jumlah iterasi mencapai batas maksimum yang ditentukan.

Pada setiap iterasi, program menghitung:

- nilai `f(x)`
- nilai `f'(x)`
- nilai `f''(x)`
- nilai pendekatan akar baru
- nilai error true (`Et`)
- nilai error approximate (`Ea`)

## Error True (`Et`)

```cpp
Et = fabs((x_true - x_new) / x_true) * 100;
```

Kode ini digunakan untuk menghitung error true dalam bentuk persen.

Rumus:

```text
Et = |(x_true - x_approx) / x_true| x 100%
```

Keterangan:

- `x_true` adalah nilai akar sebenarnya
- `x_approx` adalah nilai akar hasil pendekatan
- `fabs` digunakan agar hasil error bernilai positif

## Error Approximate (`Ea`)

```cpp
if (iteration == 1)
    Ea = 0;
else
    Ea = fabs((x_new - x) / x_new) * 100;
```

Kode ini digunakan untuk menghitung error approximate dalam bentuk persen.

Pada iterasi pertama, nilai `Ea` dibuat `0` karena belum ada nilai iterasi sebelumnya yang bisa dibandingkan.

Rumus:

```text
Ea = |(x_baru - x_lama) / x_baru| x 100%
```

## Output Program

Program menampilkan tabel hasil iterasi yang berisi:

- nomor iterasi
- nilai akar pendekatan
- nilai `f(x)`
- nilai `f'(x)`
- nilai `f''(x)`
- nilai `Et`
- nilai `Ea`

## Kesimpulan

Program ini membantu mencari akar dari fungsi polinomial pangkat tiga menggunakan Metode Newton-Raphson Modifikasi. Dengan memasukkan fungsi, tebakan awal, nilai sebenarnya, dan jumlah iterasi, program akan menghitung pendekatan akar serta nilai error pada setiap iterasi.
