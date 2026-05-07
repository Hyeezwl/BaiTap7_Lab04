#include "CMatrix.h"
#include <iostream>
using namespace std;

CMatrix::CMatrix()
{
    iDong = 0;
    iCot = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            iGiaTri[i][j] = 0;
        }
    }
}

CMatrix::~CMatrix()
{
}
//thanh phan i cua Vector ket qua bang tong cac tich cua phan tu tren dong i cua Ma tran voi thanh phan tuong ung cua Vector
CVector CMatrix::operator*(CVector v) {
    CVector ketQua;
    ketQua.iSoChieu = iDong;

    for (int i = 0; i < iDong; i++) {
        ketQua.iThanhPhan[i] = 0;
        for (int j = 0; j < iCot; j++) {
            ketQua.iThanhPhan[i] += iGiaTri[i][j] * v.iThanhPhan[j];
        }
    }
    return ketQua;
}

CMatrix CMatrix::operator*(CMatrix m2) {
    CMatrix ketQua;
    ketQua.iDong = iDong;
    ketQua.iCot = m2.iCot;

    for (int i = 0; i < ketQua.iDong; i++) {
        for (int j = 0; j < ketQua.iCot; j++) {
            ketQua.iGiaTri[i][j] = 0;
            for (int k = 0; k < iCot; k++) {
                ketQua.iGiaTri[i][j] += iGiaTri[i][k] * m2.iGiaTri[k][j];
            }
        }
    }
    return ketQua;
}

istream& operator>>(istream& is, CMatrix& m) {
    cout << "Nhap so dong: ";
    is >> m.iDong;
    cout << "Nhap so cot: ";
    is >> m.iCot;

    for (int i = 0; i < m.iDong; i++) {
        for (int j = 0; j < m.iCot; j++) {
            cout << "Phan tu [" << i << "][" << j << "]: ";
            is >> m.iGiaTri[i][j];
        }
    }
    return is;
}

ostream& operator<<(ostream& os, CMatrix m) {
    for (int i = 0; i < m.iDong; i++) {
        for (int j = 0; j < m.iCot; j++) {
            os << m.iGiaTri[i][j] << "\t";
        }
        os << endl;
    }
    return os;
}
