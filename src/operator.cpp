


public:
   A(){}
    A(int a,int b):x{a},y{b}{}
    A(int a):x{a}{}
 //Addition operator
    A operator+(A& z){
    A a4;
    a4.x=x+z.x;
    a4.y=y+z.y;
    return a4;
    }
//subtractor operator

    A operator-(A& z){
    A a5;
    a5.x=x-z.x;
    a5.y=y-z.y;
    return a5;
    }
//Multiplication operator

    A operator*(A& z){
    A a8;
    a8.x=x*z.x;
    a8.y=y*z.y;
    return a8;
    }
//Division operator
 A operator/(A& z){
    A a10;
    a10.x=x/z.x;
    a10.y=y/z.y;
    return a10;
    }
// Modulation
//Division operator
 A operator%(A& z){
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
    bool operator==(A &z){
    return (x==z.x&&y==z.y);
    }
//unequal
    bool operator!=(A &z){
    return (x!=z.x||y!=z.y);
    }
//pre increment
      void operator++(){
       x++;
       }
       //post inc
       void operator++(int ){
       x++;
       }
       //pre dec
       void operator--( ){
       x--;
       }
       //post dec
       void operator--(int ){
       x--;
       }
       A operator-(){
       return (-x);
       }
       //display
       void display(){
       cout<<x<<endl;
       }
       //greater
       bool operator>(A &z){
       return (x>z.x);
       }
       //less
       bool operator<(A &z){
       return (x<z.x);
       }



