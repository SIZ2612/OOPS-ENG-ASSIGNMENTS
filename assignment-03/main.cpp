#include <iostream>
using namespace std;
void accept(int&,int[]);
void bubblesort(int ,int[]);
void display(int,int[]);
void swap( int &, int &);
int main()
{
    int n, arr[10];
    accept(n, arr);
    display(n, arr);
    bubblesort(n ,arr);
    display(n ,arr);
   
    return 0;
}
void swap(int & a, int & b)
{ int temp=a;
 a=b;
 b=temp;
}
void bubblesort(int k, int ar1[])
{
    for(int i=0; i<k-1; i++)
    {for(int j=0; j<k-i-1; j++)
    if(ar1[j]>ar1[j+1])
    swap(ar1[j],ar1[j+1]);
   
    }
}
void accept(int&a, int b[])
{
    cout<<" \n Enter no. of array elements:";
    cin>>a;
    cout<<" \n Enter array elements:\n";
    for(int i=0;i<a;i++)
    cin>>b[i];
   
}
void display(int a,int b[])
{
    cout<<"Array elements are:\n";
    for (int i =0;i<a;i++)
    {
    cout<<b[i]<<endl;
    }
}
