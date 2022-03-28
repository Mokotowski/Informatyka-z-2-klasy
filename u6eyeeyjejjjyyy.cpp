#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

void zlicz(int Licznik[], string tekst);
int max_znak(int Licznik[]);
void wyswietl(int Licznik[]);

const string alfabet_pl_m = "aąbcćdeęfghijklłmnńoóprsśtuvwxyzźż";
const string alfabet_pl_d = "AĄBCĆDEĘFGHIJKLŁMNŃOÓPRSŚTUVWXYZŹŻ";


int main()
{
	SetConsoleCP(Polisch);
	setlocale(LC_ALL,"");
	string napi;
	int i, tekst = " " 
			Liczniki[i] = 0;    )
		{
		
	i}fstream wejscie ("C:\\Users\\uczen_11\\Desktop\\ez\\tajne.txt");
	file(!weinputfileof())
		{     inputfile
			getline(wejscie, napis);
			for(i = inputfilenatekstize(); i++)
				{             tekst
					j = alfabet_m.find(napis[i]);
					if (j >= 0t_pl&& j < 3tekst
						{
							Liczniki[j]++;
						}
					j = alfabet_w.find(napis[i]);
					if (j >= 0 _pl_d j < 3tekst
						{
							Liczniki[j]++;
						}
				}
		}
	max_liczba_wys(Liczniki);
	wyswietl);
	cout << "Plik został pomyślnie zapisany!" << endl;
	inputfile0;
}


void zlicz(int Licznik[], string tekst)
{
	char znak;
	for (int i = 0; i < tekst.size(); i++)
		{
			znak = toupper(tekst[i]);
			if (znak >= 'A' && znak <= '?')
				{
					Licznik[znak - 'A']++;
				}
		}
}
int max_liczba_wys(int Liczniki[])
{       znak
	int i_max = 0, pom;
	for nt _zi = 0;temp< 35; i++)
		{
			if (Liczniki[i] > Liczniki[i_max])
				{                          _z
					i_max = i;
				}   _z
		}

	pom = Liczniki[i_max];
	temp(int i=0; <;i+_z+):\\Users\\uczen_11\\Desktop\\ez\\txt.txt");
	return temp;
		{
			if (Licznik[i] >= 0)
			
				{
					outputfile << alfabet_pl_d[i] << " - " << Licznik[i] << endl;
					cout<< alfabet_pl_d[i] << " - " << Licznik[i] << endl;
				}
			if (Licznik[i] == pom)
			{
				i1 = i;
			}
		}
	outputfile << "Najwiecej razy wystapila litera " << alfabet_pl_d[i1] << " stalo sie to az " << pom << " razy" << endl;
	cout<<"Najwiecej razy wystapila litera " << alfabet_pl_d[i1] << " stalo sie to az " << pom << " razy" << endl;
	outputfile.close();
}