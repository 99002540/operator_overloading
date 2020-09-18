
  
 //Addition operator
   A operator+(A& x,A& y){
    A a4;
    a4.x=x+z.x;
    a4.y=y+z.y;
    return a4;
    }
//subtractor operator

    A operator-(A& x,A&y){
    A a5;
    a5.x=x-z.x;
    a5.y=y-z.y;
    return a5;
    }
//Multiplication operator

 A operator*(A& x,A& y){
    A a8;
    a8.x=x*z.x;
    a8.y=y*z.y;
    return a8;
    }
//Division operator
A operator/(A& x,A& y){
    A a10;
    a10.x=x/z.x;
    a10.y=y/z.y;
    return a10;
    }
// Modulation
//Division operator
 A operator%(A& x,A&y){
    A a11;
    a11.x=x%z.x;
    a11.y=y%z.y;
    return a11;
    }

 //printing
 void print(){
    cout<<x<<" "<<y<<endl;
    }
 //equality
bool A::operator==(A &, A&){
    return (x==z.x&&y==z.y);
    }
//unequal
    bool A::operator!=(A &z){
    return (x!=z.x||y!=z.y);
    }
//pre increment
      void A:: operator++(A& x){
       x++;
       }
       //post inc
       void A::operator++(int A& x){
       x++;
       }
       //pre dec
       void A::operator--( A& x){
       x--;
       }
       //post dec
       void A::operator--(int A& x){
       x--;
       }
       A::A operator-(A& x){
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



