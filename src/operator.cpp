
  
 //Addition operator
   A operator+(A& z){
    A a4;
    a4.x=x+z.x;
    a4.y=y+z.y;
    return a4;
    }
//subtractor operator

    A A ::operator-(A& z){
    A a5;
    a5.x=x-z.x;
    a5.y=y-z.y;
    return a5;
    }
//Multiplication operator

 A A:: operator*(A& z){
    A a8;
    a8.x=x*z.x;
    a8.y=y*z.y;
    return a8;
    }
//Division operator
A A:: operator/(A& z){
    A a10;
    a10.x=x/z.x;
    a10.y=y/z.y;
    return a10;
    }
// Modulation
//Division operator
 A A ::operator%(A& z){
    A a11;
    a11.x=x%z.x;
    a11.y=y%z.y;
    return a11;
    }

 //printing
 void A::   void print(){
    cout<<x<<" "<<y<<endl;
    }
 //equality
bool A::operator==(A &z){
    return (x==z.x&&y==z.y);
    }
//unequal
    bool A::operator!=(A &z){
    return (x!=z.x||y!=z.y);
    }
//pre increment
      void A:: operator++(){
       x++;
       }
       //post inc
       void A::operator++(int ){
       x++;
       }
       //pre dec
       void A::operator--( ){
       x--;
       }
       //post dec
       void A::operator--(int ){
       x--;
       }
       A::A operator-(){
       return (-x);
       }
       //display
       void A::display(){
       cout<<x<<endl;
       }
       //greater
       bool A:: operator>(A &z){
       return (x>z.x);
       }
       //less
       bool A::operator<(A &z){
       return (x<z.x);
       }



