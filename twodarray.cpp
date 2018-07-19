//to print a 2D array using various functions with different arguments
#include<iostream>
using namespace std;
void func1(int rows,int cols,int (*ptr)[3][3])
{   for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<*(*(*ptr+i)+j)<<" ";
        }
    }
    cout<<endl;
}
void func2(int (*ptr)[3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<*(*(ptr+i)+j)<<" ";
        }
    }
    cout<<endl;
}
void func3(int *ptr,int rows,int cols)
{
    for(int i=0;i<rows*cols;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    func1(3,3,&arr);
   func2(arr,3,3);
    func3(*arr,3,3);
return 0;
}
