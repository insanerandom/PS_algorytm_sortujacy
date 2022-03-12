#include <iostream>
#define N 10

void view(int tab[]) //funkcja wyswietlajaca tablice
{
	for (int i = 0; i < N; i++)
	{
		if (i < N - 1)
		{
			std::cout << tab[i] << ", ";
		}
		else
		{
			std::cout << tab[i] << ".\n";
		}
	}
}

int main()
{
	int tab[N] = { 943, -123, -435, 0, 1, -9, 94, 66, 43, 10 }; //tablica 10 elementowa do posortowania
	int k;
	std::cout << "Przed sortowaniem: ";
	view(tab);
	for (int i = 0; i < N; i++) //Wybralem algorytm sortujacy metoda babelkowa. Jest to jedna z najprostyszych metod sortowania,
	{
		for (int j = 0; j < N - 1; j++) //jednak jest ona dosyc malo efektywna, to znaczy trzeba wykonac duzo krokow zanim sie uzyska wynik.
		{
			if (tab[j] < tab[j + 1]) //Zastosowalem tutaj petle na zasadzie inkrementacji, zatem tablica bedzie posortowana malejaco.
			{
				k = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = k;
			}
		}
	}
	std::cout << "Po sortowaniu (malejaco): ";
	view(tab);
	for (int i = N; i > 0; i--) //W celu posortowania tablicy rosnaco, nalezy uzyc petli na zasadzie dekrementacji,
	{
		for (int j = N - 1; j > 0; j--) //czyli schodzenia w dol z licznikiem.
		{
			if (tab[j] < tab[j - 1])
			{
				k = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = k;
			}
		}
	}
	std::cout << "Po sortowaniu (rosnaco): ";
	view(tab);
	system("pause");
	return 0;
}