#include<iostream.h>

struct NGAY
	{
		int ngay,thang,nam;
	};
class KH
{
	private: 
	char ht[30];
	NGAY ns;
	char cmt[10];
	char hk[50];
	public:
	KH()
	{
		strcpy(ht,"");
		ns.ngay=0;
		ns.thang=0;
		ns.nam=0;
		strcpy(cmt,"");
		strcpy(hk,"");
	}
	KH(char ht1[30],int ng, int th, int n, char cmt1[10], char hk1[50])
	{
	strcpy(ht,ht1);
	ns.ngay=ng;
	ns.thang=th; 
	ns.nam=n;
	strcpy(cmt,cmt1);
	strcpy(hk,hk1);	
	}
	~KH()
	{
		
	}
	void xuat()
	{
		cout<<"Thong tin khach hang vua tao la:"<<endl;
		cout<<"Name:"<<ht<<endl<<"Date:"<<ns.ngay<<"/"<<ns.thang<<"/"<<ns.nam<<endl<<"So cmt:"<<cmt<<endl<<"Ho khau:"<<hk;
	}
} ;
int main()
{
	KH kh1("Pham van Tai",28,02,2001,"123456789","Ninh Binh");
	kh1.xuat();
	cout<<endl;
	return 0;
}