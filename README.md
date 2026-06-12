# KELOMPOK 8 - PROGRAM-KOMNUM
Tugas Program Komnum Metode Newton-Raphson Modifikasi

Penjelasan Kode Program

# variabel global
`double a=0, b=0, c=0, d=0;`

berfungsi untuk menyimpan koefisien `ax3+bx2+cx+d`

# fungsi parsefunction
`for (int i = 1; i < s.length(); i++){
    if (s[i] == '-') {
        s.insert(i, "+");
        i++;
    }
}`

berfungsi membaca string fungsi, mengubah dan memisahkan koefisien dari yang dijelaskan di atas.

`for (int i = 0 i < s.length(); i++)`

pada kode bagian ini untuk error dari suatu yang dihasilkan kode

`if (i == s.length() || s[i] == '+')`

ini juga sama dengan bagian error yg di atas, tetapi pada bagian ini error selanjutnya dari yg diatas tadi.

`if (temp.find("x^3") >= 0)`

masuk ke kode bagian ini digunakan untuk meng-identifikasi koefisien pada program.

# masuk ke bagian koefisien
`double f(double x) {
    return a*x*x*x + b*x*x + c*x + d;
}`

kode ini digunakan untuk menghitung f(x)=ax3+bx2+cx+d.

# untuk turunan pertama
`double df(double x) {
    return 3*a*x*x + 2*b*x + c;
}`

kode ini berguna untuk menurunkan koefisien dan nilai dari awal

# turunan kedua
`double ddf(double x) {
    return 6*a*x + 2*b;
}`

kode ini berfungsi untuk menurunkan koef yang udah diturunkan pertama kali untuk kedua kalinya.

# main program
`string function;
double x0, x_true;`

untuk program nanti memasukan jumlah iterasi, tebakan awal, dan nilai dari fungsi

# iterasi newton-raphson modifikasi
`while (iteration <= max_iteration)`

untuk menghitung nilai yang didapat

# ET
`Et = fabs((x_true - x_new) / x_true) * 100;`

 yang nantinya kode ini akan berguna untuk menghitung Et​=
​xtrue​xtrue​−xaproksimasi​​
​×100%

# EA
`if (iteration = 1)
    Ea = 0;`

