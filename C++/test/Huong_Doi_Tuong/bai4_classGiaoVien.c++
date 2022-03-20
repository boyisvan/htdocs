#include<bits/stdc++.h>

using namespace std;

class nguoi{
	public:
		char HT[50], NS[12];
	public:
		nguoi(){};
		nguoi(char hoten[50], char namsinh[12]){
			strcpy(this->HT,hoten);
			strcpy(this->NS,namsinh);	
		};
		void nhap();
		void in();
		~nguoi(){};
};
class monhoc{
	public:
		char TMH[20];
		int ST;
	public:
		monhoc(){};
		monhoc(char TMH[20], int ST){
			strcpy(this->TMH,TMH);
			this->ST=ST;	
		};
		void nhap();
		void in();
		~monhoc(){};
};
class giaovien : public nguoi{
	public:
		char MCT[20];
		monhoc m;
	public:
		giaovien(){};
		giaovien(char MCT[20], monhoc m){
			strcpy(this->MCT,MCT);
			this->m=m;
		};
		void nhap();
		void in();
		~giaovien(){};
};
void nguoi::nhap(){
	fflush(stdin);
	cout<<"Ho ten :";cin.getline(HT,50);
	cout<<"Ngay Sinh :";cin.getline(NS,12);
}
void nguoi::in(){
	cout<< HT <<"\t"<< NS <<"\t";
}
void monhoc::nhap(){
	cout<<"Ten mon hoc :";cin.getline(TMH,20);
	cout<<"So tiet :";cin>>ST;
}
void monhoc::in(){
	cout<< TMH <<"\t"<< ST <<"\t";
}
void giaovien::nhap(){
	nguoi::nhap();
	cout<<"Mon cong tac :";cin.getline(MCT,20);
	m.nhap();
//	nguoi::in();
}
void giaovien::in(){
	cout<<HT <<"\t"<<NS<<"\t"<< MCT <<"\t";
	m.in();
}

int main(){
	int n;char montimkiem[20];
	cout<<"nhap so luong giao vien  : ";
	cin>>n;
	giaovien g[50];
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin giao vien thu "<<i+1<<endl;
		g[i].nhap();
	}
	cout<<"\n\n\n\n";
	cout<<"---------------------------------------------------------------------"<<endl;
	cout<<"Ten"<<"\t"<<"Ngay sinh"<<"\t"<<"Mon ct"<<"\t"<<"Mon"<<"\t"<<"So tiet"<<endl;
	cout<<"---------------------------------------------------------------------"<<endl;
	for(int i=0;i<n;i++){
		g[i].in();
		cout<<endl;
	}
	cout<<"\n\n\n\n\n";
	cout<<"Nhap mon can tim kiem : ";
	fflush(stdin);
	gets(montimkiem);
    // strcmp(g[i].MCT, montimkiem);
	for(int i=0;i<n;i++){
		if(strcmp(g[i].MCT, montimkiem)==0){
			g[i].in();
		}
	}
}