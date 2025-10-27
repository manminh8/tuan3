#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
void xuatC();

int main()
{
	int a, b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Hieu a - b = " << hieu(a,b);
	cout << "Tich la: "; 
	cout << tich(a, b);
	
	xuatC();
	
	system("pause");
	return 0;
}


int hieu(int a, int b){
	return a - b;
}

int tong(int a, int b){
	return a+b;
}

int tich(int a, int b) {
	return a * b;
}
void xuatC(){
	cout<<"C";
}

