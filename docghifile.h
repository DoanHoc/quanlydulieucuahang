#pragma once
#include"chuanhoachu.h"
// ==========Doc file ds dien thoai=======//
void docfile_ds_dienthoai(ds_dienthoai &ds_dt)
{
    ifstream filein;
    filein.open("ds_dt.txt",ios_base::in);//mo file
    while (filein.eof() != true)//doc den cuoi file thi dung
    {
        ds_dt.ds[ds_dt.sl]= new dienthoai; //tao vung nho
        getline(filein,ds_dt.ds[ds_dt.sl]->ma_dt,',');//doc ma dt den dau , thi dung
        chuanhoachu(ds_dt.ds[ds_dt.sl]->ma_dt);
        getline(filein,ds_dt.ds[ds_dt.sl]->ten_dt,',');//doc ten dt den dau , thi dung
        chuanhoachu(ds_dt.ds[ds_dt.sl]->ten_dt);
        getline(filein,ds_dt.ds[ds_dt.sl]->don_vi_tinh,',');//doc don vi tinh den dau , thi dung
        chuanhoachu(ds_dt.ds[ds_dt.sl]->don_vi_tinh);
        filein>>ds_dt.ds[ds_dt.sl]->so_luong_ton;//doc so 
        filein.ignore();// bo ,
        filein>>ds_dt.ds[ds_dt.sl]->gianhap;//doc so
        filein.ignore();// bo ,
        filein>>ds_dt.ds[ds_dt.sl]->giaxuat;//doc so 
        filein.ignore();// bo ,
        filein>>ds_dt.ds[ds_dt.sl]->kt;
        filein.ignore();// bo \n
        ds_dt.sl++;
    }
    filein.close();
}
// ==========Doc file ds nhan vien=======//
void docfile_ds_nhanvien(ds_nhanvien &ds_nv)
{
    ifstream filein;
    filein.open("ds_nv.txt",ios_base::in);//mo file
    while (filein.eof() != true)//doc den cuoi file thi dung
    {
        nhanvien *x=Khoitao_node_nhanvien(); //tao vung nho
        filein>> x->ma_nv;//lay dc ma nhan vien
        filein.ignore();//bo qua dau ,
        getline(filein,x->ho,',');
        chuanhoachu(x->ho);
        getline(filein,x->ten,',');
        chuanhoachu(x->ten);
        getline(filein,x->gioitinh,'\n');
        chuanhoachu(x->gioitinh);
        them_1_nhanvien(ds_nv.tree,x);
        ds_nv.sl++;
    }
    filein.close();
}
void docfile_ds_hoadon(ds_chitiethoadon &ds_cthd)
{
    ifstream filein;
    filein.open("ds_cthd.txt",ios_base::in);//mo file
    while (filein.eof() != true)//doc den cuoi file thi dung
    {
        ds_cthd.ds[ds_cthd.sl]= new chitiethoadon;
        getline(filein,ds_cthd.ds[ds_cthd.sl]->ho_nhanvien,',');//doc ma dt den dau , thi dung
        chuanhoachu(ds_cthd.ds[ds_cthd.sl]->ho_nhanvien);
        getline(filein,ds_cthd.ds[ds_cthd.sl]->ten_nhanvien,',');//doc ten dt den dau , thi dung
        chuanhoachu(ds_cthd.ds[ds_cthd.sl]->ten_nhanvien);
        getline(filein,ds_cthd.ds[ds_cthd.sl]->ngaylap,',');//doc don vi tinh den dau , thi dung
        chuanhoachu(ds_cthd.ds[ds_cthd.sl]->ngaylap);
        getline(filein,ds_cthd.ds[ds_cthd.sl]->sohd,',');//doc don vi tinh den dau , thi dung
        chuanhoachu(ds_cthd.ds[ds_cthd.sl]->sohd);
        getline(filein,ds_cthd.ds[ds_cthd.sl]->ma_dt,',');//doc don vi tinh den dau , thi dung
        chuanhoachu(ds_cthd.ds[ds_cthd.sl]->ma_dt);
        getline(filein,ds_cthd.ds[ds_cthd.sl]->ten_dt,',');//doc don vi tinh den dau , thi dung
        chuanhoachu(ds_cthd.ds[ds_cthd.sl]->ten_dt);
        filein>>ds_cthd.ds[ds_cthd.sl]->soluong;//doc so 
        filein.ignore();// bo ,
        filein>>ds_cthd.ds[ds_cthd.sl]->dongia;//doc so 
        filein.ignore();// bo ,
        filein>>ds_cthd.ds[ds_cthd.sl]->thanhtien;//doc so 
        filein.ignore();// bo ,
        ds_cthd.sl++;
    }
    filein.close();
}
// doc file 11. loc file
void docfile_ds_hoadon(ds_chitiethoadon_loc &ds_cthdloc)
{
    ifstream filein;
    filein.open("ds_cthd.txt",ios_base::in);//mo file
    while (filein.eof() != true)//doc den cuoi file thi dung
    {
        ds_cthdloc.ds[ds_cthdloc.sl]= new chitiethoadon_loc;
        getline(filein,ds_cthdloc.ds[ds_cthdloc.sl]->ho_nhanvien,',');//doc ma dt den dau , thi dung
        chuanhoachu(ds_cthdloc.ds[ds_cthdloc.sl]->ho_nhanvien);
        getline(filein,ds_cthdloc.ds[ds_cthdloc.sl]->ten_nhanvien,',');//doc ten dt den dau , thi dung
        chuanhoachu(ds_cthdloc.ds[ds_cthdloc.sl]->ten_nhanvien);
        getline(filein,ds_cthdloc.ds[ds_cthdloc.sl]->ngaylap,',');//doc don vi tinh den dau , thi dung
        chuanhoachu(ds_cthdloc.ds[ds_cthdloc.sl]->ngaylap);
        getline(filein,ds_cthdloc.ds[ds_cthdloc.sl]->sohd,',');//doc don vi tinh den dau , thi dung
        chuanhoachu(ds_cthdloc.ds[ds_cthdloc.sl]->sohd);
        getline(filein,ds_cthdloc.ds[ds_cthdloc.sl]->ma_dt,',');//doc don vi tinh den dau , thi dung
        chuanhoachu(ds_cthdloc.ds[ds_cthdloc.sl]->ma_dt);
        getline(filein,ds_cthdloc.ds[ds_cthdloc.sl]->ten_dt,',');//doc don vi tinh den dau , thi dung
        chuanhoachu(ds_cthdloc.ds[ds_cthdloc.sl]->ten_dt);
        filein>>ds_cthdloc.ds[ds_cthdloc.sl]->soluong;//doc so 
        filein.ignore();// bo ,
        filein>>ds_cthdloc.ds[ds_cthdloc.sl]->dongia;//doc so 
        filein.ignore();// bo ,
        filein>>ds_cthdloc.ds[ds_cthdloc.sl]->thanhtien;//doc so 
        filein.ignore();// bo ,
        ds_cthdloc.sl++;
    }
    filein.close();
}