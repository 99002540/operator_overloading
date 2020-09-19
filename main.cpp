  
#include<iostream>

#include "operator.h"
using namespace std;
int main()
{
A a1(1,2),a2(1,3);
A a3{a1+a2};
  a7.print();
a3.print();
a6.print();
A b1(4),b2(5);
if(a1==a2){
    cout<<"equal"<<endl;
}
else  {
    cout<<" Not equal"<<endl;
}
   A o1(4),o3(3);
    ++o1;
    o1.display();
    o1++;
    o1.display();
    --o1;
    o1.display();
    o1--;
    o1.display();
    A o2=-o1;
    o2.display();
if(o1>o3){
    cout<<"o1 is greater";
}
else{
    cout<<"o2 is greater";
}
}





return 0;
}
