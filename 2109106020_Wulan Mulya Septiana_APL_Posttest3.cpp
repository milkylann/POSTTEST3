#include <iostream>

using namespace std;

//prosedur untuk menampilkan judul
void judul(){
	cout << "===============================================" << endl;
	cout << "          SELAMAT DATANG DI PROGRAM            " << endl;
	cout << "           KALKULATOR TaKuKaBaSiBa             " << endl;
	cout << "   ~ TAMBAH, KURANG, KALI, BAGI, SISA BAGI ~   " << endl;
	cout << "===============================================" << endl;
}

//deklarasi fungsi tambah 2 variabel
int tambah2(int x, int y){
	int hasil;
	hasil = x+y;
	return hasil;
}

//deklarasi fungsi kurang 2 variabel	
int kurang2(int x, int y){
	int hasil;
	hasil = x-y;
	return hasil;
}

//deklarasi fungsi kali 2 variabel
int kali2(int x, int y){
	int hasil;
	hasil = x*y;
	return hasil;
}

//deklarasi fungsi bagi 2 variabel
float bagi2(float x, float y){
	float hasil;
	hasil =	x/y;
	return hasil;		
}

//deklarasi fungsi sisa bagi 2 variabel
int sisa_bagi2(int x, int y){
	int hasil;
	hasil =	x%y;
	return hasil;		
}

//deklarasi fungsi tambah 3 variabel
int tambah3(int x, int y, int z){
	int hasil;
	hasil = x+y+z;
	return hasil;
}

//deklarasi fungsi kurang 3 variabel	
int kurang3(int x, int y, int z){
	int hasil;
	hasil = x-y-z;
	return hasil;
}

//deklarasi fungsi kali 3 variabel
int kali3(int x, int y, int z){
	int hasil;
	hasil = x*y*z;
	return hasil;
}

//deklarasi fungsi bagi 3 variabel
float bagi3(float x, float y, float z){
	float hasil;
	hasil =	x/y/z;
	return hasil;		
}

//deklarasi fungsi sisa bagi 3 variabel
int sisa_bagi3(int x, int y, int z){
	int hasil;
	hasil =	x%y%z;
	return hasil;		
}

//fungsi utama program
int main(){
	judul();	//memanggil prosedur
	int x, y, z, pilihan_awal, pilihan, hasil;
	int ulang = 0;
	char lagi = 'y';
	
	//perulangan untuk mengulangi program
	while(lagi == 'y'){
		//menampilkan menu kalkulator
		cout << "1. Penjumlahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. Sisa Bagi" << endl;
		cout << "6. Seluruh Operasi TaKuKaBaSiBa" << endl;
		cout << "-----------------------------------------------" << endl;
		//pilihan menu operasi
		cout << "Ingin menghitung operasi apa? [1/2/3/4/5/6] : ";
		cin >> pilihan_awal;
		//pilihan banyak variabel
		cout << "Mau berapa variabel? [2/3] : ";
		cin >> pilihan;	
		
		//menampilkan hasil operasi 2 variabel	
		if(pilihan==2){
			//deklarasi variabel			
			int hasil;
			int x,y;
			//input bilangan
			cout << "Masukkan bilangan pertama : "; cin >> x;
			cout << "Masukkan bilangan kedua   : "; cin >> y;
			cout << "\n***********************************************" << endl;
			//percabangan pilihan awal
			if(pilihan_awal==1){
				cout << "Hasil penjumlahan = " << tambah2(x,y) << endl;
			}
			else if(pilihan_awal==2){
				cout << "Hasil pengurangan = " << kurang2(x,y) << endl;
			}
			else if(pilihan_awal==3){
				cout << "Hasil perkalian = " << kali2(x,y) << endl;
			}
			else if(pilihan_awal==4){
				cout << "Hasil pembagian = " << bagi2(x,y) << endl;
			}
			else if(pilihan_awal==5){
				cout << "Hasil sisa bagi = " << sisa_bagi2(x,y) << endl;
			}
			else if(pilihan_awal==6){
				cout << "Hasil penjumlahan = " << tambah2(x,y) << endl;
				cout << "Hasil pengurangan = " << kurang2(x,y) << endl;
				cout << "Hasil perkalian = " << kali2(x,y) << endl;
				cout << "Hasil pembagian = " << bagi2(x,y) << endl;
				cout << "Hasil sisa bagi = " << sisa_bagi2(x,y) << endl;
			}	
			else{
				cout << "   >>>> Masukkan Pilihan Dengan Benar!! <<<<" << endl;
			}
		}	
		//menampilkan hasil operasi 3 variabel
		else if(pilihan==3){
			//deklarasi variabel		
			int hasil;
			int x,y,z;
			//input bilangan		
			cout << "Masukkan bilangan pertama : "; cin >> x;
			cout << "Masukkan bilangan kedua   : "; cin >> y;
			cout << "Masukkan bilangan ketiga  : "; cin >> z;
			cout << "\n***********************************************" << endl;
			//percabangan pilihan awal
			if(pilihan_awal==1){
				cout << "Hasil penjumlahan = " << tambah3(x,y,z) << endl;
			}
			else if(pilihan_awal==2){
				cout << "Hasil pengurangan = " << kurang3(x,y,z) << endl;
			}
			else if(pilihan_awal==3){
				cout << "Hasil perkalian = " << kali3(x,y,z) << endl;
			}
			else if(pilihan_awal==4){
				cout << "Hasil pembagian = " << bagi3(x,y,z) << endl;
			}
			else if(pilihan_awal==5){
				cout << "Hasil sisa bagi = " << sisa_bagi3(x,y,z) << endl;
			}
			else if(pilihan_awal==6){
				cout << "Hasil penjumlahan = " << tambah3(x,y,z) << endl;
				cout << "Hasil pengurangan = " << kurang3(x,y,z) << endl;
				cout << "Hasil perkalian = " << kali3(x,y,z) << endl;
				cout << "Hasil pembagian = " << bagi3(x,y,z) << endl;
				cout << "Hasil sisa bagi = " << sisa_bagi3(x,y,z) << endl;
			}
			else{
				cout << "   >>>> Masukkan Pilihan Dengan Benar!! <<<<" << endl;
			}	
		}
		else{
			cout << "\n  *** Pilihan Yang Anda Masukkan Salah!! ***" << endl; 
		}

		cout << "\n***********************************************";
		cout << "\nApakah ingin menghitung lagi? [y/n] : ";
		cin >> lagi; 
		cout << "-----------------------------------------------" << endl;
		ulang++; 
	}
 	return 0;		//mengembalikan nilai fungsi
}
