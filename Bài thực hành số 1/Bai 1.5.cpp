#include<iostream>
using namespace std;

int main(){
	int a, b, c, d, e;
	int max = a;
	cout<< "Nhap a, b, c, d, e:";
	cin >> a; cin >> b; cin >> c; cin >> d; cin >> e;
	if(a == b && b == c && c == d && d == e){
		cout<< "Khong co gia tri lon nhat";
		return 0;
	}
	else{
		if(b > max) max = b;
		if(c > max) max = c;
		if(d > max) max = d;
		if(e > max) max = e;
	}
	cout<< "Gia tri lon nhat la: " << max;
	return 0;
}

