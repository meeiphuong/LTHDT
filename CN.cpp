#include<iostream.h>
class CN
{
private:
	char ht[30];
	int t;
	char qq[30];
	float bl;
public:
	CN()
	{

	}
	CN(char ht1[30], int t1, char qq1[30], float bl1)
	{
		strcpy(ht, ht1);
		t = t1;
		strcpy(qq, qq1);
		bl = bl1;
	}
	void nhap()
	{
		cout << "Nhap thong tin cong nhan:"<<endl;
		cout << "Nhap ho ten:";
		fflush(stdin);
		cin.getline(ht,30);
		cout << "Nhap tuoi :";
		cin >> t;
		cout << "Nhap que quan:";
			fflush(stdin);
		cin.getline(qq,30);
		cout << "Nhap bac luong:";
		cin>> bl;
	}
	void xuat()
	{
		cout << "Thong tin cua cong nhan la:"<<endl;
		cout << "Name:" << ht << endl << "Age:" << t << endl << "Adress:" << qq << endl << "Bac Luong :" << bl <<"VND"<< endl;
		cout<<"Tien luong cong nhan la : ";
	}
	float tinhLuong()
	{
		float luong;
		luong = bl*2500;
		cout<<(luong+((luong*20)/100));
	}
};
int main()
{
	CN cn;
	cn.nhap();
	cn.xuat();
	cn.tinhLuong();
	cout<<endl;
	return 0;
}