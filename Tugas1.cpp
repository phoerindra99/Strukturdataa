#include <iostream>
#include <stdio.h>

 using namespace std;
 
		 struct fullname 
		 { //struct untuk nama, semua tipe data di dalamnya adalah string
		  string nama;
		 };
 
 struct mahasiswa { //struct yang memuat lebih dari satu tipe data
  fullname nama; //tipe data berupa fullname karena pada struct diatas terdiri dari string, sehingga fullname diartikan tipe data string
  string nim;
  int TH1;
  int TH2;
  int TH3;
  char kelamin; 
  
 };
 
 mahasiswa UTY[30]; //indeks untuk UTY
 
		int main () 
		{
		  char jurusan[30]; 
		  int n,i;
		  int rata;
		  cout<<"MASUKKAN JUMLAH DATA : ";
		  cin>>n;
		  cout<<endl;
		  cout<<"================================================\n";
		  cout<<"DATA MAHASISWA :"<<endl;
		  
for (i=1; i<=n; i++)
 {
  cout<<"Mahasiswa UTY ke "<<i<<endl;
  cout<<"Masukkan NIM :";
  cin>>UTY[i].nim;
    
  cout<<"Nama :";
  cin>>UTY[i].nama.nama;
  
  cout<<"Jenis Kelamin(L/P) :";
  cin>>UTY[i].kelamin;
  
  cout<<"Jurusan :";
  cin>>jurusan;
     
  cout<<"Masukkan Nilai Tugas Harian 1 :";
  cin>>UTY[i].TH1;
  
  cout<<"Masukkan Nilai Tugas Harian 2 :";
  cin>>UTY[i].TH2;
  
  cout<<"Masukkan Nilai Tugas Harian 3 :";
  cin>>UTY[i].TH3;
  
  
  
  rata=(UTY[i].TH1+UTY[i].TH2+UTY[i].TH3)/3;
  } 	  
		 //menampilkan hasil input
		for (i=1; i<=n; i++) {
		  cout<<endl<<endl<<"Mahasiswa UTY ke "<<i<<endl;
		  cout<<"NIM            :"<<UTY[i].nim<<endl;
		  cout<<"Nama           :"<<UTY[i].nama.nama<<endl;
		  cout<<"Kelamin        :"<<UTY[i].kelamin<<endl;  
		  cout<<"Jurusan        :"<<jurusan<<endl;
		  cout<<"Tugas Harian 1 :"<<UTY[i].TH1<<endl;
		  cout<<"Tugas Harian 2 :"<<UTY[i].TH2<<endl;
		  cout<<"Tugas Harian 3 :"<<UTY[i].TH3<<endl;
		  cout<<"Rata-rata      :"<<rata<<endl;
		  }
 system("pause");
return 0;
}
