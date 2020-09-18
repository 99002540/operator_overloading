  
#include<iostream>

#include "operator.h"
using namespace std;
int main()
{
A a1(1,2),a2(1,3);
A a3{a1+a2};
return 0;
}
