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

	for (int i = 0; i < word_size; i++)
	{
		inv_word.insert(0, string(frase[i]));
	}
	
	cout << inv_word;
	cin.get();
	cin.get();
	return 0;
}
