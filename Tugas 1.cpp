#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<" \tMENU LOGIN\n\n";
	cout<<" Masukkan Username : ";cin>>user;cout<<"\n";
	cout<<" Masukkan Password  : ";cin>>pass;cout<<"\n";
	if (user == "Mila_Sopiana" && pass == "F1B019090")
	{
		cout<<"Selamat Anda Berhasil Login\n";
	}
	else
	{
		cout<<"Username atau Password yang Anda Masukkan Salah Silahkan Coba Kembali \n";
		cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
		if (pilihanlogin=='y' || pilihanlogin=='Y')
		{
			system("cls");
			goto ulang;
		}
		else
		{
			goto selesai;
		}
		if (pilihanlogin=='t' || pilihanlogin=='T')
		{
			goto selesai;
		}	
	}
	system("pause");				
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
		ulangjwb :
    	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D\n";
		cout<<"=========================================================================\n";
		cout<<"1. Virus Corona (COVID-19) yang menyerang manusia muncul di negara ... pada awal tahun 2020.\n";
    	string pilgan5[50]={"a. Cina","b. Italia","c. Amerika","d. Indonesia"};
		for (i=0;i<=3;i++)
		{cout<<pilgan5[i]<<"\n";}
    	cout<<"Jawaban : ";
    	cin >> jawab;
        	if(jawab == 'a' || jawab == 'A')
        	{benar++;}
        	else{
        	salah++;}
		cout<<"\n";
		cout<<"2. Virus Corona (COVID-19) dibawa oleh hewan ... dan menular kepada manusia.\n";
		string pilgan10[50]={"a. Burung","b. Itik","c. Kelelawar","d. Ayam"};
		for (i=0;i<=3;i++)
		{cout<<pilgan10[i]<<"\n";}
		cout<<"Jawaban : ";
    	cin >> jawab;
        	if(jawab == 'c' || jawab == 'C')
        	{benar++;}
        	else{
        	salah++;} 
    	cout<<"\n";
    	cout<<"3. Berdasarkan hasil penelitian dari National Institute of Allergy and Infectious Diseases, ukuran COVID-19 adalah...\n";
		string pilgan6[50]={"a. 120 hingga 160 nanometer","b. 140 hingga 180 nanometer","c. 160 hingga 200 nanometer","d. 180 hingga 220 nanometer"};
		for (i=0;i<=3;i++)
		{cout<<pilgan6[i]<<"\n";}
		cout<<"Jawaban : ";
    	cin >> jawab;
        	if(jawab == 'a' || jawab == 'A')
        	{benar++;}
        	else{
        	salah++;}     
		cout<<"\n";
		cout<<"4. COVID-19 bisa masuk melalui anggota-anggota tubuh di bawah ini, kecuali...\n";
		string pilgan9[50]={"a. Mata","b. Hidung","c. Mulut","d. Telinga"};
		for (i=0;i<=3;i++)
		{cout<<pilgan9[i]<<"\n";}
		cout<<"Jawaban : ";
    	cin >> jawab;
        	if(jawab == 'd' || jawab == 'D')
        	{benar++;}
        	else{
        	salah++;}
		cout<<"\n";
		cout<<"5. Di bawah ini adalah media penyebaran virus Corona, kecuali...\n";
		string pilgan8[50]={"a. Bersalaman/sentuhan tangan","b. Udara","c. Percikan batuk dan bersin","d. Benda-benda padat"};
    	for (i=0;i<=3;i++)
		{cout<<pilgan8[i]<<"\n";}
		cout<<"Jawaban : ";
    	cin >> jawab;
        	if(jawab == 'b' || jawab == 'B')
        	{benar++;}
        	else{
        	salah++;}
		cout<<"\n";
		cout<<"6. COVID-19 tidak bisa hidup di beberapa jenis cairan di bawah ini, kecuali...\n";
    	string pilgan2[50]={"a. Air panas","b. Cuka/asam","c. Air dingin/tawar","d. Air asin"};
		for (i=0;i<=3;i++)
		{cout<<pilgan2[i]<<"\n";}
    	cout<<"Jawaban : ";
    	cin >> jawab;
        	if(jawab == 'c' || jawab == 'C')
        	{benar++;}
        	else{
        	salah++;}
    	cout<<"\n";
    	cout<<"7. Jenis vitamin yang disarankan dikonsumsi untuk meningkatkan daya tahan tubuh agar terhindar dari COVID-19 adalah...\n";
		string pilgan3[50]={"a. Vitamin A dan B","b. Vitamin B dan C","c. Vitamin C dan D","d. Vitamin C dan E"};
		for (i=0;i<=3;i++)
		{cout<<pilgan3[i]<<"\n";}
    	cout<<"Jawaban : ";
    	cin >> jawab;
        	if(jawab == 'd' || jawab == 'D')
        	{benar++;}
        	else{
        	salah++;}
		cout<<"\n";
		cout<<"8. Cara bersin yang baik dan beretika yaitu...\n";
		string pilgan1[50]={"a. Menutup dengan baju bagian luar","b. Menutup dengan baju bagian luar","c. Menutup dengan telapak tangan ","d. Menutup dengan tisu"};
		for (i=0;i<=3;i++)
		{cout<<pilgan1[i]<<"\n";}
    	cout<<"Jawaban : ";
    	cin >> jawab;
        	if(jawab == 'd' || jawab == 'D')
        	{benar++;}
        	else{
        	salah++;}
    	cout<<"\n";
    	cout<<"9. Masa inkubasi COVID-19 selama...\n";
		string pilgan4[50]={"a. 7 hari","b. 14 hari","c. 28 hari","d. 32 hari"};
    	for (i=0;i<=3;i++)
		{cout<<pilgan4[i]<<"\n";}
		cout<<"Jawaban : ";
    	cin >> jawab;
        	if(jawab == 'b' || jawab == 'B')
        	{benar++;}
        	else{
        	salah++;}
    	cout<<"\n";
    	cout<<"10. Cuci tangan yang paling baik dilakukan dengan menggunakan sabun pada...\n";
		string pilgan7[50]={"a. Air mengalir","b. Air dalam wadah","c. Air kolam","d. Air hangat"};
		for (i=0;i<=3;i++)
		{cout<<pilgan7[i]<<"\n";}
    	cout<<"Jawaban : ";
    	cin >> jawab;
        	if(jawab == 'a' || jawab == 'A')
        	{benar++;}
        	else{
        	salah++;}
		cout<<"\n";
    	cout<<"Apakah Anda Yakin Dengan Jawaban Anda? [y/t] : ";cin>>pilihan;cout<<"\n";
			if (pilihan=='y' || pilihan=='Y')
			{goto nilai;}
					
			if (pilihan=='t' || pilihan=='T')
			{system("cls"); 
			goto ulangjwb;
			cout<<endl;}												       
	}		
	nilai :
	cout<<"=====================================================\n";
	cout<<"Perolehan Nilai :"<<endl;
    nilai = benar*10;
    cout<<"Jumlah Benar : "<<benar<<" soal "<<endl;
    cout<<"Jumlah Salah : "<<salah<<" soal "<<endl;
    cout<<"Nilai Anda   : "<<nilai<<"\n"<<endl;
	selesai : 
	cout<<"==================================="<<endl;
	cout<<"TERIMA KASIH SUDAH MENGIKUTI QUIZ\n";
	cout<<"==================================="<<endl;	
}
