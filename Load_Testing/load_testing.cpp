#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

double log(double a, double b)
{
    return log(a)/log(b);
}

int main()
{
	FILE *fin,*fout;
	fin = fopen("large_in.txt","r");
	fout = fopen("large_out.txt","w");
    double L,P,C;
    int T,t;
    fscanf(fin,"%d",&T);
    //cin>>T;
    for(t=1;t<=T;t++)
    {
        //cin>>L>>P>>C;
		fscanf(fin,"%lf %lf %lf",&L,&P,&C);
        double a = log(log(P/L,C),2);
        int ai = a;
        while(ai < a) ai++;
        ai = max(ai, 0);
        //cout<<"Case #"<<t<<": "<<a_int<<endl;
        fprintf(fout,"Case #%d: %d\n",t,ai);
	}
	fclose(fin);
	fclose(fout);
}
