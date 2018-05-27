#include <iostream>
#include <conio.h>

using namespace std;

//variabel global
int dskn,paket,harga,x,akhir,jmlh,uang,kembali;
char pilih;

//fungsi untuk mencetak daftar jenis paket
void cetak_menu(){
	char a[4]={"abc"};
	for (int i=0;i<a[i];i+=4){
		cout<<"1. Low Budget\n2. Medium\n3. Sultan";
	}
	cout<<endl;
	cout<<"masukkan pilihan paket anda: ";
}

//fungsi kembalian uang pembeli
void kembalian(){
	cout<<"\nMasukkan jumlah uang agan/sis= ";cin>>uang;
	kembali=uang-akhir;
	if(kembali<0){
		kembali=akhir-uang;
		cout<<"\nUang Anda Kurang= "<<kembali;
		cout<<"\nBisa Dicicil kok cyin ^__^";
	}
	else{
		cout<<"\nKembalian anda= "<<kembali;
		cout<<"\nTerimakasih :*";
	}
}

//fungsi logika diskon
void diskon (){
	cout<<"Silahkan masukkan jumlah yang anda inginkan : "; cin>>x;
	jmlh=x*harga;
	
	if(x>3)
	{
	dskn=harga*35/100;
	akhir=jmlh-dskn;
	cout<<"Anda mendapatkan diskon sebesar 35%"<<endl;
	cout<<"Total Belanja anda adalah : "<<akhir;}
	else
	{
	akhir=jmlh;
	cout<<akhir;
	}
	kembalian();
}

//fungsi menu utama
void menu(){
	
	cout<<"========================"<<endl;
	cout<<"   INFORMATICSC COMP"<<endl;
	cout<<"========================"<<endl;
	cout<<"Jalan Ringroad Utara, Jombor, Sleman 55285"<<endl;
	cout<<"Menyediakan berbagai PC untuk kebutuhan anda!"<<endl;
	cout<<" "<<endl;
	cout<<"Berikut adalah daftar paket PC yang kami jual : "<<endl;

	cetak_menu();
	cin>>paket;

	if (paket==1){
		harga=2500000;
		cout<<"1. Low budget :\n";
			cout<<" "<<endl;
			cout<<"Spesifikasi : "<<endl;
			cout<<"core i3 4005,2GB RAM,HDD 320GB,AMD FX 1080\n";
			cout<<"Harga : Rp 2.500.000\n";
			cout<<endl;
			cout<<"Pilih? (y/t)\n";
			cin>>pilih;
			if (pilih=='y'){diskon();}
			else {clrscr();menu();cin>>paket;}
	}

	else if (paket==2){
		cout<<"2. Medium : \n";
			cout<<" "<<endl;
			cout<<"Spesifikasi : "<<endl;
			cout<<"core i5,4GB RAM,HDD 500GB,NVIDIA 950\n";
			cout<<"Harga : Rp 6.000.000\n";
			cout<<" "<<endl;
			cout<<"Pilih?? (y/t)\n";
			cin>>pilih;
			if (pilih=='y'){diskon();}
			else {clrscr();menu();cin>>paket;}
	}

	else if (paket==3){
	cout<<"3. Sultan :\n ";
				cout<<" "<<endl;
				cout<<"Spesifikasi : "<<endl;
				cout<<"core i7 gen 7th,8GB RAM,SSD 1TB,NVIDIA GEFORCE 1080\n";
				cout<<"Harga : 10.000.000\n";
				cout<<" "<<endl;
				cout<<"Pilih ? (y/t)\n";
				cin>>pilih;
				if (pilih=='y'){diskon();}
				else {clrscr();menu();cin>>paket;}
	}

	else{
		cout<<"Pilihan yang anda masukkan salah..\n";
		cout<<"Berikut adalah daftar paket PC yang kami jual : "<<endl;
		clrscr();menu();cin>>paket;
	}

}

//main program~
main(){
	menu();
	
}
