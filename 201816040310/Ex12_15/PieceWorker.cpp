#include "PieceWorker.h"

PieceWorker::PieceWorker(const string &first, const string &last,
                         const string &ssn, int wage, int pieces) : Employee(first, last, ssn),
                                                                    wage(wage), pieces(pieces)
{
}

void PieceWorker::print() const
{
    cout << "pieceWorker employee: ";
    Employee::print(); // reuse abstract base-class print function
    cout << "\nWage: " << getWage() << "; Pieces: " << getPieces();
}

double PieceWorker::earnings() const
{
    return 1.0 * wage * pieces;
}



void PieceWorker::setPieces(int pieces)
{
    this->pieces = pieces;
}

void PieceWorker::setWage(int wage)
{
    this->wage = wage;
}

int PieceWorker::getPieces() const
{
    return pieces;
}

int PieceWorker::getWage() const
{
    return wage;
}