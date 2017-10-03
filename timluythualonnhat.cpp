#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;
void main()
{
	int n,a[100], x,vitri,dodai;
	cout << "nhap do dai cua day:  ";
	cin >> n;
	cout << "\n Nhap day so\n";
	for (int i = 0; i < n; i++) {
		cout << "\n Nhap so thu " << i + 1 << "  :";
		cin >> a[i];
	}
	int max = a[0]; x = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j <n; j++) {
			x = x + a[j];
			if (x > max) {
				max = x;
				vitri = i;
				dodai = j;
			}
		}
		x = 0;
	}
	cout << "\nKET QUA:\n";
	cout << "Day con co trong so lon nhat la: \n";
	for (int i = vitri; i < (vitri + dodai); i++) {
		cout << "  " << a[i] << " ";
		}
	cout << "\n Trong so cua day la:  " << max;
	cout << "\n Vi tri cua day la:  " << vitri+1;
	cout << "\n Do dai cua day con la :  " << dodai;
	cin >> x;
}

