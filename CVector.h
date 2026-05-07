#ifndef CVECTOR_H
#define CVECTOR_H

#include <iostream>
using namespace std;

class CVector
{
    public:
        CVector();
        virtual ~CVector();

        CVector operator+(CVector v2);
        CVector operator-(CVector v2);
        double operator*(CVector v2);

        friend istream& operator>>(istream& is, CVector& v);
        friend ostream& operator<<(ostream& os, CVector v);

        friend class CMatrix; //cho phep lop CMatrix truy cap vao thuoc tinh private de thuc hien phep nhan Ma tran voi Vector

    protected:

    private:
        int iSoChieu;
        double iThanhPhan[100];
};

#endif // CVECTOR_H
