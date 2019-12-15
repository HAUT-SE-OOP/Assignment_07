#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
class PieceWorker:public Employee
{
public:
    PieceWorker(string,string,string,double = 0,double = 0);
    double getwage();
    double getpieces();
    double earnings();
    void print();
private:
    double wage;
    double pieces;

};

#endif // PIECEWORKER_H_INCLUDED
