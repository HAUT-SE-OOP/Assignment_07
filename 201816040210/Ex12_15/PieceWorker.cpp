#include<bits/stdc++.h>
using namespace std;
#include"PieceWorker.h"

PieceWorker::PieceWorker( const string &a, const string &b, const string &c, int p, int w )//constructor function
    :Employee( a, b, c )
{
    setWage( w );
    setPieces( p );
}

//set pieces
void PieceWorker::setPieces( int p )
{
    pieces=p;
}//end function

//get pieces
int PieceWorker::getPieces()const
{
    return pieces;
}//end function

//set wage
void PieceWorker::setWage( int w )
{
    if( w>=0 )//judge if w >= 0
        wage = w;
    else
        throw invalid_argument( "wage must be >= 0" );
}//end function

//get wage
int PieceWorker::getWage()const
{
    return wage;
}//end function

//function to calculate earnings
double PieceWorker::earnings()const
{
    return getWage()*getPieces();
}//end function

//function to print object
void PieceWorker::print()const
{
    cout<<"piece employee: ";
    Employee::print();
    cout<<"pieces: "<<getPieces()<<"; wage: "<<getWage()<<endl;
}//end function
