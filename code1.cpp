#include<iostream>

using namespace std;

struct Sample1
{
                void getx()
                {
                        cin>>x;
                }
                int putx()
                {
                        return x;
                }
                int factorial()
                {
                        int prod=1;
                        for(int i=1; i<=x; i++)
                                prod*=i;
                        return prod;
                }
                private:
                int x;
};

class Sample2
{
        int x;
        public:
                void getx()
                {
                        cin>>x;
                }
                int putx()
                {
                        return x;
                }
                int factorial()
                {
                        int prod=1;
                        for(int i=1; i<=x; i++)
                                prod*=i;
                        return prod;
                }
};

int main()
{
        Sample1 s1;
        Sample2 s2;

        cout<<"Enter the value of x for s1:";
        s1.getx();

        cout<<"Enter the value of x for s2:";
        s2.getx();

        cout<<"\n S1 = "<<s1.putx();
        cout<<"\nFactorial ="<<s1.factorial();
        cout<<"\n S2 = "<<s2.putx();
        cout<<"\nFactorial = "<<s2.factorial();

        return 1;
}

  

