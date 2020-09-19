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
 //printing
  /* friend void print();
   
    friend bool operator==(A&,A&);
//unequal
    friend bool operator!=(A&,A&);
//pre increment
      friend void operator++(A&);
       //post inc
       friend void operator++(int A& );
       
       //pre dec
      friend  void operator--(A& );
       //post dec
       friend void operator--(int A&);
       friend A operator-(A&);
       //display
       friend void display();
       //greater
      friend  bool operator>(A&,A&);
       //less
      friend bool operator<(A&,A&);*/


   
 

};




#endif // OPERATOR_H_INCLUDED
