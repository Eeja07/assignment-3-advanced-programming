## Mahija Ibad Pradipta | 5024221026

## Teknik Komputer | Pemrograman Lanjut

#

# Programming Assignment 3: Simple STL

Pada programming assignment kali ini Anda diminta untuk mengimplementasikan kode program untuk dapat menentukan apakah suatu Segitiga
(Triangle) adalah segitiga "sama kaki", "sama sisi", "siku-siku", atau "sembarang". Anda diberikan kode template dengan dua kelas
berbeda yaitu Point2D dan Triangle. Sesuai dengan namanya, kelas Point2D digunakan untuk mendefinisikan suatu poin dalam sumbu 2D (x dan y)
dan kelas Triangle digunakan untuk mendefinisikan suatu segitiga beserta propertinya.

## Langkah-langkah yang perlu dilakukan

1. Edit header file point2d.hpp dan triangles.hpp sesuai dengan bayangan Anda untuk mensupport penyelesaian permasalahan tipe segitiga.
2. Definisikan fungsi-fungsi pada header tersebut pada file .cpp yang telah disediakan.
3. Edit file main.cpp sesuai dengan kebutuhan yang telah ditentukan.
4. Jika Anda menggunakan namespace custom maka akan ada tambahan nilai.

# Laporan Programming Assignment 3: Simple STL

## Source Code hpp :

![Screen Shot 2023-05-22 at 20 59 51](https://github.com/Eeja07/test/assets/115524218/3b99d87a-81f5-441c-9b24-b3ad2f17c66b)

## Source Code cpp :

![Screen Shot 2023-05-22 at 21 30 48](https://github.com/Eeja07/test/assets/115524218/36ead2a8-043f-4629-a04f-d6ba201a4f20)

![Screen Shot 2023-05-22 at 21 31 09](https://github.com/Eeja07/test/assets/115524218/839927fa-d1d4-42e0-ae87-d91ae31ba282)

## Output Code :

![Screen Shot 2023-05-22 at 21 36 00](https://github.com/Eeja07/test/assets/115524218/7be1e136-8b40-4f7a-96b1-916be2b54631)

## Penjelasan :

1. Untuk menyelesaikan perintah diberikan template code hpp maupun cpp, dimana diberikan 2 file hpp yaitu point2d.hpp dan triangles.hpp. Sedangkan untuk cpp diberikan 3, yaitu main.cpp, point2d.cpp, dan triangles.cpp.
2. Pada source code point2d.hpp, code ini berisi kelas point2d yang berfungsi untuk mengimplementasikan titik dua dimensi dalam ruang, pada kelas ini terdapat anggota publik maupun private, dimana untuk private merupakan koordinat x, y, z yang bertipe data float. Kemudian untuk anggota publik terdapat konstruktor point2d tanpa parameter dan konstruktor point2d yang memiliki parameter x, y, dan z. Pada anggota publik lainnya yaitu float Get X/Y/Z() const { return \_x/\_y/\_z; }; untuk mendefinisikan fungsi anggota Get X/Y/Z() yang mengembalikan nilai koordinat x/y/z dari objek Point2D dan const menunjukkan bahwa fungsi ini tidak akan mengubah anggota variabel kelas. Kemudian ada inline void Set X/Y/Z(float x/y/z) { \_x/\_y/\_z = x/y/z; } untuk Mendefinisikan fungsi anggota Set X/Y/Z() yang digunakan untuk mengubah nilai koordinat x/y/z dari objek Point2D. Fungsi ini menggunakan inline agar kompiler memasukkan kode fungsi secara langsung ke dalam pemanggilan fungsi agar dapat mengoptimalkan performa. Terakhir ada Point2D operator+/-/\* (const Point2D inp); untuk mendeklarasikan operator+/-/\* untuk objek Point2D yang memungkinkan penambahan, pengurangan, dan perkalian dua titik. Operator - operator ini mengembalikan objek Point2D baru yang merupakan hasil penjumlahan, pengurangan, dan perkalian koordinat x dan y dari dua objek Point2D.
3. Pada source code triangles.hpp, code ini berisi kelas Triangle dan terdapat #include "point2d.hpp" yang berarti kelas Triangle menggunakan kelas Point2D. Kelas Triangle ini berisi anggota privat dan publik dimana pada anggota privat yaitu Point2D \_t1/2/3; untuk mewakili tiga titik segitiga \_t1/2/3. Kemudian pada anggota publik terdapat konstruktor Triangle tanpa parameter dan konstruktor Triangle dengan tiga parameter t1/2/3. Selanjutnya terdapat void SetT1/2/3(Point2D t1/2/3); untuk mendefinisikan fungsi anggota SetT1/2/3() yang digunakan untuk mengatur nilai titik \_t1/2/3 dari objek Triangle. Kemudian pada Point2D GetT1/2/3() const { return \_t1/2/3; } mendefinisikan fungsi anggota GetT1/2/3() yang mengembalikan nilai titik \_t1/2/3 dari objek Triangle dan const menunjukkan bahwa fungsi ini tidak akan mengubah anggota variabel kelas. Terakhir ada void TriangleType(); untuk mendeklarasikan fungsi yang menentukan jenis segitiga berdasarkan panjang sisi-sisinya. Fungsi ini belum didefinisikan di dalam kelas Triangle dan perlu didefinisikan di luar kelas.
4. Pada source code point2d.cpp, di code ini terdapat #include "include/point2d.hpp" untuk mengimpor file header point2d.hpp yang berisi kelas Point2D. Pada Point2D::Point2D() : \_x(0), \_y(0), \_z(0) {} merupakan implementasi konstruktor Point2D yang menginisialisasi nilai-nilai anggota \_x, \_y, dan \_z dengan nilai 0. Pada Point2D::Point2D(float x, float y, float z) : \_x(x), \_y(y), \_z(z) {} merupakan implementasi konstruktor Point2D yang menginisialisasi nilai-nilai anggota \_x, \_y, dan \_z dengan nilai yang diberikan. Dan pada line 10-41 merupakan implementasi operator+/-/\* untuk objek Point2D. Operator ini melakukan penjumlahan dan pengurangan vektorial serta perkalian skalar antara dua titik. Membuat objek Point2D baru bernama out. Mengatur koordinat x, y, dan z dari objek out dengan menjumlahkan, mengurangi, dan mengalikan koordinat objek this dan inp menggunakan fungsi GetX(), GetY(), dan GetZ(). Dan dalam semua operator di atas, fungsi SetX(), SetY(), dan SetZ() digunakan untuk mengatur nilai koordinat x, y, dan z dari objek Point2D.
5. Pada source code triangles.cpp, di code ini terdapat #include "include/triangles.hpp" untuk mengimpor file header triangles.hpp yang berisi kelas Triangle. Pada Triangle::Triangle() {} merupakan implementasi konstruktor Triangle. Pada Triangle::Triangle(Point2D t1, Point2D t2, Point2D t3) : \_t1(t1), \_t2(t2), \_t3(t3) {} merupakan implementasi konstruktor Triangle yang menginisialisasi nilai-nilai anggota \_t1, \_t2, dan \_t3 dengan nilai yang diberikan. Selanjutnya pada void Triangle::SetT1/2/3(Point2D t1/2/3) { \_t1/2/3 = t1/2/3; } mendefinisikan fungsi SetT1/2/3() untuk mengubah nilai titik \_t1/2/3 dari objek Triangle dengan nilai yang diberikan. Kemudian ada void Triangle::TriangleType(): yang mendefinisikan fungsi TriangleType() untuk menentukan jenis segitiga berdasarkan panjang sisi-sisinya dengan cara menghitung panjang sisi-sisi segitiga dengan rumus jarak antara dua titik dalam ruang tiga dimensi yang menggunakan fungsi sqrt() dari pustaka cmath untuk menghitung akar kuadrat dan fungsi pow() untuk menghitung pangkat 2. Kemudian memeriksa jenis segitiga berdasarkan panjang sisinya menggunakan rumus if-else. Jika ketiga sisinya memiliki panjang yang sama, segitiga tersebut merupakan segitiga sama sisi. Jika dua sisi memiliki panjang yang sama, segitiga tersebut merupakan segitiga sama kaki. Jika memenuhi rumus Pythagoras (a^2 = b^2 + c^2 atau sejenisnya) dengan salah satu sisi sebagai sisi miring, segitiga tersebut merupakan segitiga siku-siku. Jika tidak memenuhi kriteria di atas, segitiga tersebut merupakan segitiga sembarang.
6. Pada source code main.cpp, di code ini terdapat 1 fungsi utama yang mendeklarasikan variabel x1/2/3, y1/2/3, z1/2/3 bertipe float yang akan digunakan untuk menyimpan koordinat tiga titik segitiga. Kemudian cin untuk membaca input. Pada Point2D t1/2/3(x1/2/3, y1/2/3, z1/2/3); Membuat objek Point2D t1/2/3 dengan menggunakan konstruktor Point2D yang menerima tiga parameter x1/2/3, y1/2/3, dan z1/2/3. Pada Triangle triangle(t1, t2, t3); membuat objek Triangle triangle dengan menggunakan konstruktor Triangle yang menerima tiga objek Point2D sebagai parameter. Dan terakhir triangle.TriangleType(); memanggil metode TriangleType() dari objek triangle untuk menentukan jenis segitiga berdasarkan panjang sisi-sisinya dan mencetak hasilnya ke output.
