#include<iostream>
#include<cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
unsigned long long int na=1000,nb=10000,nc=100000,nd=1000000;
long long int A[1000],B[10000],C[100000],D[1000000],IA,IB,IC,ID,RA,RB,RC,RD;
int random,uniqueflag;
float start_a1,stop_a1,start_b1,stop_b1,start_c1,stop_c1,start_d1,stop_d1;

int for_A()
{
    for(int i=0; i<na; i++)
    {
        do
        {
            uniqueflag = 1;
            random = rand();
            for (int j=0; j<i && uniqueflag==1; j++)
            {
                if (A[j]==random)
                {
                    uniqueflag=0;
                }
            }
        }
        while (uniqueflag!=1);
        A[i]=random;
    }
    int temp;
    for(int i=0; i<na; i++)
    {
        for(int j=i+1; j<na; j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
        cout << A[i] << "\n";
    }
start_a1=clock();
    RA=rand();
    for(int i=0; i<na; i++)
    {
        if(A[i]==RA)
        {
            IA=i;
            cout<<"For set A: Random number "<<RA<<" found in Index "<<IA<<endl;
        }
    }
    cout<<"For set A: Random number "<<RA<<" not found."<<endl;
    stop_a1=clock();
}
int for_B()
{
    for(int i=0; i<nb; i++)
    {
        do
        {
            uniqueflag = 1;
            random = rand();
            for (int j=0; j<i && uniqueflag==1; j++)
            {
                if (B[j]==random)
                {
                    uniqueflag=0;
                }
            }
        }
        while (uniqueflag!=1);
        B[i]=random;
    }
    int temp;
    for(int i=0; i<nb; i++)
    {
        for(int j=i+1; j<nb; j++)
        {
            if(B[i]>B[j])
            {
                temp=B[i];
                B[i]=B[j];
                B[j]=temp;
            }
        }
        cout << B[i] << "\n";
    }
    start_b1=clock();
    RB=rand();
    for(int i=0; i<nb; i++)
    {
        if(B[i]==RB)
        {
            IB=i;
             cout<<"For set B: Random number "<<RB<<" found in Index "<<IB<<endl;
        }
    }
     cout<<"For set B: Random number "<<RB<<" not found."<<endl;
     stop_b1=clock();
}
int for_C()
{
    for(long long i=0; i<nc; i++)
    {
        do
        {
            uniqueflag = 1;
            random = (rand()*rand());
            for (long long j=0; j<i && uniqueflag==1; j++)
            {
                if (C[j]==random)
                {
                    uniqueflag=0;
                }
            }
        }
        while (uniqueflag!=1);
        C[i]=random;
    }
    int temp;
    for(int i=0; i<nc; i++)
    {
        for(int j=i+1; j<nc; j++)
        {
            if(C[i]>C[j])
            {
                temp=C[i];
                C[i]=C[j];
                C[j]=temp;
            }
        }
        cout << C[i] << "\n";
    }
    start_c1=clock();
    RC=(rand()*rand());
    for(int i=0; i<nc; i++)
    {
        if(C[i]==RC)
        {
            IC=i;
            cout<<"For set C: Random number "<<RC<<" found in Index "<<IC<<endl;
        }
    }
     cout<<"For set C: Random number "<<RC<<" not found."<<endl;
     stop_c1=clock();
}
int for_D()
{
    for(long long i=0; i<nd; i++)
    {
        do
        {
            uniqueflag = 1;
            random = (rand()*rand());
            for (long long j=0; j<i && uniqueflag==1; j++)
            {
                if (D[j]==random)
                {
                    uniqueflag=0;
                }
            }
        }
        while (uniqueflag!=1);
        D[i]=random;
        cout<<D[i]<<"\t\t"<<i<<endl;
    }
    int temp;
    for(int i=0; i<nd; i++)
    {
        for(int j=i+1; j<nd; j++)
        {
            if(D[i]>D[j])
            {
                temp=D[i];
                D[i]=D[j];
                D[j]=temp;
            }
        }
        cout << D[i] << "\n";
    }
    start_d1=clock();
    RD=(rand()*rand());
    for(int i=0; i<nd; i++)
    {
        if(D[i]==RD)
        {
            ID=i;
           cout<<"For set D: Random number "<<RD<<" found in Index "<<ID<<endl;
        }
    }
     cout<<"For set D: Random number "<<RD<<" not found."<<endl;
    stop_d1=clock();
}
main()
{
    for_A();
    cout << "Time for Array Size "<<na<<" in ns: " << (stop_a1-start_a1)/double(CLOCKS_PER_SEC)*1000000000<< endl;
    for_B();
    cout << "Time for Array Size "<<nb<<" in ns: " << (stop_b1-start_b1)/double(CLOCKS_PER_SEC)*1000000000<< endl;
    for_C();
    cout << "Time for Array Size "<<nc<<" in ns: " << (stop_c1-start_c1)/double(CLOCKS_PER_SEC)*1000000000<< endl;
    for_D();
    cout << "Time for Array Size "<<nd<<" in ns: " << (stop_d1-start_d1)/double(CLOCKS_PER_SEC)*1000000000<< endl;

}


