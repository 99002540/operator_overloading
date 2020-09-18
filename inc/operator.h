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
 A(int x){this->x=x;
          }
 //Addition operator
 friend A operator+(A&,A&);
   
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
 A operator+(A& x,A& y){
    A a4;
    a4.x=x+x;
    a4.y=y+y;
    return a4;
    }



#endif // OPERATOR_H_INCLUDED
