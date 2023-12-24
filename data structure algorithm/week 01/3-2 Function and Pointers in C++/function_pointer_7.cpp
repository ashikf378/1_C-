#include <iostream>
using namespace std;
void addition (int **x)
{


    **x=3400;
}


int main ()
{
int a =10;
int *p = &a;
int **q =&p;


addition(q);
cout<<a<<endl;
} 