#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{

int row, col ,i ,j;

cin >> row>>col;

int a[row][col];
for ( i=0; i<row ; i++)
{
    for (j=0;j<col; j++)
    {

        cin>>a[i][j];
    }
}

int sum=0;
for ( i=0; i<row ; i++)
{
    for (j=0;j<col; j++)
    {

       if(i==j)
       {

        sum += a[i][j];
     
       }
    }
   
}
cout<<sum;
return 0;




}