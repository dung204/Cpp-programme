#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a, b, c;
	cout<< "Nhap a, b, c:";
	cin >> a;
	cin >> b;
	cin >> c;
	int delta = pow(b,2)-4*a*c;
	if(delta < 0){
		cout<< "Phuong trinh vo nghiem";
	}
	else if(delta == 0){
		cout<< "Phuong trinh co nghiem duy nhatL x = " << (float)-b/(2*a);
	}
	else if(delta > 0){
		cout<< "Phuong trinh co 2 nghiem phan biet: x1 = " << (float) (-b+sqrt(delta))/(2*a) << ", x2 = " << (float) (-b-sqrt(delta))/(2*a);
	}
	return 0;
}

