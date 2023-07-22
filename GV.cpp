#include<iostream.h>
class GV
{
private:
	char ht[30];
	int t;
	char bc[15];
	char cn[20];
	float bl;
public:
	GV()
	{

	}
	GV(char ht1[30], int t1, char bc1[15], char cn1[20], float bl1)
	{
		strcpy(ht, ht1);
		t = t1;
		strcpy(bc, bc1);
		strcpy(cn,cn1);
		bl = bl1;
	}
	void nhap()
	{
		cout << "Nhap thong tin giao vien:"<<endl;
		cout << "Nhap ho ten:";
		fflush(stdin);
		cin.getline(ht,30);
		cout << "Nhap tuoi :";
		cin >> t;
		cout << "Nhap bang cap:";
		fflush(stdin);
		cin.getline(bc,15);
		cout << "Nhap chuyen nganh:";
		fflush(stdin);
		cin.getline(cn,20);
		cout << "Nhap bac luong:";
		cin>> bl;
	}
	void xuat()
	{
		cout << "Thong tin cua giao vien la:"<<endl;
		cout << "Name:" << ht << endl << "Age:" << t << endl << "Bang cap:" << bc << endl <<"Chuyen nganh:"<<cn<<endl<< "Bac Luong :" << bl <<"VND"<< endl;
		cout<<"Tien luong giao vien la : ";
	}
	float tinhLuong()
	{
		float luong;
		luong = bl*2500;
		cout<<luong; 
	}
};
int main()
{
	GV gv;
	gv.nhap();
	gv.xuat();
	gv.tinhLuong();
	cout<<endl;
	return 0;
}