#include <iostream>
using namespace std;
int d;
long a,b;
int main()
{
    cin>>d;
    for (int i=0; i<d; i++)
    {
        cin>>a>>b;
        if (a%10==1) cout<<a%10<<endl;
        if (a%10==5) cout<<a%10<<endl;
        if (a%10==6) cout<<a%10<<endl;
        if (a%10==0) cout<<a%10<<endl;

        if (b%4==1)
        {
            if (a%10==2) cout<<a%10<<endl;
            if (a%10==3) cout<<a%10<<endl;
            if (a%10==4) cout<<a%10<<endl;
            if (a%10==7) cout<<a%10<<endl;
            if (a%10==8) cout<<a%10<<endl;
            if (a%10==9) cout<<a%10<<endl;
        }
        if (b%4==2)
        {
            if (a%10==2) cout<<a%10+2<<endl;
            if (a%10==3) cout<<a%10+6<<endl;
            if (a%10==4) cout<<a%10+8<<endl;
            if (a%10==7) cout<<a%10+2<<endl;
            if (a%10==8) cout<<a%10-4<<endl;
            if (a%10==9) cout<<a%10-8<<endl;
        }
        if (b%4==3)
        {
            if (a%10==2) cout<<a%10+6<<endl;
            if (a%10==3) cout<<a%10+4<<endl;
            if (a%10==4) cout<<a%10<<endl;
            if (a%10==7) cout<<a%10-4<<endl;
            if (a%10==8) cout<<a%10-6<<endl;
            if (a%10==9) cout<<a%10<<endl;
        }
        if (b%4==0)
        {
            if (a%10==2) cout<<a%10+4<<endl;
            if (a%10==3) cout<<a%10-2<<endl;
            if (a%10==4) cout<<a%10+2<<endl;
            if (a%10==7) cout<<a%10-6<<endl;
            if (a%10==8) cout<<a%10-2<<endl;
            if (a%10==9) cout<<a%10-8<<endl;
        }
    }
    return 0;
}
