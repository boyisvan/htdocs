#include<bits/stdc++.h>

using namespace std;

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
        int hang,thanghopdong,luong;
    public:
        nhanvien(){};
        nhanvien(int h,int thd,int l){
            this->hang=h;
            this->thanghopdong=thd;
            this->luong=l;
        }
        void nhaptt(){
            nguoi::nhaptt();
            cout<<"Nhap hang nhan vien : ";cin>>hang;
            cout<<"Nhap so thang hop dong : ";cin>>thanghopdong;
            cout<<"Nhap luong : ";cin>>luong;
        }
        void hienthitt(){
            nguoi::hienthitt();
            cout<<"\tNhan vien hang : "<<hang<<"\tThang hop dong : "<<thanghopdong<<"\tLuong :"<<luong<<"$"<<endl;
        }
        ~nhanvien(){};
};

int n=0,hang=0;nhanvien a[50];

void nhanthongtin(){
    cout<<"Nhap so luong nhan vien : ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"===Nhap thong tin nhan vien thu "<<i+1<<" ==="<<endl;
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

//code phan het han hop dong ( nho hon 6 thang )
void hethanhopdong(){
    cout<<"\n\nDanh sach nhan vien sap het han hop dong : "<<endl;
    for (int i = 0; i < n; i++)
    {
        if(a[i].thanghopdong<6){
            a[i].hienthitt();
        }
    }
    
}
//code phan sap xep luong giam dan 
bool cmp(nhanvien b,nhanvien c){
    return b.luong > c.luong;
}
void xeptheotheoluonggiamdan(){
    sort(a,a+n,cmp);
    cout<<"\n\nDanh sach sap xep nhan vien theo luong giam dan la  :\n";
    for(int i=0;i<n;i++){
        a[i].hienthitt();
    }
}


//code phan liet ke theo hang nhan vien 
void lietke(){
    cout<<"\n\nNhap hang nhan vien muon liet ke (co' 3 hang 1,2,3 ) : ";
    cin>>hang;
    cout<<"\nDanh sach nhan vien hang "<<hang<<" :\n";
    for(int i=0;i<n;i++){
        if(a[i].hang==hang){
            a[i].hienthitt();
        }
    }
}
int main(){
    nhanthongtin();
    xuatthongtin();
    hethanhopdong();
    xeptheotheoluonggiamdan();
    lietke();
    return 0;
}