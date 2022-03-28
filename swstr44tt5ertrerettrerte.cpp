
#include <iostream>
#include <fstream>
#include <string>

using namespace std;





void max(int max, int liczba)
{
	if (max < liczba) 	max=liczba; 
}



int main()
{
	int max, i=1;
	string s;
	int tabr[10]={0};
		ifstream wejscie;

	wejscie.open("C:\\Users\\uczen_11\\Desktop\\ez\\jawny.txt"); 
	//wyjscie.open("C:\\Users\\uczen_11\\Desktop\\ez\\txt1.txt");

while(!wejscie.eof())
{


	getline (wejscie, s);
	tabr[i] = s;

i++;
}
i=1;

max = tabr[i];



}