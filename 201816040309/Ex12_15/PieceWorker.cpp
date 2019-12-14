 #include <iostream>
 #include "PieceWorker.h"
 using namespace std;
 PieceWorker::PieceWorker(const string &first, const string &last,
    const string &ssn,double wage1,int piece)
    :Employee( first, last, ssn )
    {
        if(wage1 > 0)
            wage = wage1;
        else
            throw invalid_argument( "wage must be >= 0.0" );
        if(piece > 0)
        {
            pieces = piece;
        }
        else
            throw invalid_argument("pieces mush be >= 0");
    }
double PieceWorker::earnings() const
{
    return wage*pieces;
}
void PieceWorker::print() const
 {
    cout << "salaried employee: ";
    Employee::print(); // reuse abstract base-class print function
 } // end function print
