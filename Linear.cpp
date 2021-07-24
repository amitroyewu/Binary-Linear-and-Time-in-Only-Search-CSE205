#include<iostream>
#include<cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
unsigned long long int na=1000,nb=10000,nc=100000,nd=1000000;
long long int A[1000],B[10000],C[100000],D[1000000],IA,IB,IC,ID;
int random,uniqueflag;

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

    int RA;
    RA=rand();
    for(int i=0; i<na; i++)
    {
        if(A[i]==RA)
        {
            IA=i;
           return 1;
        }
    }
    return 0;
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

    int RB;
    RB=rand();
    for(int i=0; i<nb; i++)
    {
        if(B[i]==RB)
        {
            IB=i;
            return 1;
        }
    }
    return 0;
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

    int RC;
    RC=(rand()*rand());
    for(int i=0; i<nc; i++)
    {
        if(C[i]==RC)
        {
            IC=i;
            return 1;
        }
    }
    return 0;
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

    int RD;
    RD=(rand()*rand());
    for(int i=0; i<nd; i++)
    {
        if(D[i]==RD)
        {
            ID=i;
            return 1;
        }
    }
    return 0;
}
main()
{
    double start_a1=clock();
    if(for_A()==1)
    {
        cout<<"RA found in Index "<<IA<<endl;
    }
    else
        cout<<"RA not found"<<endl;
        double stop_a1=clock();
        double start_b1=clock();
    if(for_B()==1)
    {
        cout<<"RB found in Index "<<IB<<endl;
    }
    else
        cout<<"RB not found"<<endl;
        double stop_b1=clock();
        double start_c1=clock();
    if(for_C()==1)
    {
        cout<<"RC found in Index "<<IC<<endl;
    }
    else
        cout<<"RC not found"<<endl;
        double stop_c1=clock();
        double start_d1=clock();
        if(for_D()==1)
    {
        cout<<"RD found in Index "<<ID<<endl;
    }
    else
        cout<<"RD not found"<<endl;
        double stop_d1=clock();

cout << "Time for Array Size "<<na<<" in ns: " << (stop_a1-start_a1)/double(CLOCKS_PER_SEC)*1000000000<< endl;
cout << "Time for Array Size "<<nb<<" in ns: " << (stop_b1-start_b1)/double(CLOCKS_PER_SEC)*1000000000<< endl;
cout << "Time for Array Size "<<nc<<" in ns: " << (stop_c1-start_c1)/double(CLOCKS_PER_SEC)*1000000000<< endl;
cout << "Time for Array Size "<<nd<<" in ns: " << (stop_d1-start_d1)/double(CLOCKS_PER_SEC)*1000000000<< endl;

}


