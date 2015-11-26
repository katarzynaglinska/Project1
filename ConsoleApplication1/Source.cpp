#include <iostream>
#include <fstream>
#include <cstdio>
#include <conio.h>
#include<cstring>
#include <cmath>

using namespace std;


void dodawanie(int klucz1[],int kopia1_c2[]) {
	int cos[8] = { 0 };
	int r = 0;
	for (int i = 7;i >=0;i--) {
		//cos[i] =1;//(klucz1[i] + kopia1_c2[i]);   //+r) % 2);
		//if (((klucz1[i] + kopia1_c2[i] + r) % 2) != 0)r = 1;
		cout << cos[i] << endl;
	}

}


int main() {
	
	int P10[] = { 2,4,1,6,3,9,0,8,7,5 };
	int SL1[] = { 1,2,3,4,0 };
	int P10w8[] = { 5,2,6,3,7,4,9,8 };
	int SL2[] = { 2,3,4,0,1 };
	int cyfra;
	int klucz[10] = { 0 };
	int kopia_klucz[10] = { 0 };
	int k0[5] = { 0 };
	int k1[5] = { 0 };
	//int klucz1[8] = { 0 };
	int klucz2[8] = { 0 };
	
	
	/*cout << "Podaj klucz" << endl;
	for (int i = 0;i < 10;i++) {
		cin >> cyfra;
		klucz[i] = cyfra;
		
	}
	for (int i = 0;i < 10;i++) {
		cout << klucz[i];
	}
	for (int i = 0;i < 10;i++) {
		kopia_klucz[i] = klucz[i];
	}
	cout << endl;
	for (int i = 0;i < 10;i++) {
		klucz[i]= kopia_klucz[P10[i]];
		cout << klucz[i];
	}
	cout << endl;

	for (int i = 0;i < 5;i++) {
		k0[i] = klucz[i];
		k1[i] = klucz[i + 5];
	}
	for (int i = 0;i < 5;i++) {
		cout << k0[i];
	}cout << endl;
	for (int i = 0;i < 5;i++) {
		cout << k1[i];
	}cout << endl;

	int kopia_k0[5];
	int kopia_k1[5];
	for (int i = 0;i < 5;i++) {
		kopia_k0[i]=k0[i] ;
		kopia_k1[i]=k1[i];
	}
	
	for (int i = 0;i < 5;i++) {
		k0[i] = kopia_k0[SL1[i]];
		k1[i] = kopia_k1[SL1[i]];
	}

	for (int i = 0;i < 5;i++) {
		cout << k0[i];
	}cout << endl;
	for (int i = 0;i < 5;i++) {
		cout << k1[i];
	}cout << endl;

	for (int i = 0;i < 5;i++) {
		klucz[i] = k0[i];
		klucz[i + 5] = k1[i];
	}
	for (int i = 0;i < 10;i++) {
		cout << klucz[i];
	}cout << endl;

	for (int i = 0;i < 8;i++) {
		klucz1[i] = klucz[P10w8[i]];
		cout << klucz1[i];
	}cout << endl;

	for (int i = 0; i < 5;i++) {
		kopia_k0[i]=k0[SL2[i]]  ;
		kopia_k1[i] = k1[SL2[i]];
		klucz[i] = kopia_k0[i];
		klucz[i + 5] = kopia_k1[i];
	}
	
	for (int i = 0; i <8;i++) {
		klucz2[i] = klucz[P10w8[i]];
		cout << klucz2[i];
	}cout << endl;
	
	//zasadnicza procedura szyfrujaca

	int t[] = { 1,0,1,1,1,0,0,0 };
	int c1[4] = { 0 };
	int c2[4] = { 0 };
	int kopia1_c2[8] = { 0 };
	int kopia2_c2[4] = { 0 };
	int P4w8[] = { 3,0,1,2,1,2,3,0 };

	for (int i = 0;i < 4;i++) {
		c1[i] = t[i];
		c2[i] = t[i + 4];
		kopia1_c2[i] = c2[i];
		kopia2_c2[i] = c2[i];
		//cout << kopia2_c2[i];
		//cout << c2[i];
	}cout << endl;

	for (int i = 0;i < 8;i++) {
		kopia1_c2[i]= c2[P4w8[i]];
		cout << kopia1_c2[i];
	}cout << endl;*/

	int kopia1_c2[] = { 0,1,0,0,0,0,0,1 };
	int klucz1[] =    { 1,0,1,0,0,0,1,0 };

	//dodawanie(klucz1, kopia1_c2);

	cout << "Hello";




	system("PAUSE");
	return 0;
}

