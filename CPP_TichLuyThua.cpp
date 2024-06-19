#include <iostream>
using namespace std;

double tichluythua(double a, double b);
double tichluythua(double a, double b) {
	double giatri = 1;
	for (int i = 0; i < b; i++) {
		giatri *= a;
	}
	return giatri;
}
int main() {
	// Bai 1
	double so, somu, luythua = 1;
	cout << "Nhap so: "; cin >> so;
	cout << "Nhap so mu: "; cin >> somu;
	cout << "Luy thua = " << tichluythua(so, somu) << endl;
	return 0;
}