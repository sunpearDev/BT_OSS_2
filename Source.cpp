#include <iostream>
using namespace std;

void pheptoan(){
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	char ch;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	
	switch (phepToan)
	{
	case '+':
		cout << "Tong la" << a+b << endl;
		break;
	case '-':
		cout << "Tong la" << a-b << endl;
		break;
	case '*':
		cout << "Tong la" << a*b << endl;
		break;
	case '/':
		if (b == 0)
			cout << "Ko chia cho 0 dc";
		else cout<<"a/b ="<<a/b;
		break;
		
		
	}
	
}

void tinhChuViDienTich(){
	int c, d, r;
	int chon;

	cout << "-----------------------------------------------";
	cout << "1. Hinh vuong";
	cout << "2. Hinh chu nhat";
	cout << "3. Hinh tron";
	cout << "-----------------------------------------------";

	cout << "Tinh CV va DT hinh gi? ";
	cin >> chon;
	
	switch (chon)
	{
	case 1:
		cout << "Chu vi va Dien Tich hinh Vuong la : " << endl;

		cout << "Nhap canh : ";
		cin >> c ;

		tinh_CV_DT_HV(c);
		break;
	case 2:
		cout << "Chu vi va Dien Tich hinh chu nhat la : " << endl;

		cout << "Nhap chieu dai : ";
		cin >> d ;
		cout << "Nhap chieu rong : ";
		cin >> r ;

		tinh_CV_DT_HCN(d,r);
		break;
	case 3:
		cout << "Chu vi va Dien Tich hinh tron la : " << endl;

		cout << "Nhap canh : ";
		cin >> c ;

		tinh_CV_DT_HT(c);
		break;
		
	}

		
}

void tinh_CV_DT_HV(int c){
	cout <<"Chu vi hinh vuong la : " << c*4 << endl;
	cout <<"Dien tich hinh vuong la : " << c*c << endl;
}

void tinh_CV_DT_HCN(int d, int r){
	cout <<"Chu vi hinh chi nhat la : " << (d+r)*2 << endl;
	cout <<"Dien tich hinh chu nhat la : " << d*r << endl;
}
void tinh_CV_DT_HT(int c){
	cout <<"Chu vi hinh tron la : " << (float)(2*3.14*c) << endl;
	cout <<"Dien tich hinh tron la : " << (float)(3.14*c*c) << endl;
}
void randomCong(){
int a=1 + rand() % 100;
int b=1 + rand() % 100;
int c;
cout <<a<<" + "<<b<<" : ";
cin>>c;
if(c==a+b){
	cout <<"Dung";
}
else{
cout <<"Sai";
}
}
void random_Tru() {
	int a = 1 + rand() % 100;
	int b = 1 + rand() % 100;
	int c;
	cout << a << " - " << b << " : ";
	cin >> c;
	if (c == a - b) {
		cout << "Dung";
	}
	else {
		cout << "Sai";
	}
}

void main()
{
	int chon;

	cout<<"1.PHEP TOAN";
	cout<<"2.TINH CV DT";
	cout<<"3.TINH RANDOMCONG";
	cout << "4. TINH RANDOM TRU";
	cin >> chon;
	
	switch (chon)
	{
	
	case 1:
		pheptoan();
		break;
	case 2:
		tinhChuViDienTich();
		break;
	case 3:
		randomCong();
		break;
	case 4:
		random_Tru();
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	
	
}