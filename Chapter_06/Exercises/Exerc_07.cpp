#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	const char vowels[] {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y'};
	int vow, con, oth;
	vow = con = oth = 0;
	cout << "Enter words (press \'q\' to quit): ";
	string word;
	cin >> word;
	while(word != "q") {
	    
	    char ch = word.front();

	    if(isalpha(ch)) {

	    	int isin = 0;
	    	
	    	for(char v : vowels) {
	    		if(ch == v) {
	    			isin++;
	    		}
	    	}
	    	// is vowel
	    	if(isin) vow++;
	    	// is consonant
	    	else con++;
	    }
	    // is other
	    else oth++;

	    cout << "Next word: ";
	    cin >> word;
	}

	cout << vow << " words begining with vowels.\n";
	cout << con << " words begining with consonants.\n";
	cout << oth << " others.\n";
	cout << "Bay !!!";
	cin.get();
	cin.get();
}
