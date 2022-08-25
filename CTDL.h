#pragma once
#include <iostream>
#include <string>
#include <cstdlib>//random
#include <ctime>
#include <conio.h>//_getch()
#include <fstream>
using  namespace std;
// ============danh sach dien thoai===========//

struct dienthoai
{
    string ma_dt;
    string ten_dt;
    string don_vi_tinh;
    float so_luong_ton;
    int gianhap;
    int giaxuat;
    bool kt;//1: da dc lap hoa don 0:chua duoc lap hoa don
};
struct ds_dienthoai
{
    dienthoai *ds[100];
    int sl=0;

};
// ============danh sach chi tiet hoa don===========//
struct chitiethoadon
{   
    string sohd;
    string ten_dt;
    string ma_dt;
    string ngaylap;
    string ho_nhanvien;
    string ten_nhanvien;
    int soluong;
    int thanhtien;
    int doanhthu;
    int dongia;
    bool trangthai;//1: khach mua 0: Khach bao hanh
};
struct ds_chitiethoadon
{
    chitiethoadon *ds[20];
    int sl=0;
};
// ============danh sach chi tiet hoa don loc===========//
struct chitiethoadon_loc
{   
    string sohd;
    string ten_dt;
    string ma_dt;
    string ngaylap;
    string ho_nhanvien;
    string ten_nhanvien;
    int soluong;
    int thanhtien;
    int doanhthu;
    int dongia;
    bool trangthai;//1: khach mua 0: Khach bao hanh
};
struct ds_chitiethoadon_loc
{
    chitiethoadon_loc *ds[20];
    int sl=0;
};
// ============danh sach hoa don===========//(lien ket don)
struct hoadon //node
{
    //data
    string so_hd;
    string ngay_lap_hd;
    char loai; //X: xuat N: Nhap
    //ds chi tiet hoa don
    ds_chitiethoadon danhsach_chitiet_hd;
    //pointer
    hoadon *pNext;
};

struct ds_hoadon // list
{
    hoadon *pHead=NULL;
    hoadon *pTail=NULL;// node cuoi
    int sl=0;
};
// ============danh sach nhan vien===========//(cay nhi phan)
struct nhanvien
{
    //data
    int ma_nv;
    string ho;
    string ten;
    string gioitinh;
    // *dshd
    ds_hoadon danhsach_hd;
    //pointer
    nhanvien *pleft;
    nhanvien *pright;
};
struct ds_nhanvien
{
    nhanvien *tree=NULL;
    int sl=0;
};

