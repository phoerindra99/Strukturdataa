#include <iostream>
#include <stdio.h>

 using namespace std;
 
		 struct fullname 
		 { //struct untuk nama lengkap, semua tipe data di dalamnya adalah string
		  string namalengkap;
		 };
 
 struct siswa { //struct yang memuat lebih dari satu tipe data
  fullname nama; 
  string nim;
  int TH1;
  int TH2;
  int TH3;
  char jeniskelamin; 
  
 };
 
 siswa UTY[30]; //indeks untuk UTY
 
		int main () 
		{
		  char jurusan[30]; 
		  int n,i;
		  int rata;
		  cout<<"MASUKAN JUMLAH DATA : ";
		  cin>>n;
		  cout<<endl;
		  cout<<"=========================================\n";
		  cout<<"DATA NILAI MAHASISWA :"<<endl;
		  
for (i=1; i<=n; i++)
 {
  cout<<"Siswa UTY ke "<<i<<endl;
  cout<<"Masukkan NIM :";
  cin>>UTY[i].nim;
    
  cout<<"Nama Lengkap :";
  cin>>UTY[i].nama.namalengkap;
  
  cout<<"Jenis Kelamin(L/P) :";
  cin>>UTY[i].jeniskelamin;
  
  cout<<"Jurusan :";
  cin>>jurusan;
     
  cout<<"Masukkan Tugas Harian 1 :";
  cin>>UTY[i].TH1;
  
  cout<<"Masukkan Tugas Harian 2 :";
  cin>>UTY[i].TH2;
  
  cout<<"Masukkan Tugas Harian 3 :";
  cin>>UTY[i].TH3;
  
  
  
  rata=(UTY[i].TH1+UTY[i].TH2+UTY[i].TH3)/3;
  } 	  
		 //menampilkan hasil input
		for (i=1; i<=n; i++) {
		  cout<<endl<<endl<<"Mahasiswa UTY ke "<<i<<endl;
		  cout<<"NIM        	  :"<<UTY[i].nim<<endl;
		  cout<<"Nama Lengkap     :"<<UTY[i].nama.namalengkap<<endl;
		  cout<<"Jenis Kelamin    :"<<UTY[i].jeniskelamin<<endl;  
		  cout<<"Jurusan          :"<<jurusan<<endl;
		  cout<<"Tugas Harian 1   :"<<UTY[i].TH1<<endl;
		  cout<<"Tugas Harian 2   :"<<UTY[i].TH2<<endl;
		  cout<<"Tugas Harian 3   :"<<UTY[i].TH3<<endl;
		  cout<<"Rata-rata        :"<<rata<<endl;
		  }
 system("pause");
return 0;
 }
