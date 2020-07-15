#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.141592654

int main(){
	float r;
	cout<< "Nhap ban kinh:";
	cin >> r;
	cout<< "Chu vi la:" << (float) 2*r*PI;
	cout<< "\nDien tich la:" << (float) pow(r,2)*PI;
	return 0;
}

