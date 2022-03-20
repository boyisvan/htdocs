#include<bits/stdc++.h>

using namespace std;

class coquan{
    public:
        char hoten[50],quequan[50];
        int tuoi;
    public:
        coquan(){};
        coquan(char ht[50],char qq[50],int age){
            strcpy(this->hoten,ht);
            strcpy(this->quequan,qq);
            this->tuoi=age;
        }
        void nhaptt(){
            cin.ignore();
            cout<<"Nhap ho ten : ";
            cin.getline(hoten,50);
            cout<<"Nhap que quan : ";
            cin.getline(quequan,50);
            cout<<"Nhap tuoi : ";
            cin>>tuoi;
        }
        void hienthitt(){

        }
        ~coquan(){};

};
class nguoi{
    public:
        char hoten[50],quequan[50];
        int tuoi;
    public:
        nguoi(){};
        nguoi(char ht[50],char qq[50],int age){
            strcpy(this->hoten,ht);
            strcpy(this->quequan,qq);
            this->tuoi=age;
        }
        void nhaptt(){
            cin.ignore();
            cout<<"Nhap ho ten : ";
            cin.getline(hoten,50);
            cout<<"Nhap que quan : ";
            cin.getline(quequan,50);
            cout<<"Nhap tuoi : ";
            cin>>tuoi;
        }
        void hienthitt(){
            cout<<"Ten : "<<hoten<<"\tQue quan : "<<quequan<<"\tTuoi :"<<tuoi;
        }
        ~nguoi(){};
};
class nhanvien : public nguoi{
    public:
        int maso,thanghopdong,luong;
    public:
        nhanvien(){};
        nhanvien(int ms,int thd,int l){
            this->maso=ms;
            this->thanghopdong=thd;
            this->luong=l;
        }
        void nhaptt(){
            nguoi::nhaptt();
            cout<<"Nhap hang nhan vien : ";cin>>maso;
            cout<<"Nhap so thang hop dong : ";cin>>thanghopdong;
            cout<<"Nhap luong : ";cin>>luong;
        }
        void hienthitt(){
            nguoi::hienthitt();
            cout<<"\tMa nhan vien : "<<maso<<"\tThang hop dong : "<<thanghopdong<<"\tLuong :"<<luong<<endl;
        }
        ~nhanvien(){};
};

int n=0;nhanvien a[50];

void nhanthongtin(){
    cout<<"Nhap so luong nhan vien : ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Nhap thong tin nhan vien thu"<<i+1<<endl;

        a[i].nhaptt();
        cout<<endl;
    }
}
void xuatthongtin(){
    cout<<"Thong tin cua nhan vien trong cong ty "<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    for(int i=0;i<n;i++){
        a[i].hienthitt();
    }
}

int main(){
    nhanthongtin();
    xuatthongtin();
    return 0;
}