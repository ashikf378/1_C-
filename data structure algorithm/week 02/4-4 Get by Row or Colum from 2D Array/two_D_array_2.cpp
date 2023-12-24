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

int req_row;
cin>>req_row;
for (j=0;j<col;j++)
{

    cout<<a[req_row][j]<< " ";
}
return 0;

cout<<endl;


}