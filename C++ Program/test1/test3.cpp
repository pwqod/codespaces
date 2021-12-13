#include <iostream>
using namespace std;
int main()
{
    cout << "Hello world" << endl;
    int j;
    for (j = 0; j <= 5; j++)
    {
        j=j+1;
    }
    cout<<"j="<< j <<endl;

    int i,sum;

    sum=0;

    for(i=1;i<=10;i++)
    {
        sum+=i;
    }

    cout<<"1+2+3+……+10="<<sum<<endl;

    return 0;
}