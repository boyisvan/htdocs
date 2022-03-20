#include <bits/stdc++.h>
using namespace std;

class Nguoi{
    public:
        char hoTen[30];
        char queQuan[50];
        int Tuoi;
    public:
        Nguoi(){};
        Nguoi(char hoTen[30],char queQuan[50], int Tuoi){
            strcpy(hoTen,hoTen);
            strcpy(queQuan,queQuan);
            this->Tuoi=Tuoi;
        }  
        void NhapTT();
        void HienthiTT();
};
class NhanVien : public Nguoi{
    public :
        int hangNhanVien;
        int thangHopDong;
        int luong;
    public :
        NhanVien(){};
        NhanVien(int hangNhanVien, int thangHopDong, int luong){
            this->hangNhanVien=hangNhanVien;
            this->thangHopDong=thangHopDong;
            this->luong=luong;
        }
        void NhapTT();
        void HienthiTT();
};
void Nguoi::NhapTT(){
    cin.ignore();
    cout<<"Ho Ten : "; cin.getline(hoTen,30);
    cout<<"Que Quan : "; cin.getline(queQuan,50);
    cout<<"Tuoi : "; cin>> Tuoi;
}
void Nguoi::HienthiTT(){
    cout<< hoTen << "\t" << queQuan <<"\t"<< Tuoi;
}
void NhanVien::NhapTT(){
    Nguoi::NhapTT();
    cout<<"Hang nhan vien : ";cin>>hangNhanVien;
    cout<<"So thang hop dong : "; cin>>thangHopDong;
    cout<<"Luong(USD) : ";cin>> luong;
}
void NhanVien::HienthiTT(){
    Nguoi::HienthiTT();
    cout<<"\t"<< hangNhanVien << "\t" << thangHopDong << "\t" << luong << endl;
}
void sapXep(NhanVien N[], int n){
    for(int i=0; i<n-1; i++){
        for(int j= n-1; j>i; j--){
            if(N[j].luong< N[j-1].luong){
                NhanVien tmp=N[j];
                N[j] = N[j-1];
                N[j-1]= tmp;
            }
        }
    }
}
int main(){
    NhanVien N[100];
    int n;
    int hangnv;
    cout<< "So luong nhan vien can nhap thong tin la : "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Nhan vien so "<<i+1<<" : "<<endl;
        N[i].NhapTT();
    }
    cout<< "Danh sach nhan vien vua nhap : "<<endl; 
    for(int i=0; i<n; i++){
        N[i].HienthiTT();
    }
    cout<<"Danh sach nhan vien sap het han hop dong la : ";
    for(int i=0; i<n ;i++){
        if(N[i].thangHopDong<6){
            N[i].HienthiTT();
        }   
    }
    sapXep(N, n);
    for(int i=0; i<n; i++){
        N[i].HienthiTT();
    }
    cout<<"\n\nNhap hang nhan vien muon liet ke : "; cin>>hangnv;                         
    cout<<"\nDanh sach nhan vien hang "<<hangnv<<" :\n"; 
    for(int i=0;i<n;i++){ 
        if(N[i].hangNhanVien == hangnv)
        { N[i].HienthiTT(); } 
    } 
    
}

    
