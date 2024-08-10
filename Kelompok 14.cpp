/*Kelompok 14 : Klinik Kecantikan
[1]. Kemas M. Aryadary Rasyad (2217051125)
[2]. Andria Laras Ramadhania (2217051016)
[3] Muhammad Adli Al Muflih (2217051067)
*/
#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;
int konsul();
int treatment();
int app(int harga, int layanan);
int app1(int harga);
int saldo;
int n=5;
string nama, umur, tl, alamat, nomor;

int main(){
int P;
	do{
	system("cls");
	cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
	cout<<"-------------------------------SILAHKAN ISI BIODATA TERLEBIH DAHULU-----------------------------------------------------\n";
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
	cout<<endl;
	cout<<endl;
	cout<<"Masukkan nama anda : ";getline(cin,nama);
	cout<<"Masukkan umur anda:";getline(cin,umur);
	cout<<"Masukkan tanggal lahir anda(DD/MM/YYYY): ";getline(cin,tl);
	cout<<"Masukkan alamat rumah : ";getline(cin,alamat);
	cout<<"Masukkan nomor telepon : ";getline(cin,nomor);
	
	
	system("cls");
	cout<<"( Selamat datang, "<<nama<<" )"<<endl;
	cout<<"("<<nomor<<")"<<endl;
	cout<<"=================================================================\n";
	cout<<"\t\t  KLINIK KECANTIKAN DIGITAL LARAS(+)\t\t\n";
	cout<<"==================================================================\n\n";
	cout<<"-----------------------------------\n";
	cout<<"| [1] Masuk ke Menu               |\n";
	cout<<"| [2] EXIT                        |\n";
	cout<<"-----------------------------------\n\n";
	cin>>P;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	system("cls");
	
	switch(P){
	
		case 1:
			system("cls");
			int menu;
			cout<<"==================================================================\n";
			cout<<"\t\tSISTEM PELAYANAN KLINIK\t\t\n";
			cout<<"==================================================================\n";
			cout<<"[1] Konseling dengan doktor\n";
			cout<<"[2] Treatment\n";
			cin>>menu;
			cin.ignore(1,'\n');
			switch(menu){
				system("cls");
				case 1:
					konsul();
					getch();
					break;
				case 2:
					treatment();
					getch();
				}
				break;
					
			
		case 2:
			system("cls");
			int nilai;
			nilai>0&&nilai<=10;
			cout<<"================================================\n";
			cout<<"Terima kasih telah datang di klinik kami\n"<<endl;
			cout<<"Jangan lupa untuk beri feedback (0-10)"<<endl;
			cout<<"===============================================\n";
			cin>>nilai;
			if(nilai>0&&nilai<=5){
				cout<<"Terima kasih atas penilaiannya, kami akan meningkatkan pelayanan kami\n";
			}else if(nilai>5&&nilai<=10){
				cout<<"Terima kasih banyak, anda puas, kami senang\n";
			}else{
				cout<<"Sampai Jumpa"<<endl;
			}
			return 0;
			break;
			
			default :
				system("cls");
				cout<<"Tidak ada pilihan"<<endl;
}

	
}while(P==1 || P==2 );
}


int konsul(){
	int array[5];
array[0]=100000;
array[1]=150000;
array[2]=200000;
array[3]=250000;
array[4]=300000;
	int harga;
	n=n-1;
	if(n==4){
		system("cls");
		cout<<"=======================================\n";
		cout<<"\tSESI 1\t\n";
		cout<<"=======================================\n";
		cout<<"KONSUL ANDA DIJADWALKAN KE : SESI 1\n";
		cout<<"Jam : 09.00 - 10.00\n";
		cout<<"Harga : 300.000\n";
		harga=array[4];
		app1(harga);
	}else if(n==3){
		system("cls");
		cout<<"=======================================\n";
		cout<<"\tSESI 2\t\n";
		cout<<"=======================================\n";
		cout<<"KONSUL ANDA DIJADWALKAN KE : SESI 2\n";
		cout<<"Jam : 10.00 - 11.00\n";
		cout<<"Harga : 300.000\n";
		harga=array[4];
		app1(harga);
	}else if(n==2){
		system("cls");
		cout<<"=======================================\n";
		cout<<"\tSESI 3\t\n";
		cout<<"=======================================\n";		
		cout<<"KONSUL ANDA DIJADWALKAN KE : SESI 3\n";
		cout<<"Jam : 11.00 - 12.00\n";
		cout<<"Harga : 300.000\n";
		harga=array[4];
		app1(harga);
	}else if(n==1){
		system("cls");
		cout<<"=======================================\n";
		cout<<"\tSESI 4\t\n";
		cout<<"=======================================\n";
		cout<<"KONSUL ANDA DIJADWALKAN KE : SESI 4\n";
		cout<<"Jam : 13.00 - 14.00\n";
		cout<<"Harga : 300.000\n";
		harga=array[4];
		app1(harga);
	}else if(n==0){
		system("cls");
		cout<<"=======================================\n";
		cout<<"\tSESI 5\t\n";
		cout<<"=======================================\n";
		cout<<"KONSUL ANDA DIJADWALKAN KE SESI 5\n";
		cout<<"Jam : 14.00 - 15.00\n";
		cout<<"Harga : 300.000\n";
		harga=array[4];
		app1(harga);
	}else{
		system("cls");
		cout<<"=======================================\n";
		cout<<"     TIDAK ADA SESI YANG TERSEDIA      \n";
		cout<<"=======================================\n\n";
		cout<<"Untuk konsultasi, cobalah untuk datang di hari esok!\n";
	}
	}

	
int treatment(){
	int harga;
	int layanan;
	int array[5];
array[0]=100000;
array[1]=150000;
array[2]=200000;
array[3]=250000;
array[4]=300000;
	
	system("cls");
			cout<<"Pilih layanan treatment yang anda inginkan : \n\n";
			cout<<"-------------------------------------\n";
			cout<<"|	[1] BOTOX 100k              |\n";
			cout<<"|	[2] CHEMICAL PEELING 200k   |\n";
			cout<<"|	[3] LASER TERAPI 250k       |\n";
			cout<<"|	[4] SOOTHING TREATMENT 200k |\n";
			cout<<"|	[5] MASKER 150k             |\n";
			cout<<"-------------------------------------\n";
			cout<<"PILIH TREATMENT (1/2/3/4/5): "<<endl;
			cin>>layanan;
			cin.ignore(1,'\n');
			switch(layanan){
				case 1:
					cout<<">>PEMBAYARAN<<\n";
					cout<<"Jenis Pelayanan : BOTOX\n";
					cout<<"Harga : 100.000\n";
					harga=array[0];
					cout<<"----------------------------------------------\n";
					app(harga,layanan);					
					break;
				case 2:
					cout<<">>PEMBAYARAN<<\n";
					cout<<"Jenis Pelayanan :CHEMICAL PEELING\n";
					cout<<"Harga : 200.000\n";
					harga=array[2];
					cout<<"----------------------------------------------\n";
					app(harga,layanan);					
					break;
				case 3:
					cout<<">>PEMBAYARAN<<\n";
					cout<<"LASER TERAPI\n";
					cout<<"Harga : 250.000\n";
					harga=array[3];
					cout<<"----------------------------------------------\n";
					app(harga,layanan);					
					break;
				case 4:
					cout<<">>PEMBAYARAN<<\n";
					cout<<"SOOTHING TREATMENT\n";
					cout<<"Harga : 100.000\n";
					harga=array[0];
					cout<<"----------------------------------------------\n";
					app(harga,layanan);
					break;
				case 5:
					cout<<">>PEMBAYARAN<<\n";
					cout<<"MASKER\n";
					cout<<"Harga : 300.000\n";
					harga=array[4];
					cout<<"----------------------------------------------\n";
					app(harga,layanan);
					break;
				default:
				cout<<">>TIDAK ADA TREATMENT/LAYANAN<<\n";

}	
}
	int app(int harga, int layanan){
		int Uang;
		cout<<"Masukkan saldo uang anda : \n";
		cin>>saldo;
		if(saldo>=harga){
			Uang=saldo-harga;
			cout<<endl;
			cout<<"Transaksi Berhasil :D\n";
			cout<<"Sisa Saldo : "<<Uang<<endl;
			cout<<"-----------------------------------------\n";
			cout<<"\tTERIMA KASIH\t";
			cin.ignore(1,'\n');
		}else{
			cout<<"SALDO TIDAK CUKUP!";
		}
		
	}
	
	int app1(int harga){
		int Uang;
		cout<<">>PEMBAYARAN<<\n";
		cout<<"Masukkan saldo uang anda : \n";
		cin>>saldo;
		cin.ignore(1,'\n');
		if(saldo>=harga){
			Uang=saldo-harga;
			cout<<endl;
			cout<<"TRANSAKSI BERHASIL :D\n";
			cout<<"Sisa Saldo : "<<Uang<<endl;
			cout<<"=======================\n";
			cout<<"     TERIMA KASIH\n";
			cout<<"=======================\n";
		}else{
			n=n+1;
			cout<<"SALDO TIDAK CUKUP! >:(";
		}
	}
