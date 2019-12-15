#pragma once 
#include<iostream>
#include <string>
#include "Employee.h"
using namespace std;
class PieceWorker : public Employee
{
public:
    PieceWorker(const std::string &, const std::string &,
                const std::string &, int = 0, int = 0);
    double earnings() const;
    void print() const;
    void setWage(int wage);
    int getWage() const;
    void setPieces(int pieces);
    int getPieces() const;

private:
    int wage;
    int pieces;
};
