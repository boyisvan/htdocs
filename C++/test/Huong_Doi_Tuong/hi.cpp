#include<bits/stdc++.h>
using namespace std;

class xe{
    public:   
        float tocdo;
        char nhanxe[50];
        int giaxe;
    public : 
        xe(){};
        xe(float td,char nx[50], int gx){
            this->tocdo=td;
            strcpy(this->nhanxe,nx);
            this->giaxe=gx;
        };
        void nhap(){
            cin.ignore();
            cout<<"Nhap ten xe : ";
            cin.getline(nhanxe,50);
            cout<<"Toc do cua xe : ";
            cin>>tocdo;
            cout<<"Gia xe : ";
            cin>>giaxe;
        };
        void hienthi(){
            cout<<"Xe : "<<nhanxe<<" co gia : "<<giaxe<<" va co toc do : "<<tocdo<<" km/h";
        };
};
int n=0;
xe a[50];
void nhapthongtin(){
    cout<<"Nhap so luong xe muon nhap : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"nhap thong tin xe thu "<<i<<endl;
        a[i].nhap();
    }
}
void xuatthongtin(){
    cout<<"Thong tin cac loai xe"<<endl;
    for(int i=1;i<=n;i++){
        a[i].hienthi();
        cout<<endl;
    }
}
bool cmp(xe a,xe b){
    return a.giaxe<b.giaxe;
}
bool cmpp(xe a,xe b){
    return a.giaxe>b.giaxe;
}
void xedatnhat(){
    cout<<"Thong tin xe dat nhat la : "<<endl;
    for(int i=0;i<n;i++){
        sort(a,a+n,cmp);
    }
    a[n].hienthi();
    cout<<endl;
}
void xerenhat(){
    cout<<"Thong tin xe re nhat la : "<<endl;
    for(int i=0;i<n;i++){
        sort(a,a+n,cmpp);
    }
    a[0].hienthi();
}
int main(){
    nhapthongtin();
    xuatthongtin();
    xedatnhat();
    xerenhat();
}