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

	cout << green << " Posi��o " << default;
	cout << "  " << letra << x << default << "  ";
	cout << green << " Velocidade M�dia " << default << endl;
	cout << "\n";

	cout << yellow << " Posi��o " << default;
	cout << "  " << letra2 << y << default << "  ";
	cout << yellow << " Velocidade M�dia " << default;
	return 0;
}