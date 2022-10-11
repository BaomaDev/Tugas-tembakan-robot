// NAMA		: Jesse Robinson Junior Simanjuntak
// NRP		: 5025221024
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 90 //sudut elevasi tembakan


//int mencari_V0(int variabel1, int variabel2)
//{
	/* Tulis fungsi mencari v0 kalian disini */
	
  //	return 
//}

//int speed_dgn_loss(tipe_data variabel)
//{
	/* tulis fungsi hitung_loss kalian disini */
  //  return
//}

using namespace std;

int main() {
    int v0,x,loss;
    float vtan;

    cin >> v0;
    if (v0 >= 1 && v0 <= 10) {
         v0 = v0-1;
        loss = 1;
    } else if (v0 >= 11 && v0 <=20) {
        v0 = v0-3;
        loss = 3;
    } else {
        v0 = v0-5;
        loss = 5;
    }

    x = pow(v0,2)*sin(SUDUT*3.1415/180)/GRAVITASI;
    vtan = sqrt(x*10/sin(SUDUT*3.1415/180))+loss;
    cout<<x<<" "<<vtan<<endl;
    return 0;
}