#ifndef CMATRIX_H
#define CMATRIX_H

#include <iostream>
#include "CVector.h"
using namespace std;

class CMatrix
{
    public:
        CMatrix();
        virtual ~CMatrix();

        //thuc hien phep nhan Ma tran (kich thuoc m x n) voi Vector (kich thuoc n x 1)
        //ket qua tra ve la mot Vector moi (kich thuoc m x 1)
        CVector operator*(CVector v);
        CMatrix operator*(CMatrix m2);

        friend istream& operator>>(istream& is, CMatrix& m);
        friend ostream& operator<<(ostream& os, CMatrix m);
    protected:

    private:
        int iDong;
        int iCot;
        double iGiaTri[100][100];
};

#endif // CMATRIX_H
