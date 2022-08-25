#pragma once
#include"CTDL.h"
#include"chuanhoachu.h"
#include"docghifile.h"
#include <iomanip>
// ==================Them ds dien thoai=========//
void Nhaphang(ds_dienthoai &ds_dt);
string taoma_dt(ds_dienthoai &ds_dt);
int kt_trung(string a,ds_dienthoai &ds_dt);
// ==================xuat ds dien thoai==========//
void xuat_ds_dt(ds_dienthoai ds_dt);
// ==================xoa dien thoai==========//
void xoa_dt(ds_dienthoai &ds_dt);
int ktra_madienthoai(string a,ds_dienthoai ds_dt);
// ==================hieu chinh dien thoai==========//
void hieuchinh_dienthoai(ds_dienthoai ds_dt);
// ================= Nhap nhan vien ===================//
//nhanvien* Khoitao_node_nhanvien();
void nhap_nhanvien(ds_nhanvien &ds_nv);
//void them_1_nhanvien(nhanvien* &t,nhanvien *p);
int taoma_nhanvien(nhanvien *t);
bool ktra_manhanvien_trung(nhanvien *t, int ma);
// ================= In danh sach nhan vien =========//
// chuyen cay sang mang
void chuyencaysangmang(nhanvien *t,nhanvien *ds[],int &nds);
void indanhsach_nhanhvien(nhanvien *ds[],int &nds);
// sap xep danh sach nhan vien
void hoavi_2nhanvien(nhanvien *a,nhanvien*b);
void sapxep_ds_nhanvien(nhanvien *ds[],int &nds);
// giai phong vung nho
void giaiphong_ds_nhanhvien(nhanvien *ds[],int &nds);
// ================= Xoa nhan vien =================//
void xoanhanvien(ds_nhanvien &ds_nv);
void xoa_1_nhanvien(nhanvien *&t,int ma);
void node_themang(nhanvien *&t,nhanvien *&x);
// =================== Hieu Chinh nhan vien==================//
void hieuchinh_nhanvien(ds_nhanvien &ds_nv);
void hieuchinh_1_nhanvien(nhanvien *t,int ma);
//================= Lap hoa don ===================//
void laphoadon(ds_nhanvien &ds_nv,ds_dienthoai &ds_dt,ds_chitiethoadon &ds_cthd);
void them_1_hoadon(hoadon *&pHead,hoadon *p);//duyen danh sach lien ket
hoadon *Khoitao_node_hoadon();
nhanvien *kt_ma_nv(nhanvien *t,int ma);
bool kt_trung_hoadon(hoadon *pHead,string ma);
string taoma_hoadon(ds_hoadon ds_hd);

hoadon *Khoitao_node_hoadon();
void Themvaocuoi(ds_hoadon &ds_hd, hoadon *p);
void Xuatdanhsach_hd(ds_hoadon ds_hd);
void xuat_ds_laphoadon(ds_chitiethoadon ds_cthd);

//==================== loc hoa don ================ //
void hoavi_2hoadon(chitiethoadon *a,chitiethoadon*b);
void sapxep_ds_chitiethoadon(ds_chitiethoadon &ds_cthd);
void gop_ds_hoadon(ds_chitiethoadon &ds_cthd);
void loc_ds_laphoadon(ds_chitiethoadon ds_cthd);
// ==================Menu===================//
void menu()
{
    //========== khai bao bien==========//
    ds_nhanvien ds_nv;
    ds_dienthoai ds_dt;
    ds_chitiethoadon ds_cthd;
    ds_chitiethoadon_loc ds_cthdloc;
    ds_hoadon ds_hd;
    bool kt=true;
    //========== Load file txt ==========//
    docfile_ds_dienthoai(ds_dt);
    docfile_ds_nhanvien(ds_nv);
    docfile_ds_hoadon(ds_cthd);
    while(kt==true)
    {
        system("cls");
        cout<<"=======================De Tai Cuoi Ky======================="<<endl;
        cout<<"|          Mon: Giai thuat va cau truc du lieu             |"<<endl;
        cout<<"|          De tai: Quan Ly Cua Hang Dien Thoai             |"<<endl;
        cout<<"============================================================"<<endl;
        cout<<"| Ho va ten                       MSSV                     |"<<endl;
        cout<<"| Doan Thai Hoc                   19119090 (nhom truong)   |"<<endl;
        cout<<"| Ho Hoang Nguyen Khang           19119100                 |"<<endl;
        cout<<"| Vo Chi Vy                       19119151                 |"<<endl;
        cout<<"============================Menu============================"<<endl;
        cout<<"|     1. Them hang vao kho.                                |"<<endl;                          
        cout<<"|     2. Xuat danh sach kho.                               |"<<endl;
        cout<<"|     3. Xoa dien thoai.                                   |"<<endl;
        cout<<"|     4. Chinh sua thong tin dien thoai.                   |"<<endl;
        cout<<"|     5. Them nhan vien.                                   |"<<endl;
        cout<<"|     6. In danh sach nhan vien tang dan theo ten,ho.      |"<<endl;
        cout<<"|     7. Xoa nhan vien.                                    |"<<endl;
        cout<<"|     8. Chinh sua thong tin nhan vien.                    |"<<endl;
        cout<<"|     9. Lap hoa don.                                      |"<<endl;
        cout<<"|     10.In Hoa Don.                                       |"<<endl;
        cout<<"|     11.Danh Sach Dien Thoai Ban Chay.                    |"<<endl;
        cout<<"|     0. Thoat.                                            |"<<endl;
        cout<<"============================END============================="<<endl;

        int luachon;
        cout<<"Nhap lua chon:";
        cin>>luachon;
        switch (luachon)
        {
            case 1:
            {
                if (ds_dt.sl==100)
                {
                    cout<<"san pham day kho!"<<endl;
                    system("pause");
                }else
                {
                    Nhaphang(ds_dt);
                }
                break;
            }
            case 2:
            {
                xuat_ds_dt(ds_dt);
                system("pause");
                break;
            }
            case 3:
            {
                if (ds_dt.sl==0)
                {
                    cout<<"Xoa khong thanh cong! kho rong"<<endl;
                    system("pause");
                }else
                {
                    xoa_dt(ds_dt);
                }
                break;
            }
            case 4:
            {
                if (ds_dt.sl==0)
                {
                    cout<<"Data rong"<<endl;
                    system("pause");
                }else
                {
                    hieuchinh_dienthoai(ds_dt);
                }
                break;
            }
            case 5:
            {
                nhap_nhanvien(ds_nv);
                break;
            }
            case 6:
            {
                nhanvien *ds[100];
                int nds= 0;
                chuyencaysangmang(ds_nv.tree,ds,nds);
                sapxep_ds_nhanvien(ds,nds);
                indanhsach_nhanhvien(ds,nds);
                giaiphong_ds_nhanhvien(ds,nds);
                system("pause");
                break;
            }
            case 7:
            {
                xoanhanvien(ds_nv);
                break;
            }
            case 8:
            {
                hieuchinh_nhanvien(ds_nv);
                break;
            }
            case 9:
            {   
                laphoadon(ds_nv,ds_dt,ds_cthd);
                xuat_ds_laphoadon(ds_cthd);
                system("pause");
                break;
            }
            case 10:
            {
                xuat_ds_laphoadon(ds_cthd);
                system("pause");
                break;
            }
            case 11:
            {
                chitiethoadon *ds[100];
                int nds= 0;
                gop_ds_hoadon(ds_cthd);
                sapxep_ds_chitiethoadon(ds_cthd);
                loc_ds_laphoadon(ds_cthd);
                system("pause");
                break;
            }
            case 0:
            {
                kt=false;
                break;
            }
        }
    }
}
void Nhaphang(ds_dienthoai &ds_dt)
{
    dienthoai *p= new dienthoai;//tao con tro tam
    p->ma_dt=taoma_dt(ds_dt);

    cout<<"Nhap ten dien thoai:";
    cin.ignore();
    getline(cin,p->ten_dt);

    cout<<"Nhap don vi tinh:";
    getline(cin,p->don_vi_tinh);
    
    cout<<"Nhap so luong ton:";
    cin>>p->so_luong_ton;

    cout<<"Gia Nhap:";
    cin>>p->gianhap;

    cout<<"Gia Ban :";
    cin>>p->giaxuat;
    //==========Chuanhoachu=========//
    chuanhoachu(p->ma_dt);
    chuanhoachu(p->ten_dt);
    chuanhoachu(p->don_vi_tinh);
    //luu vao danh sach dien thoai
    ds_dt.ds[ds_dt.sl]= p;//gan so luong vao ds
    ds_dt.sl++;//tang ds sl len 1
}
string taoma_dt(ds_dienthoai &ds_dt)
{
    string a="DT0000";
    do
    {
    for (int i=2; i<a.length();i++)
    {
        a[i] = rand()%(57-48+1)+48;
    }
    }while(kt_trung(a,ds_dt)>=0);
    return a;
}
int kt_trung(string a,ds_dienthoai &ds_dt)
{
    for (int i=0;i<ds_dt.sl;i++)
    {
        if(ds_dt.ds[i]->ma_dt== a)
        {
            return i;
        }
    }
    return -1;
}
// ==========xuat ds dien thoai==========//
void xuat_ds_dt(ds_dienthoai ds_dt)
{

    {
        cout<<"=================================================================================================" <<endl;
        cout<<"|                                    Danh Sach Dien Thoai                                       |" <<endl;
        cout<<"=================================================================================================" <<endl;
        cout<<"| Ma Dien Thoai | |      Ten Dien Thoai      | | DVT | |  SL Ton  | |  Gia Nhap  | |  Gia Xuat  |" <<endl;
        cout<<"|-----------------------------------------------------------------------------------------------|" <<endl;
        for(int i=0;i<ds_dt.sl;i++)
        {
        cout<<"| "<<setw(14)<<left<<ds_dt.ds[i]->ma_dt<<"| ";
        cout<<"| "<<setw(25)<<left<<ds_dt.ds[i]->ten_dt<<"| ";
        cout<<"| "<<setw(4)<<left<<ds_dt.ds[i]->don_vi_tinh<<"| ";
        cout<<"| "<<setw(9)<<left<<ds_dt.ds[i]->so_luong_ton<<"| ";
        cout<<"| "<<setw(11)<<left<<ds_dt.ds[i]->gianhap<<"| ";
        cout<<"| "<<setw(11)<<left<<ds_dt.ds[i]->giaxuat<<"| "<<endl;
        }
        cout<<"==============================================END===============================================" <<endl;
    }
}
// ==========Xoa dien thoai==========//
void xoa_dt(ds_dienthoai &ds_dt)
{
    cout<<"Neu dien thoai da duoc lap hoa don thi khong the xoa"<<endl;
    string a;
    cout<<"Nhap ma dien thoai:";
    cin>>a;
    chuanhoachu(a);
    // ===================//
    int dt=ktra_madienthoai(a, ds_dt);
    // ============ xoa ===========//
    if (dt<0)
    {
        cout<<"Dien thoai khong ton tai hoac da duoc lap hoa don."<<endl;
        system("pause");
    }else
    {
        // dời
        for (int i=dt;i<ds_dt.sl-1;i++)
        {
            ds_dt.ds[i]->ma_dt = ds_dt.ds[i+1]->ma_dt;
            ds_dt.ds[i]->ten_dt = ds_dt.ds[i+1]->ten_dt;
            ds_dt.ds[i]->don_vi_tinh = ds_dt.ds[i+1]->don_vi_tinh;
            ds_dt.ds[i]->so_luong_ton = ds_dt.ds[i+1]->so_luong_ton;
            ds_dt.ds[i]->kt = ds_dt.ds[i+1]->kt;
        }
        //giam sl
        dienthoai*tam = ds_dt.ds[ds_dt.sl-1];
        ds_dt.sl--;
        cout<<"Da xoa thanh cong!"<<endl;
        system("pause");
    }
}
int ktra_madienthoai(string a,ds_dienthoai ds_dt)
{
    for(int i=0;i<ds_dt.sl;i++)
    {
        if(ds_dt.ds[i]->ma_dt==a)//kiem tra trung ma dien thoai
        {
            if(ds_dt.ds[i]->kt==0)//ktra chua lap hoa don
            {   
                return i;
            }
        }
    }
    return -1;
}
// ==========hieu chinh dien thoai==========//
void hieuchinh_dienthoai(ds_dienthoai ds_dt)
{
    cout<<"Nhap ma dien thoai can sua:";
    string a;
    cin>>a;
    chuanhoachu(a);
    // kiem tra ma dien thoai
    int dt=kt_trung(a,ds_dt);
    if (dt<0)
    {
        cout<<"Ma khong ton tai!"<<endl;
        system("pause");
    }else
    {
        //hieu chinh
        cout<<"Nhap ten dien thoai:";
        cin.ignore();
        getline(cin,ds_dt.ds[dt]->ten_dt);
        cout<<"Nhap don vi tinh:";
        getline(cin,ds_dt.ds[dt]->don_vi_tinh);
        cout<<"Gia Nhap:";
        cin>>ds_dt.ds[dt]->gianhap;

        cout<<"Gia Ban :";
        cin>>ds_dt.ds[dt]->giaxuat;
        // chuan hoa chu
        chuanhoachu(ds_dt.ds[dt]->ten_dt);
        chuanhoachu(ds_dt.ds[dt]->don_vi_tinh);
        
        cout<<"\n\n\t============================="<<endl;
        cout<<"Thay doi thong tin thanh cong!"<<endl;
        system("pause");
    }
}
// ================= Nhap nhan vien ===================//
//nhanvien* Khoitao_node_nhanvien() |Ghi chu>> chuyen sang file chuanhoachu
void nhap_nhanvien(ds_nhanvien &ds_nv)
{
    nhanvien*p=Khoitao_node_nhanvien();
    cin.ignore();//du lieu bo nho dem van con khi nhap lua chon-> nhay qua
    cout<<"Nhap Ho:";getline(cin,p->ho);
    chuanhoachu(p->ho);
    cout<<"Nhap Ten:";getline(cin,p->ten);
    chuanhoachu(p->ten);
    cout<<"Nhap gioi tinh:";getline(cin,p->gioitinh);
    chuanhoachu(p->gioitinh);
    p->ma_nv=taoma_nhanvien(ds_nv.tree);
    them_1_nhanvien(ds_nv.tree,p);
    ds_nv.sl++;
}
//void them_1_nhanvien | Ghi chu>> chuyen sang file chuan hoa chu

int taoma_nhanvien(nhanvien *t)
{
    int ma;//000-999
    do
    {
        ma=rand()%(999-000+1)+000;
    }while(ktra_manhanvien_trung(t,ma)==true);
    return ma;
}
bool ktra_manhanvien_trung(nhanvien *t, int ma)
{
    // ma khong trung
    if (t==NULL)
    {
        return 0;
    }else
    {
        if (t->ma_nv==ma)
        {
            return 1;
        }
        else if(t->ma_nv< ma)
        {
            ktra_manhanvien_trung(t->pright,ma);
        }else         {
            ktra_manhanvien_trung(t->pleft,ma);
        }
    }
}

// =========== In danh sach nhan vien =========//
// chuyen cay sang mang
void chuyencaysangmang(nhanvien *t,nhanvien *ds[],int &nds)
{
    if(t!=NULL)
    {
        //Data
        ds[nds]= new nhanvien;
        ds[nds]->ma_nv=t->ma_nv;
        ds[nds]->ho=t->ho;
        ds[nds]->ten=t->ten;
        ds[nds]->gioitinh=t->gioitinh;
        nds++;

        chuyencaysangmang(t->pleft,ds,nds);
        chuyencaysangmang(t->pright,ds,nds);

    }
}
// sap xep danh sach nhan vien
void hoavi_2nhanvien(nhanvien *a,nhanvien*b)
{   
    nhanvien *tam = new nhanvien;
    tam->ma_nv = a->ma_nv;
    tam->ho = a->ho;
    tam->ten = a->ten;
    tam->gioitinh = a->gioitinh;
    tam->danhsach_hd = a->danhsach_hd;
    // -----------------
    a->ma_nv = b->ma_nv;
    a->ho = b->ho;
    a->ten = b->ten;
    a->gioitinh = b->gioitinh;
    a->danhsach_hd = b->danhsach_hd;
    // -----------------
    b->ma_nv = tam->ma_nv;
    b->ho = tam->ho;
    b->ten = tam->ten;
    b->gioitinh = tam->gioitinh;
    b->danhsach_hd = tam->danhsach_hd;
    delete tam;
}
void sapxep_ds_nhanvien(nhanvien *ds[],int &nds)
{
    for (int i=0; i<nds; i++)
    {
        for(int j=i+1; j<nds; j++)
        {
            if(ds[i]->ten > ds[j]->ten)
            {
                hoavi_2nhanvien(ds[i],ds[j]);
            }else//neu trung ten thi sap xep theo ho
            if(ds[i]->ten==ds[j]->ten)
            {
                if(ds[i]->ho > ds[j]->ho)
                {
                    hoavi_2nhanvien(ds[i],ds[j]);
                }
            }
        }

    }
}
// in danh sach nhan vien ra
void indanhsach_nhanhvien(nhanvien *ds[],int &nds)
{
        cout<<"========================================================================" <<endl;
        cout<<"|                          Danh Sach Nhan Vien                         |" <<endl;
        cout<<"========================================================================" <<endl;
        cout<<"| STT | | Ma Nhan Vien | |           Ho va Ten           | | Gioi Tinh |" <<endl;
        cout<<"|----------------------------------------------------------------------|" <<endl;
        for (int i=0;i<nds;i++)
        {
        cout<<"| "<<setw(4)<<left<<i+1<<"| ";
        cout<<"| "<<setw(13)<<left<<ds[i]->ma_nv<<"| ";
        cout<<"| "<<setw(20)<<left<<ds[i]->ho;
        cout<<setw(10)<<left<<ds[i]->ten<<"| ";
        cout<<"| "<<setw(10)<<left<<ds[i]->gioitinh<<"| "<<endl;
        }
        cout<<"===================================END==================================" <<endl;
}
// giai phong vung nho
void giaiphong_ds_nhanhvien(nhanvien *ds[],int &nds)
{
    for (int i=0;i<nds;i++)
    {
        delete ds[i];
    }
}
// ================= Xoa nhan vien =================//
void xoanhanvien(ds_nhanvien &ds_nv)
{
    int a;
    cout<<"Nhap ma nhan vien:";cin>>a;
    bool kt = ktra_manhanvien_trung(ds_nv.tree, a);
    if(kt==true)//trung
    {
        xoa_1_nhanvien(ds_nv.tree,a);
        ds_nv.sl--;
        cout<<"Xoa nhan vien thanh cong."<<endl;
    }else
    {
        cout<<"Ma nhan vien khong ton tai!"<<endl;
    }
    system("pause");
}
void xoa_1_nhanvien(nhanvien *&t,int ma)
{
    if(t!=NULL)
    {
        if (t->ma_nv==ma)
        {
            nhanvien *x=t;// x se luu node can giai phong
            if (t->pleft==NULL)// nut la hoac nut 1 con
            {
                t=t->pright;
            }else if (t->pright==NULL)
            {
                t=t->pleft;
            }else if (t->pleft !=NULL && t->pright!=NULL)// nut 2 con | 
            {
                //Quy uoc node trai cung cua cay con phai | tim node the mang
                node_themang(t->pright,x);
            }
            delete x;
        }else if (t->ma_nv < ma)
        {
            xoa_1_nhanvien(t->pright,ma);//de quy qua phai
        }else if (t->ma_nv > ma)
        {
            xoa_1_nhanvien(t->pleft,ma);//de quy sang trai
        }
    }
}
void node_themang(nhanvien *&t,nhanvien *&x)
{
    if(t->pleft !=NULL)
    {
        node_themang(t->pleft,x);//de quy sang trai
    }else//da la nut trai cung
    {
        hoavi_2nhanvien(t,x);
        x=t; //x se luu vi tri node t de chut giai phong
        t=t->pright;
    }
}
// =================== Hieu Chinh nhan vien==================//
void hieuchinh_nhanvien(ds_nhanvien &ds_nv)
{
    int a;
    cout<<"Nhap ma nhan vien can hieu chinh:";cin>>a;
    bool kt = ktra_manhanvien_trung(ds_nv.tree,a);
    if(kt==true)
    {
        hieuchinh_1_nhanvien(ds_nv.tree,a);
    }else
    {
        cout<<"Ma nhan vien khong ton tai!..."<<endl;
    }
    system("pause");
}
void hieuchinh_1_nhanvien(nhanvien *t,int ma)
{
    if(t!=NULL)
    {
        if (t->ma_nv==ma)
        {
            cin.ignore();//xoa bo nho dem
            cout<<"Nhap ho:";getline(cin,t->ho);//string
            cout<<"Nhap ten:";getline(cin,t->ten);//string
            cout<<"Nhap gioi tinh:";getline(cin,t->gioitinh);//string
            chuanhoachu(t->ho);
            chuanhoachu(t->ten);
            chuanhoachu(t->gioitinh);
            cout<<"Da thay doi thong tin nhan vien thanh cong !"<<endl;
        }else if(t->ma_nv > ma)
        {
            hieuchinh_1_nhanvien(t->pleft,ma);//de quy sang trai
        }else if(t->ma_nv < ma)
        {
            hieuchinh_1_nhanvien(t->pright,ma);//de quy sang phai
        }
    }    
}
//================= Lap hoa don ===================//
void laphoadon(ds_nhanvien &ds_nv,ds_dienthoai &ds_dt,ds_chitiethoadon &ds_cthd)
{
    chitiethoadon *p= new chitiethoadon;//tao con tro tam
    p->ma_dt=taoma_dt(ds_dt);
    int a;
    cout<<"Nhap ma nhan vien lap hoa don:";cin>>a;
    nhanvien *tam = kt_ma_nv(ds_nv.tree,a);
    if (tam==NULL)
    {
        cout<<"Ma nhan vien khong ton tai!"<<endl;
    }else
    {
        hoadon *p = Khoitao_node_hoadon();//khoi tao 1 node hoa don
        // bool nhap;
        // bool ktw = true;
        // while(ktw==true)
        // {
        //     system("cls");
        //     cout<<"1.Hoa don nhap:"<<endl;
        //     cout<<"2.Hoa don xuat:"<<endl;
        //     cout<<"Nhap loai hoa don(1.nhap/2.xuat):"<<endl;
        //     int x;
        //     cin>>x;
        //     switch(x)
        //     {
        //         case 1:
        //         {
        //             cout<<"Loai hoa don: Nhap"<<endl;
        //             nhap = true;
        //             p->loai = 'N';
        //             ktw=false;
        //             break;
        //         }
        //         case 2:
        //         {
        //             cout<<"Loai hoa don: Xuat"<<endl;
        //             nhap = false;
        //             p->loai = 'X';
        //             ktw=false;
        //             break;
        //         }
        //     }
        // }
        //================
        p->so_hd=taoma_hoadon(tam->danhsach_hd);
        cout<<"Ma hoa don: "<< p->so_hd << endl;
        cin.ignore();//kieu string nen xoa bo nho dem
        cout<<"Nhap ngay lap hoa don: ";getline(cin,p->ngay_lap_hd);
        string b;
        b = p->ngay_lap_hd ;
        xuat_ds_dt(ds_dt);
        cout<<"Nhap ma dt:";
        string a;
        cin>>a;
        chuanhoachu(a);
        cout<<a<<endl;
        // kiem tra ma dien thoai
        int dt=kt_trung(a,ds_dt);
        
        if (dt<0)
        {
            cout<<"Ma khong ton tai!"<<endl;
            system("pause");
        }else
        {
            
            chitiethoadon *p= new chitiethoadon;//tao con tro tam
            p->ma_dt = a;
            p->sohd = taoma_hoadon(tam->danhsach_hd);
            p->ho_nhanvien = tam->ho;
            p->ten_nhanvien = tam->ten;
            p->dongia =  ds_dt.ds[dt]->gianhap;
            p->ten_dt = ds_dt.ds[dt]->ten_dt;
            p->ngaylap = b; 
            cout<<"So luong ton kho:"<<ds_dt.ds[dt]->so_luong_ton<<endl;
            cout<<"Nhap so luong:";
            cin>>p->soluong;
            if (p->soluong < ds_dt.ds[dt]->so_luong_ton)
            {
                p->thanhtien = ds_dt.ds[dt]->gianhap*p->soluong;
                //luu vao danh sach dien thoai
                
                cout<<"Ten Dien Thoai:"<<ds_dt.ds[dt]->ten_dt<<endl;
                cout<<"Ho Ten Nhan Vien lap hoa don:"<<tam->ho<<" "<<tam->ten<<endl;
                cout<<"So luong ton kho:"<<ds_dt.ds[dt]->so_luong_ton<<endl;
                cout<<"So luong con lai kho:"<<ds_dt.ds[dt]->so_luong_ton-p->soluong<<endl;
                ds_dt.ds[dt]->so_luong_ton=ds_dt.ds[dt]->so_luong_ton-p->soluong;
                ds_cthd.ds[ds_cthd.sl]= p;//gan so luong vao ds
                ds_cthd.sl++;//tang ds sl len 1
                xuat_ds_dt(ds_dt);
            }else
            {
                cout<<"Khong du hang!"<<endl;
                system("pause");
            }
            
        }
        cout<<"Lap hoa don thanh cong! Nhan phim bat ki de xem chi tiet hoa don"<<endl;

        system("pause");
        // //================Them hoa don vao ds hoa don============//
        // them_1_hoadon(tam->danhsach_hd.pHead,p);
        // //================Tong ket tt vua nhap==================//
        // cout<<"Hoa don:"<<p->loai<<endl;
        // cout<<"Ma hoa don: "<<p->so_hd <<endl;
        // cout<<"Ngay lap hoa don: "<<p->ngay_lap_hd<< endl;
        
        // //================Lap chi tiet hoa don==================//
    }
}
void them_1_hoadon(hoadon *&pHead,hoadon *p)//duyen danh sach lien ket
{
    if(pHead==NULL)
    {
        pHead=p;
    }else
    {
        for (hoadon *k = pHead;k!=NULL;k=k->pNext)
        {
            if(k->pNext==NULL)
            {
                k->pNext=p;
            }
        }
    }
}
hoadon *Khoitao_node_hoadon()
{
    hoadon *p = new hoadon;
    p->pNext=NULL;
    return p;
}
void Themvaocuoi(ds_hoadon &ds_hd, hoadon *p)
{
    if (ds_hd.pHead==NULL)
    {
        ds_hd.pHead=ds_hd.pTail=p;
    }else
    {
        ds_hd.pTail->pNext=p;
        ds_hd.pTail=p;
    }
}

void Xuatdanhsach_hd(ds_hoadon ds_hd)
{
    for(hoadon *k =ds_hd.pHead;k!=NULL; k=k->pNext)
    {
        cout<<k->so_hd<<"";
    }
}
//====ham ktra ma nhan vien neu co tren he thong thi lay cai data node tren cay nhi phan
nhanvien *kt_ma_nv(nhanvien *t,int ma)
{
    if(t!=NULL)
    {
        if(t->ma_nv == ma)
        {
            return t;
        }else if (t->ma_nv < ma)
        {
            kt_ma_nv(t->pright,ma);
        }else if (t->ma_nv > ma)
        {
            kt_ma_nv(t->pleft,ma);
        }

    }
    else
    {
        return NULL;
    }
}

bool kt_trung_hoadon(hoadon *pHead,string ma)
{
    for (hoadon *k = pHead;k!=NULL;k=k->pNext)
    {
        if(k->so_hd == ma)
        {
            return true;
        }
    }
    return false;
}
string taoma_hoadon(ds_hoadon ds_hd)
{
    string a="HD0000";
    do
    {
    for (int i=2; i<a.length();i++)
    {
        a[i] = rand()%(57-48+1)+48;
    }
    }while(kt_trung_hoadon(ds_hd.pHead,a)==true);
    return a;
}


void xuat_ds_laphoadon(ds_chitiethoadon ds_cthd)
{

    {
        cout<<"======================================================================================================================================" <<endl;
        cout<<"|                                                          Hoa Don Dien Thoai                                                        |" <<endl;
        cout<<"======================================================================================================================================" <<endl;
        cout<<"|       Ho va ten NV       | |  Ngay lap  | |  So HD | |  Ma DT | |      Ten Dien Thoai      | | So Luong | | Don gia | | Thanh Tien |" <<endl;
        cout<<"|------------------------------------------------------------------------------------------------------------------------------------|" <<endl;
        for(int i=0;i<ds_cthd.sl;i++)
        {
        cout<<"| "<<setw(15)<<left<<ds_cthd.ds[i]->ho_nhanvien;
        cout<<" "<<setw(9)<<left<<ds_cthd.ds[i]->ten_nhanvien<<"| ";
        cout<<"| "<<setw(11)<<left<<ds_cthd.ds[i]->ngaylap<<"| ";
        cout<<"| "<<setw(7)<<left<<ds_cthd.ds[i]->sohd<<"| ";
        cout<<"| "<<setw(7)<<left<<ds_cthd.ds[i]->ma_dt<<"| ";
        cout<<"| "<<setw(25)<<left<<ds_cthd.ds[i]->ten_dt<<"| ";
        cout<<"| "<<setw(9)<<left<<ds_cthd.ds[i]->soluong<<"| ";
        cout<<"| "<<setw(8)<<left<<ds_cthd.ds[i]->dongia<<"| ";
        cout<<"| "<<setw(11)<<left<<ds_cthd.ds[i]->thanhtien<<"| "<<endl;      
        }
        int sum=0;
        for(int i=0;i<ds_cthd.sl;i++)
        {
           sum+= ds_cthd.ds[i]->thanhtien;
        }
        cout<<"=====================================================================================================================================" <<endl;
        cout<<"|                                                     Tong doanh thu: "<<setw(15)<<left<<sum<<"                                                |"<<endl;
        cout<<"====================================================================END==============================================================" <<endl;
    }
}
// ========================================11. loc hoa don==================================//
void hoavi_2hoadon(chitiethoadon *a,chitiethoadon*b)
{   
    chitiethoadon *tam = new chitiethoadon;
    tam->ho_nhanvien = a->ho_nhanvien;
    tam->ten_nhanvien = a->ten_nhanvien;
    tam->ngaylap = a->ngaylap;
    tam->sohd = a->sohd;
    tam->ma_dt = a->ma_dt;
    tam->ten_dt = a->ten_dt;
    tam->soluong = a->soluong;
    tam->dongia = a->dongia;
    tam->thanhtien = a->thanhtien;
    // -----------------
    a->ho_nhanvien = b->ho_nhanvien;
    a->ten_nhanvien = b->ten_nhanvien;
    a->ngaylap = b->ngaylap;
    a->sohd = b->sohd;
    a->ma_dt = b->ma_dt;
    a->ten_dt = b->ten_dt;
    a->soluong = b->soluong;
    a->dongia = b->dongia;
    a->thanhtien = b->thanhtien;
    // -----------------
    b->ho_nhanvien = tam->ho_nhanvien;
    b->ten_nhanvien = tam->ten_nhanvien;
    b->ngaylap = tam->ngaylap;
    b->sohd = tam->sohd;
    b->ma_dt = tam->ma_dt;
    b->ten_dt = tam->ten_dt;
    b->soluong = tam->soluong;
    b->dongia = tam->dongia;
    b->thanhtien = tam->thanhtien;
    delete tam;
}
void sapxep_ds_chitiethoadon(ds_chitiethoadon &ds_cthd)
{
    for (int i=0; i<ds_cthd.sl; i++)
    {
        for(int j=i+1; j<ds_cthd.sl; j++)
        {
            if(ds_cthd.ds[i]->soluong < ds_cthd.ds[j]->soluong)
            {
                hoavi_2hoadon(ds_cthd.ds[i],ds_cthd.ds[j]);
            }else//neu trung ten thi sap xep theo ho
            if(ds_cthd.ds[i]->soluong == ds_cthd.ds[j]->soluong)
            {
                if(ds_cthd.ds[i]->thanhtien < ds_cthd.ds[j]->thanhtien)
                {
                    hoavi_2hoadon(ds_cthd.ds[i],ds_cthd.ds[j]);
                }
            }
        }

    }
}
void gop_ds_hoadon(ds_chitiethoadon &ds_cthd)
{
    for (int i=0;i<ds_cthd.sl;i++)
    {
        for(int j=i+1; j<ds_cthd.sl; j++)
        {
            if(ds_cthd.ds[i]->ma_dt == ds_cthd.ds[j]->ma_dt)
            {
                ds_cthd.ds[i]->soluong = ds_cthd.ds[i]->soluong + ds_cthd.ds[j]->soluong;
                ds_cthd.ds[i]->thanhtien = ds_cthd.ds[i]->thanhtien + ds_cthd.ds[j]->thanhtien;
                ds_cthd.ds[j]->soluong = 0;
                ds_cthd.ds[j]->thanhtien = 0;
            }
        }
    }
}

void loc_ds_laphoadon(ds_chitiethoadon ds_cthd)
{
    {
        cout<<"===============================================================================" <<endl;
        cout<<"|                           Danh Sach DT Ban Chay                             |" <<endl;
        cout<<"===============================================================================" <<endl;
        cout<<"|  Ma DT | |      Ten Dien Thoai      | | So Luong | | Don gia | | Thanh Tien |" <<endl;
        cout<<"|-----------------------------------------------------------------------------|" <<endl;
        for(int i=0;i<ds_cthd.sl;i++)
        {
        cout<<"| "<<setw(7)<<left<<ds_cthd.ds[i]->ma_dt<<"| ";
        cout<<"| "<<setw(25)<<left<<ds_cthd.ds[i]->ten_dt<<"| ";
        cout<<"| "<<setw(9)<<left<<ds_cthd.ds[i]->soluong<<"| ";
        cout<<"| "<<setw(8)<<left<<ds_cthd.ds[i]->dongia<<"| ";
        cout<<"| "<<setw(11)<<left<<ds_cthd.ds[i]->thanhtien<<"| "<<endl;      
        }
        int sum=0;
        for(int i=0;i<ds_cthd.sl;i++)
        {
           sum+= ds_cthd.ds[i]->thanhtien;
        }
        cout<<"===============================================================================" <<endl;
        cout<<"|                     Tong doanh thu: "<<setw(15)<<left<<sum<<"                         |"<<endl;
        cout<<"=====================================END=======================================" <<endl;
    }
}