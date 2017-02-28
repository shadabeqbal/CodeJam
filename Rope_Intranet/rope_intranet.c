#include<stdio.h>
#include<math.h>
int main()
{
	FILE *fin,*fout;
	fin = fopen("large_in.txt","r");
	fout = fopen("large_out.txt","w");
	
	int t,wires;
	fscanf(fin,"%d",&t);
	for(int i=0;i<t;i++)
	{
		
		int flag=0;
		fscanf(fin,"%d",&wires);
		int a[wires],b[wires];
		
		
		for(int j=0;j<wires;j++){
			fscanf(fin,"%d %d",&a[j],&b[j]);
			
		}
		
		
		
		for(int x=0;x<wires;x++)
		{
			for(int y=x+1;y<wires;y++)
			{
				
				if((a[x] < a[y] && b[x] > b[y] && wires!=1) || (a[x] > a[y] && b[x] < b[y] && wires!=1)){
					flag++;
					
				}
				
		
			}
		}
		
		fprintf(fout,"Case #%d: %d\n",i+1,flag);
		flag=0;
	}
}


