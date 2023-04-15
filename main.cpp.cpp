#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 

int losowanie(int N) { 
	int w; 
	srand(time(0)); 
	for (int i = 0; i < 50; i++)
		w = rand() % (N + 1); 
	return w;
}


void zgadywanka() { 
	int N = 1000; 
	int liczba = losowanie(N); 
	int zgadnij; 
	cout << "zgadnij liczbę z przedziału 0 - " << N << endl;
	do {
		cin >> zgadnij;
		if (zgadnij < liczba) {
			cout << "Za mało, spróbuj ponownie." << endl;
		}
		else if (zgadnij > liczba) {
			cout << "Za dużo, spróbuj ponownie." << endl;
		}
		else {
			cout << "Brawo! Odgadłeś liczbę." << endl;
		}
	} while (zgadnij != liczba);
}

/
int main() {
	setlocale(LC_ALL, "");
	zgadywanka();
	
	return 0;
}