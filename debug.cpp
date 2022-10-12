// NAMA 	: Ferina Putri Maharani Amalo
// NRP		: 5008221120
// Jurusan	: Teknik Kimia
// coba

#include <iostream>
#include <cmath>
using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 // sin cos sudut elevasi tembakan 45 derajat

int main(){
	float Vo, v, vtan;
	int Xmax;
	
	cout<<"Masukkan v = ";
	cin>>v;
	
	if(v<=11){
		Vo=v-1;
	} else if (v<=13){
		Vo=0;
	}else if (v<=23){
		Vo=v-3;
	} else if (v<=26){
		Vo=0;
	}else if (v<=30){
		Vo=v-5;
	}
	
	Xmax = Vo * Vo * 2 * sin(SUDUT * 3.14 / 180) * cos(SUDUT * 3.14 / 180) / GRAVITASI;
	if(Vo<=10){
		vtan=Vo+1;
	} else if (Vo<=20){
		vtan=Vo+3;
	} else if (Vo<25){
		vtan=Vo+5;
	} else if (Vo=25){
		vtan=Vo+4.8998;
	}
	cout << Xmax << " " << vtan << endl;
	return 0;
}

