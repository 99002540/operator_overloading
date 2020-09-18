#ifndef OPERATOR_H_INCLUDED
#define OPERATOR_H_INCLUDED
#include<iostream>
using namespace std;
class A{
public:
 int x;
 int y;
 public:
 A (){
     }
 A(int x,int y):x{x},y{y}{ }
 A(int x):x{x}{}
          
 //Addition operator
 A operator+(A& z);

//subtractor operator

 //  friend A operator-(A& ,A&);
//Multiplication operator

 //  friend A operator*(A& ,A&);
  
//Division operator
 //friend A operator/(A& ,A&);
  
// Modulation
//Division operator
 //friend A operator%(A& ,A&);
   
 

};




#endif // OPERATOR_H_INCLUDED
