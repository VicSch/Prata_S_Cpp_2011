#include <iostream>
#include <string>

using namespace std;

int main()
{
	string frase;
	cout << "Enter a word: ";
	cin >> frase;
	int word_size = frase.size();
	string inv_word;

	for (int i = word_size-1; i >= 0; i--)
	{
		cout << frase[i];
	}
	
	cin.get();
	cin.get();
	return 0;
}
