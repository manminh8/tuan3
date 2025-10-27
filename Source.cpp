#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int main()
{
	int a, b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
<<<<<<< HEAD
	cout << "Hieu a - b = " << hieu(a,b);
=======
	cout << "Tich la: "; 
	cout << tong(a,b);
	cout << tich(a, b)
>>>>>>> b3d631bf861a1cf3f044ed6baa3688f307d95906
	system("pause");
	return 0;
}

<<<<<<< HEAD
int hieu(int a, int b){
	return a - b;
}
=======
int tong(int a, int b){
	return a+b;
}

int tich(int a, int b) {
	return a * b;
}
>>>>>>> b3d631bf861a1cf3f044ed6baa3688f307d95906
