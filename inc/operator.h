#ifndef OPERATOR_H_INCLUDED
#define OPERATOR_H_INCLUDED
#include<iostream>
using namespace std;
class A{
 private:
 int x;
 int y;
 public:
 A (){this->x=0;
     this->y=0;
     }
 A(int x,int y){this->x=x;
               this->y=y;
               }
 A(int x):{this->x=x;
          }
 //Addition operator
   friend A operator+(A& ,A&);
   
//subtractor operator

   friend A operator-(A& ,A&);
//Multiplication operator

   friend A operator*(A& ,A&);
  
//Division operator
 friend A operator/(A& ,A&);
  
// Modulation
//Division operator
 friend A operator%(A& ,A&);
   
 //printing
   friend void print();
   
    friend bool operator==(A&,A&);
//unequal
    friend bool operator!=(A&,A&);
//pre increment
      friend void operator++();
       //post inc
       friend void operator++(int );
       
       //pre dec
      friend  void operator--( );
       //post dec
       friend void operator--(int );
       friend A operator-();
       //display
       friend void display();
       //greater
      friend  bool operator>(A&,A&);
       //less
      friend bool operator<(A&,A&);


};


#endif // OPERATOR_H_INCLUDED
