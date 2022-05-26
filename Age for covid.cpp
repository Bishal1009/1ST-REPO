/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the age ";
    cin>>n;
    if(n<18)
    {
        cout<<"Minor not eligible";
    }
    else if(n>18 && n<60)
    {
        cout<<"Eligible for vaccination with least priority";;
    }
    else
    {
        cout<<"Eligible for vaccination with highest priority";
    }
    
    
    return 0;
}
