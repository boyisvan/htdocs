#include<bits/stdc++.h>
#include <fstream>

using namespace std;

class CSach{
	public:
		string TenSach;
		int TongSoSach;
		int SoSachMuon;
		int SoSachConLai;
	public:
		void In();
		void docFile(ifstream &);
		void ghiFile(ofstream &);

};

void CSach::In(){
	SoSachConLai=TongSoSach-SoSachMuon;
	cout<< left <<setw(20)<< TenSach <<setw(15)<< TongSoSach <<setw(15)<<SoSachMuon<<setw(15)<<SoSachConLai<<endl;
}

void CSach::docFile(ifstream &filein){
	getline(filein, TenSach, ' ');
//	filein.seekg(0,ios::cur);
	filein >> TongSoSach;
	filein >> SoSachMuon;
}
void CSach::ghiFile(ofstream &ofs){
	SoSachConLai=TongSoSach-SoSachMuon;
	ofs<< left <<setw(20)<< TenSach <<setw(15)<< TongSoSach <<setw(15)<<SoSachMuon<<setw(15)<<SoSachConLai<<endl; 
}
bool cmp(CSach *a,CSach *b){
	return this->a.SoSachConLai>this->b.SoSachConLai;
}
int main(){
	CSach *s[100];
	CSach *x=NULL;
	int n=0;
	ifstream filein;
	filein.open("input.txt");
	filein>> n;
	for(int i=0;i<n;i++){
		x = new CSach();
		x->docFile(filein);
		s[i]=x;
	}
	cout<<left<<setw(15)<<"TEN SACH"<<setw(15)<<"SO CUON SACH"<<setw(15)<<"DA MUON"<<setw(15)<<"CON LAI" <<endl;
	for(int i=0; i<n; i++){
		cout << "\nThong tin sach thu "<<i+1<<" la : "<<endl;
		s[i]->In();
	}
	
	ofstream ofs("output.txt");
	ofs<<left<<setw(15)<<"TEN SACH"<<setw(15)<<"SO CUON SACH"<<setw(15)<<"DA MUON"<<setw(15)<<"CON LAI" <<endl;
	for(int i=0;i<n;i++){
		s[i]->ghiFile(ofs);
	}
	ofs.close();
		
	ofstream tfs("ttsach.txt");	
	tfs<<left<<setw(15)<<"TEN SACH"<<setw(15)<<"SO CUON SACH"<<setw(15)<<"DA MUON"<<setw(15)<<"CON LAI" <<endl;
	for(int i=0;i<n;i++){
		if(s[i]->SoSachConLai >5){
			s[i]->ghiFile(tfs);
		}
	}
	tfs.close();
	
	filein.close();

	sort(s+1,s+n+1,cmp);
	ofstream ofs1("output1.txt");
	ofs1<<left<<setw(15)<<"TEN SACH"<<setw(15)<<"SO CUON SACH"<<setw(15)<<"DA MUON"<<setw(15)<<"CON LAI" <<endl;
	for(int i=0;i<n;i++){
		s[i]->ghiFile(ofs);
	}
	ofs1.close();

	system("pause");
}


	
	

