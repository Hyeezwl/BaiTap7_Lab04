#include "CVector.h"

CVector::CVector() {
    iSoChieu = 0;
    for (int i = 0; i < 100; i++) {
        iThanhPhan[i] = 0;
    }
}

CVector::~CVector() {
}

CVector CVector::operator+(CVector v2) {
    CVector ketQua;
    if (iSoChieu > v2.iSoChieu) {
        ketQua.iSoChieu = iSoChieu;
    } else {
        ketQua.iSoChieu = v2.iSoChieu;
    }

    for (int i = 0; i < ketQua.iSoChieu; i++) {
        ketQua.iThanhPhan[i] = iThanhPhan[i] + v2.iThanhPhan[i];
    }
    return ketQua;
}

CVector CVector::operator-(CVector v2) {
    CVector ketQua;
    if (iSoChieu > v2.iSoChieu) {
        ketQua.iSoChieu = iSoChieu;
    } else {
        ketQua.iSoChieu = v2.iSoChieu;
    }

    for (int i = 0; i < ketQua.iSoChieu; i++) {
        ketQua.iThanhPhan[i] = iThanhPhan[i] - v2.iThanhPhan[i];
    }
    return ketQua;
}

double CVector::operator*(CVector v2) {
    double tichVoHuong = 0;
    int soChieuChung = iSoChieu;
    if (v2.iSoChieu < soChieuChung) {
        soChieuChung = v2.iSoChieu;
    }
    for (int i = 0; i < soChieuChung; i++) {
        tichVoHuong = tichVoHuong + (iThanhPhan[i] * v2.iThanhPhan[i]);
    }
    return tichVoHuong;
}

istream& operator>>(istream& is, CVector& v) {
    cout << "Nhap so chieu cua vector: ";
    is >> v.iSoChieu;
    cout << "Nhap cac thanh phan lan luot: ";
    for (int i = 0; i < v.iSoChieu; i++) {
        is >> v.iThanhPhan[i];
    }
    return is;
}

ostream& operator<<(ostream& os, CVector v) {
    os << "(";
    for (int i = 0; i < v.iSoChieu; i++) {
        os << v.iThanhPhan[i];
        if (i < v.iSoChieu - 1) {
            os << ", ";
        }
    }
    os << ")";
    return os;
}
