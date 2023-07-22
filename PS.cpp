#include<iostream>
#include<math.h>
using namespace std;
class PS
{
private:
	int tuso, mauso;
public:
	PS(int t=0, int m=0)
	{
		tuso = t;
		mauso = m;
	}
	~PS()
	{

	}
	void xuat()
	{
		cout << tuso << "/" << mauso << endl;
	}
	void rutgon();	
	int ucln(int t, int m);
	PS cong(PS p1);
	PS tru(PS p1);
	float GetTuSo()
	{
	return tuso;	
	} 
	float GetMauSo()
	{
		return mauso; 
	} 
};
int PS::ucln(int t, int m)
{
	t = abs(t); m = abs(m);
	if (t * m == 0) return 1;
	while (t != m)
		if (t > m) t -= m;
		else m -= t;
	return t;
}

void PS::rutgon()
{
	int u;
	u = ucln(tuso,mauso);
	tuso = tuso / u;
	mauso = mauso / u;
}
PS PS::cong(PS p1)
{
	PS kq;
	kq.tuso = tuso * p1.mauso + mauso * p1.tuso;
	kq.mauso = mauso * p1.mauso;
	kq.rutgon();
	return kq;
}
PS PS::tru(PS p1) 
{
	PS kq;
	kq.tuso = tuso * p1.mauso - mauso * p1.tuso;
	kq.mauso = mauso * p1.mauso;
	kq.rutgon();
	return kq;
}
int main()                                                                         
{
	PS ps1(4,8);
	PS ps2(6,9);
	cout << "Hai phan so vua tao la:" << endl;
	cout << "Phan so 1->" << endl;
	ps1.xuat();
	cout << "Phan so 2->" << endl;
	ps2.xuat();
	PS tong2;
	{
	tong2 = ps1.cong(ps2);
	cout << "Tong ps1+ps2 = ";
	tong2.xuat();
	}
	PS hieu2; 
	{
	hieu2 = ps1.tru(ps2);
	cout << "Hieu ps1-ps2= ";
	hieu2.xuat();
	}
	

}