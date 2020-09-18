#ifndef OPERATOR_H_INCLUDED
#define OPERATOR_H_INCLUDED
#include<iostream>
using namespace std;

 //Addition operator
    A operator+(A& z);
   
//subtractor operator

    A operator-(A& z);
   
//Multiplication operator

    A operator*(A& z);
  
//Division operator
 A operator/(A& z);
  
// Modulation
//Division operator
 A operator%(A& z);
   
 //printing
    void print();
   
    bool operator==(A &z);
//unequal
    bool operator!=(A &z);
//pre increment
      void operator++();
       //post inc
       void operator++(int );
       
       //pre dec
       void operator--( );
       //post dec
       void operator--(int );
       A operator-();
       //display
       void display();
       //greater
       bool operator>(A &z);
       //less
       bool operator<(A &z);





#endif // OPERATOR_H_INCLUDED
