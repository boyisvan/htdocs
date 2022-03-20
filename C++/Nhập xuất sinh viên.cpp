#include <bits/stdc++.h>

using namespace std;

class sinhvien(){
    public:
        char hoten[30];
        char msv[30];
        int tuoi;
        void nhap();
        void xuat();
        void sapxep();
}

void sinhvien::nhap(){
    cout<<"Nhập tên sinh viên : ";
    gets(hoten);fflush(stdin);
    cout<<"Nhập mã số sinh viên : ";
    gets(msv);fflush(stdin);
    cout<<"Nhập tuổi : ";
    cin>>tuoi;
}
void sinhvien::xuat(){
    cout<<"Tên sinh viên : "<<hoten<<endl;
    cout<<"Mã sinh viên : "<<msv<<endl;
    cout<<"Tuổi : "<<tuoi<<endl;
}
void sinhvien::sapxep(sinhvien a,int n ){
    sort(sinhvien,sinhvien+n);
}
int main(){
    int n;
    sinhvien a[100];
    cout<<"Nhập số lượng sinh viên cần nhập : ";
    cin>>n;
    for(int i =0 ; i<n;i++){
        cout<<"Thông tin sinh viên thứ : "<<i+1;<<endl;
        a[i].nhap();
    }
}