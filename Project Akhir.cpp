#include<iostream>
#include<stdlib.h>
#include <time.h>
#include <iomanip>
#include <cstdlib>
#include <cstring>
using namespace std;

string kata;
void sleep(int minisecon), keamanan(int pilih), Ubah_Teks(int pilih);
void proses1(), proses2(), proses3();
int  key[100];
char c;

int main() {
	cout<<"<<==== SELAMAT DATANG ====>>";
	int pilih;
	do {
		cout<<"\nMENU:\n1. Ubah Plaintext Menjadi Ciphertext\n2. Ubah Ciphertext Menjadi Plaintext\n3. Keluar\nPilih>>";
		cin>>pilih;
		switch(pilih) {
			case 1: {
				Ubah_Teks(pilih);
				break;
			}
			case 2: {
				Ubah_Teks(pilih);
				break;
			}
		}
	} while(pilih != 3);
	system("cls");
	cout<<"Simpan & Ingat Keamanan Sandi Anda Baik-Baik :)";
	return 0;
}

void Ubah_Teks(int pilih) {
	cout<<"Masukkan Sandi: ";
	getline(cin >> ws, kata);
	for(int i=0; i<4; i++) {
		cout<<"Masukkan Sandi Ke-"<<i+1<<": ";
		cin>>key[i];
	}
	int x = kata.length();
	if(pilih == 1) {
		system("cls");
		cout<<"Loading";
		int x = kata.length();
		for(int i=0; i<5; i++) {
			sleep(300);
			cout<<".";
		}
		system("cls");
		cout<<"Chipertext Anda: ";
		for(int i=0; i<x; i++) {
			sleep(100);
			cout<<"#";
		}
	} else if(pilih == 2) {
		system("cls");
		cout<<"Loading";
		int x = kata.length();
		for(int i=0; i<5; i++) {
			sleep(300);
			cout<<".";
		}
		system("cls");
		cout<<"Plaintext Anda: ";
		for(int i=0; i<x; i++) {
			sleep(100);
			cout<<"#";
		}
	}
	for(int i=0; i<4; i++) {
		if(pilih == 1) {
			keamanan(pilih);
		} else if(pilih == 2) {
			keamanan(pilih);
		}
	}
}

void keamanan(int pilih) {
	int x = kata.length();
	if(x%2 == 0) {
		proses2();
		proses3();
		proses1();
	} else if(x%2 != 0) {
		proses2();
		proses1();
		proses3();
	}
	if(pilih == 1) {
		int x = kata.length();
		system("cls");
		cout<<"Chipertext Anda: ";
		for(int i=0; i<x; i++) {
			int y;
			c = kata[i];
			y = c+key[0];
			if(c >= 32 && c <=254) {
				if(y < 32) {
					y = y+222;
				} else if(y > 254) {
					y = y-222;
				}
			}
			c = y;
			cout<<c;
		}
		cout<<endl<<endl;
	} else if(pilih == 2) {
		int x = kata.length();
		system("cls");
		cout<<"Plaintext Anda: ";
		for(int i=0; i<x; i++) {
			int y;
			c = kata[i];
			y = c-key[0];
			if(c >= 32 && c <=254) {
				if(y < 32) {
					y = y+222;
				} else if(y > 254) {
					y = y-222;
				}
			}
			c = y;
			cout<<c;
		}
		cout<<endl<<endl;
	}
}

void proses1() {
	int sum = key[0]+key[1];
	int sum2 = key[2]+key[3];
	int sum3;
	if(sum>sum2) {
		if(sum%sum2  != 0) {
			sum3 = sum%sum2;
		} else if(sum%sum2 == 0) {
			sum3 = sum/sum2;
		}
	} else if(sum<sum2) {
		if(sum2%sum  != 0) {
			sum3 = sum2%sum;
		} else if(sum2%sum == 0) {
			sum3 = sum2/sum;
		}
	}
	key[0] = sum+sum2+sum3;
}

void proses2() {
	int fix, sum, sum2, sum3;
	if(key[0] || key[1] || key[2] == 0 ) {
		sum = key[0]*key[1]*key[2];
		sum2 = key[0]+key[1]+key[2];
	}
	sum3 = sum/sum2;
	if(sum3 >= 10) {
		fix = sum3/10;
	} else {
		fix = sum3;
	}
	key[0] = (sum2+sum3)/fix;
}

void proses3() {
	int x = kata.length();
	if(x > 100) {
		x = (x%100)+1;
	} else if(x > 10) {
		x = (x%10)+1;
	} else if(x > 1) {
		x = x/2;
	} else {
		x = x;
	}
	int sum = 1;
	for(int i=1; i<=x; i++) {
		sum = sum * i;
	}
	int total = sum;
	key[0] = (total%2)+1;
}

void sleep(int minisecon) {
	clock_t x;
	x = clock() + minisecon * CLOCKS_PER_SEC/1000;
	while (clock() < x) {
	}
}