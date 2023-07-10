#include <stdio.h>

int main()
  {
	int Summe = 0;
	int i;	            
	int n;		              
	int Ergebnis;
			                
	printf("Dies ist ein Summenrechner von 0 bis zur eingebenen Zahl. Geben Sie eine Zahl ein: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		Summe = Summe + i;
	}
	Ergebnis = Summe;
	printf("Die Summe von 1 bis %d ist: %d\n",n, Ergebnis);

	return 0;
  }
