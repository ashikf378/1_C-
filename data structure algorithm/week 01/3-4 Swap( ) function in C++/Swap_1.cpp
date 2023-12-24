#include <iostream>
using namespace std;

int main ()
{
int a[]={2,33,8,6,7},n=5;
for (int i = 0; i<n;i++)
{


    for (int j=i+1;j<n;j++)

    {

        if (a[i]>a[j])

        {

            int tmp =a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
}

for (int i=0;i<n;i++)
{

    cout<<a[i]<<" ";
}

return 0;
} 