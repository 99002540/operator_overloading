
 //Addition operator
   A A::A operator+(A& x,A& y){
    A a4;
    a4.x=x+z.x;
    a4.y=y+z.y;
    return a4;
    }
 A A::A operator-(A& z){
    A a4;
    a4.x=x-z.x;
    a4.y=y-z.y;
    return a4;
    }
     A A::A operator*(A& z){
    A a4;
    a4.x=x*z.x;
    a4.y=y*z.y;
    return a4;
    }
     A A::A operator/(A& z){
    A a4;
    a4.x=x/z.x;
    a4.y=y/z.y;
    return a4;
    }
     A A::A operator+(A& z){
    A a4;
    a4.x=x%z.x;
    a4.y=y%z.y;
    return a4;
    }

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






