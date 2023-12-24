#include <iostream>
using namespace std;

int main ()
{

int ar [5] ={5,3,7,4,8},n=5;
int  mn = ar[0];


for (int i = 0; i <n ; i++)


if (ar[i]<mn)
{

    mn =ar[i];
}


cout <<mn<<endl;
return 0;
} 