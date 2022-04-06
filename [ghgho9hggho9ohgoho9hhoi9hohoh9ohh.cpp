#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

const int N=10;

void minimaks(int A[], int &mini, int &maks)
{
	
	int krok=0;
	int ez;
	if (A[0]>A[1])
	{
		mini=A[1]; maks=A[0];
	}
	else
	{
	mini=A[0]; maks=A[1];
	}
	for (int i=2; i<N-1; i+=2, 	ez = i)
		if (A[i]>A[i+1])
		{
			if (A[i+1]<mini) mini=A[i+1];
			if (A[i]>maks) maks=A[i];
			krok++;
		}
		else
		{
			if (A[i]<mini) mini=A[i];
			if (A[i+1]>maks) maks=A[i+1];
						krok++;

 		}
 	
	// ---------------------------------
		if (A[ez+1]>maks )				krok++;		 maks=A[ez+1];
		if (A[ez]<mini) mini=A[ez+1]; 			krok++;


cout<<"ilosc krokow-- "<<krok<<endl;
			
			
			
		
	
}

int main()
{
	
	int licznik[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int max, mini;
	// for (int i=0; i<N;i++) licznik[i]=rand()%100000; 
	for(int i=0;i<N;i++) cout<<licznik[i]<<" --   "<<endl;
	minimaks(licznik, mini, max);
	cout<<mini<<endl<<max<<endl;
	
}