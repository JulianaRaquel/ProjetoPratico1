#include <iostream>
using namespace std;

#define green "\033[7;32;40m"
#define default "\033[m"
#define letra "\033[7;30;42m"
#define yellow "\033[7;33;40m"
#define letra2 "\033[7;30;43m"

int main()
{
	int x = 101;
	int y = 98;

	cout << green << " Posição " << default;
	cout << "  " << letra << x << default << "  ";
	cout << green << " Velocidade Média " << default << endl;
	cout << "\n";

	cout << yellow << " Posição " << default;
	cout << "  " << letra2 << y << default << "  ";
	cout << yellow << " Velocidade Média " << default;
	return 0;
}