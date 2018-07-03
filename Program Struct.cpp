#include <iostream>
#include <conio.h>
using namespace std;

struct mahasiswa
{
	int nim;
	char nama[20];
	int umur;
	float ipk;
} mhs;

void tampil()
{
	cout<<"\n----Output----\n";
	cout<<"NIM  = "<<mhs.nim<<endl
	    <<"Nama = "<<mhs.nama<<endl
	    <<"Umur = "<<mhs.umur<<endl
	    <<"IPK  = "<<mhs.ipk;
}

void input()
{
	cout<<"\n----Input----\n";
	cout<<"Masukan NIM = ";
	cin>>mhs.nim;
	cout<<"Masukan Nama = ";
	cin>>mhs.nama;
	cout<<"Masukan Umur = ";
	cin>>mhs.umur;
	cout<<"Masukan IPK = ";
	cin>>mhs.ipk;
}

int main(){
	cout<<"Selamat Datang\n";
	input();
	
	tampil();
}

