#pragma once
#include"CTDL.h"
void chuanhoachu(string &a)
{
    //xu li khoang trang dau
    while(a[0] == ' ')
    {
        a.erase(a.begin()+0);
    }
    //xu li khoang trang cuoi
    while (a[a.length()-1]==' ')
    {
        a.erase(a.begin() + a.length()-1);
    }
    //xoa khoang trang giua
    for (int i=0;i<a.length();i++)
    {
        if(a[i]==' '&& a[i+1]==' ' )
        {
            a.erase(a.begin()+i);
            i--;
        }
    }
    //chuan hoa chu
    if(a[0]>=97 && a[0]<=122)//khoang chu thuong
    {
        a[0]-=32;
    }
    for (int i=1;i<a.length();i++)
    {
        if(a[i]==' ')
        {
            i++;
            if(a[i]>=97 && a[i]<=122)//khoang chu thuong
            {
                a[i]-=32;
            }       
        }else//khong co khoang trang
        {
            if(a[i]>=65 && a[i]<=90)//khoang chu thuong
            {
                a[i]+=32;
            } 
        }
    }
}

nhanvien* Khoitao_node_nhanvien()
{
    nhanvien*p= new nhanvien;
    p->pleft=NULL;
    p->pright=NULL;
    return p;
}

void them_1_nhanvien(nhanvien* &t,nhanvien *p)
{
    if(t==NULL)
    {
        t=p;
    }
    else
    {
        if(p->ma_nv > t->ma_nv)
        {
            them_1_nhanvien(t->pright,p);
        }else 
        if(p->ma_nv < t->ma_nv)
        {
            them_1_nhanvien(t->pleft,p);
        }
    }
}