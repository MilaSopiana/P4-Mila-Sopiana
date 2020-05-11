#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;


struct data{
	char nama[50],nama1[50],kode[50],kode1[50],jenis[50],jenis1[50], tgl[50], tgl1[50];
}; struct data hp[50];
int pil1,i,pil2;
char back;

void Masuk() {
	int nomor_barang=1;
	system("cls");
    cout<<"|===================================================|\n";
	cout<<"\t        INPUT DATA BARANG MASUK"<<endl;
    cout<<"|===================================================|\n\n";
	cout<<endl;
	cout<<"Masukkan Jumlah Barang yang ingin diinput : ";
	cin>>pil1;
	cout<<endl;
	for (i=0;i<pil1;i++){

		cout<<"INPUT DATA KE : "<<nomor_barang<<endl;
        nomor_barang=nomor_barang+1;
		cout<<"----------\n";
		cout<<"Nama Barang : ";
		cin>>hp[i].nama;
		cout<<"Kode Barang : ";
		cin>>hp[i].kode;
		cout<<"Jenis Barang : ";
		cin>>hp[i].jenis;
		cout<<"Tanggal Masuk : ";
		cin>>hp[i].tgl;
		cout<<endl;
}
}

void Keluar(){
    int nomor_barang=1;
	system("cls");
    cout<<"|===================================================|\n";
	cout<<"\t        INPUT DATA BARANG KELUAR"<<endl;
    cout<<"|===================================================|\n\n";
	cout<<endl;
	cout<<"Masukkan Jumlah Barang yang ingin diinput : ";
	cin>>pil2;
	cout<<endl;
	for (i=0;i<pil2;i++){

		cout<<"INPUT DATA KE : "<<nomor_barang<<endl;
        nomor_barang=nomor_barang+1;
		cout<<"----------\n";
		cout<<"Nama Barang : ";
		cin>>hp[i].nama1;
		cout<<"Kode Barang : ";
		cin>>hp[i].kode1;
		cout<<"Jenis Barang : ";
		cin>>hp[i].jenis1;
		cout<<"Tanggal Keluar: ";
		cin>>hp[i].tgl1;
		cout<<endl;
}
}

void D_Masuk () {
    system ("cls");
    cout<<"\t=====================\n";
	cout<<"\t| DATA BARANG MASUK |"<<endl;
	cout<<"=================================================================================================="<<endl;
	cout<<" NAMA BARANG |     KODE BARANG     |           JENIS BARANG           |       TANGGAL MASUK      |"<<endl;
	cout<<"=================================================================================================="<<endl;
	for (i=0;i<pil1;i++){

	cout<<hp[i].nama<<"\t\t\t"<<hp[i].kode<<"\t\t\t"<<hp[i].jenis<<"\t\t\t"<<hp[i].tgl<<"\t\t\t"<<endl;
}
}

void D_Keluar () {
    system ("cls");
    cout<<"\t=====================\n";
	cout<<"\t| DATA BARANG KELUAR |"<<endl;
	cout<<"==================================================================================================="<<endl;
	cout<<" NAMA BARANG |     KODE BARANG     |           JENIS BARANG           |       TANGGAL KELUAR      | "<<endl;
	cout<<"==================================================================================================="<<endl;
	for (i=0;i<pil1;i++){
	cout<<hp[i].nama1<<"\t\t\t"<<hp[i].kode1<<"\t\t\t"<<hp[i].jenis1<<"\t\t\t"<<hp[i].tgl1<<"\t\t\t"<<endl;
}
}

void kode_salah(){
    cout<< "\n================================================" << endl;
    cout<< "==== Pastikan Kode Yang Anda Masukkan Benar ====" <<endl;
    cout<< "================================================" <<endl;
    }


void login(){
	awal:
	string username,pass;
	cout<<endl;
	//\t\t\t
	system ("cls");
	cout<<"\t\t\t|================================================================|\n";
	cout<<"\t\t\t\t ===MASUKKAN USERNAME DAN PASSWORD UNTUK LOGIN==="<<endl;
	cout<<"\t\t\t|================================================================|\n\n";
	cout<<"\t\t\t\t Username : ";
	cin>>username;
	cout<<"\t\t\t\t Password : ";
	cin>>pass;

	if (username=="Mila_Sopiana" && pass=="F1B019090"){
		cout<<"\n\t\t\t\t---------------------------\n";
		cout<<"\t\t\t\tSELAMAT ANDA BERHASIL LOGIN\n";
		cout<<"\t\t\t\t---------------------------\n";
    cout<<"\t\t\t|=========================================|"<<endl;
    cout<<"\t\t\t\t";system("pause");
	}
	else {
	    cout<<"\n\t\t\t|=========================================|\n";
		cout<<"\t\t\tPassword atau Username yang Anda Masukkan Salah\n";
        cout<<"\t\t\t|=========================================|\n";
		cout<<"\t\t\t\t";system("pause");
		goto awal;
	}
}
int main(){
	login();
	cout<<endl;
	menu:
	system("cls");
	int pilihan;
	cout<<"|=======================================================|"<<endl;
	cout<<"    -------------------------------------------------\n";
	cout<<"\t ===SELAMAT DATANG DI TOKO MILA PHONE==="<<endl;
	cout<<"    -------------------------------------------------\n";
    cout<<"|=======================================================|\n"<<endl;
	cout<<" 1. Input Barang Masuk\n";
	cout<<" 2. Input Barang Keluar\n";
	cout<<" 3. Cek Barang Masuk\n";
	cout<<" 4. Cek Barang Keluar\n";
	cout<<" 5. Keluar\n\n";
	cout<<"Masukkan Pilihan : ";
	cin>>pilihan;

switch (pilihan)
	 {
	  case 1:
    Masuk ();
    goto Kembali;
	 break;


	  case 2:
    Keluar();
    goto Kembali;
	   break;

	  case 3:
    D_Masuk();
    goto Kembali;
	   break;

	  case 4:
    D_Keluar();
    goto Kembali;
        break;

      case 5:
    exit (0);
    system ("pause");
    system ("cls");
        break;

    default :
    kode_salah();
    system("pause");
    system("cls");
    goto menu;
        break;
        }

    Kembali:
    cout<<"Kembali Y/N : ";
    cin>>back;

			if (back=='y'|| back=='Y'){
				goto menu;
			}
			else {
				exit (0);
			}

system("pause");
return 0;

}
