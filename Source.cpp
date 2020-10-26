#include <iostream>
using namespace std;

void pheptoan(){
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
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
		if (b==0)
			cout<<"Ko chia cho 0 dc"
		else cout<<"a/b ="<<a/b;
		break;
		
		
	}
}

void main()
{
	int chon;
	cout<"1.PHEP TOAN";
	cin >> chon;
	
	switch (chon)
	{
	
	case 1:
		pheptinh()
		break;
	
	default:
		cout << "Chon sai phep toan";
		break;
	
	
}