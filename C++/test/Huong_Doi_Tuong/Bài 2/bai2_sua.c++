#include<bits/stdc++.h>
#include <fstream>
using namespace std;

class sach{
	public:
		char tensach[50];
		int tongsosach,sachchomuon,sachconlai;
	public:
		sach(){};
		sach(char ts[50] ,int tss ,int scm,int scl){
			strcpy(this->tensach,ts);
			this->tongsosach=tss;
			this->sachchomuon=scm;
			this->sachconlai=scl;
		};
		void nhap(){
			cin.ignore();

			cout<<"Nhap ten sach : ";
			cin.getline(tensach,50);
			cout<<"Nhap tong so sach : ";
			cin>>tongsosach;
			cout<<"Nhap so sach da cho muon : ";
			cin>>sachchomuon;
			sachconlai=tongsosach-sachchomuon;
		}
};
int n=0,m=0;
sach a[50];
vector<sach>tensach;

//lay du lieu dau vao 
void nhapthongtin(){
	ifstream file;
	file.open("dauvao.txt");
	file>>n;
	for(int i=1;i<=n;i++){
		cout<<"Nhap thong tin cua sach thu : "<<i<<endl;
		a[i].nhap();
		cout<<endl;
	}
	file.close();
}

// xuat du lieu dau ra 
void xuatthongtin(){
	ofstream outfile;
	char filedaura[50];cin.ignore();
	cout<<"Nhap ten file dau ra :";
	cin.getline(filedaura,50);
	outfile.open(filedaura);
	cout<<"Da luu thong tin vao file daura.txt . hay mo file de xem chi tiet !"<<endl;
	outfile<<"\nTensach\tTong\tDa muon\tCon lai"<<endl;
	outfile<<"----------------------------------"<<endl;
	for(int i=1;i<=n;i++){
		outfile << a[i].tensach<<"\t"<<a[i].tongsosach<<"\t\t"<<a[i].sachchomuon<<"\t\t"<<a[i].sachconlai << endl;
	}
	outfile.close(); 
}

//code phan sap xep ---------------------------
bool cmp(sach a,sach b ){
	return a.sachconlai > b.sachconlai;
}
void sapxeptheososachconlai(){
	sort(a+1,a+n+1,cmp);
}
//code phan sach con lai nhieu hon 5 
void sachconlai(){
	ofstream filenhan;
	cout<<"Nhap tieu chi sach con lai can tim kiem : ";
	cin>>m;
	filenhan.open("ttsach.txt");
	filenhan<<"Thong tin nhung loai sach con lai trong thu vien tren "<<m<<" quyen !\n"<<endl;
	filenhan<<"\nTensach\tTong\tDa muon\tCon lai"<<endl;
	filenhan<<"----------------------------------"<<endl;
	for(int i=1;i<=n;i++){
		if(a[i].sachconlai>=m){
			filenhan << a[i].tensach<<"\t"<<a[i].tongsosach<<"\t\t"<<a[i].sachchomuon<<"\t\t"<<a[i].sachconlai << endl;
		}
	}
	filenhan.close();
}

int main(){
	nhapthongtin();
	xuatthongtin();
	cout<<"\nDa sap xep xong , hay nhap ten file nhan du lieu sap xep !";
	sapxeptheososachconlai();
	xuatthongtin();
	sachconlai();
	cout<<"Da luu thong tin sach lon hon "<<m<<" quyen vao file ttsach.txt , hay mo file de xem chi tiet";
}











