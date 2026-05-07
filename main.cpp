#include <iostream>
#include "CMatrix.h"
#include "CVector.h"

using namespace std;

int main() {
    CMatrix m1, m2;

    cout << "Ma tran 1" << endl;
    cin >> m1;

    cout << "\nMa tran 2" << endl;
    cin >> m2;

    cout << "\nMa tran 1 vua nhap:" << endl;
    cout << m1;

    cout << "Ma tran 2 vua nhap:" << endl;
    cout << m2;

    cout << "\nPhep nhan hai ma tran" << endl;
    CMatrix tichMaTran = m1 * m2;
    cout << "Ket qua:" << endl;
    cout << tichMaTran;

    cout << "\nPhep nhan ma tran voi vector" << endl;
    CVector v;
    cin >> v;

    cout << "Vector vua nhap: " << v << endl;

    CVector tichMaTranVector = m1 * v;
    cout << "Ket qua:" << endl;
    cout << tichMaTranVector << endl;

    return 0;
}
