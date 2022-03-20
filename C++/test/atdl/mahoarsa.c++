#include<bits/stdc++.h>
using namespace std;

int p,q,e,m,n,modulo,khoa,s,m1,m2;

/* p la so nguyen to thu nhat
q la so nguyen to thu hai
e la khoa cong khai
m la ban ki so
khoa là khoa bi mat
s la ban ki dien tu */ 

void nhap(){
	cout<<"Nhap p : ";cin>>p;
	cout<<"Nhap q : ";cin>>q;
	cout<<"Nhap khoa cong khai e : ";cin>>e;
	cout<<"Nhap ban tin M : ";cin>>m;
}
void xuli(){
	n=p*q;
	modulo=(p-1)*(q-1);
	for(int d=0;d<100;d++){
		if((e*d)%modulo==1){
			khoa=d;
			break;
		}
	}
	int sig =pow(m,khoa);
	s=sig % n;	
	m1=pow(s,e);
	m2=m1%n;
}
void in(){
	cout<<"\n\n\nKhoa bi mat d = "<<khoa<<endl;
	cout<<"Ban chu ki S = "<<s<<endl;

	if(m==m2){
		cout<<"ver(M,S) = True because ";
		cout<<"ki so = "<<m;
		cout<<" va ki dien tu = "<<m2<<endl;
	}else{
		cout<<" ver(M,S) = false !! vi khong trung chu ki "<<endl;
		cout<<"ki so = "<<m<<endl;
		cout<<"ki dien tu = "<<m2<<endl;
	}
}
int main(){
	nhap();
	xuli();
	in();
}




//by van