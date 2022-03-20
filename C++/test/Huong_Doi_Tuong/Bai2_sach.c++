#include<bits/stdc++.h>
using namespace std;

class sach{
    public:
        char tensach[50];
        int tongsosach,sachchomuon;
    public:
        sach(){};
        sach(char ts[50],int tss, int scm){
            strcpy(this->tensach,ts);
            this->tongsosach=tss;
            this->sachchomuon=scm;
        };
        void nhap(){
            cin.ignore();
            cout<<"Nhap ten sach : " ;
            cin.getline(tensach,50);
            cout<<"Tong so sach : ";
            cin>>tongsosach;
            cout<<"So sach cho muon : ";
            cin>>sachchomuon;
        }
        void in(){
            cout<<"Sach "<<tensach<<" co tong so "<<tongsosach<<" quyen va dang cho muon "<<sachchomuon<<" quyen "<<endl;
        }
};
int n=0;
sach a[50];
void nhapxuatthongtin(){
    cout<<"Nhap so loai sach : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"nhap thong tin loai sach thu "<<i+1<<endl;
        a[i].nhap();
        cout<<endl;
    }
    cout<<"\n\n\n";
    cout<<"Thong tin cac loai sach trong thu vien : \n"<<endl;
    for(int i=0;i<n;i++){
        a[i].in();
    }
}
int  sachconlai(){
    int x=0,y=0;
    for(int i=0;i<n;i++){
        x=x+a[i].tongsosach;
    }
    for(int i=0;i<n;i++){
        y=y+a[i].sachchomuon;
    }
    return x-y;
}
int main(){
    nhapxuatthongtin();
    cout<<"\n\n\n";
    cout<<"so sach con lai trong thu vien la "<<sachconlai();
}