#include <iostream>
#include <string>

using namespace std;

// prototype of function
// string show_data(struct list, int s);

int main() {
	
	const int SIZE = 5;
	const int STRSIZE = 20;
	struct bop
	{
		string fullname;
		string title;
		string bopname;
		int pref;
	};

	bop order[SIZE];
	
	string fullname_ar[SIZE] {
		"Jhon Jhones",
		"Phill Collens",
		"Mike Tison",
		"Micky Roorck",
		"Ilon Masck"
	};
	string title_ar[SIZE] {
		"Champion UFC",
		"Musicant",
		"Boxer",
		"Actor",
		"Milliarder"
	};
	string bopname_ar[SIZE] {
		"BONES",
		"BIRD",
		"CRASH",
		"BIUTY",
		"INVERTOR"
	};
	int pref_ar[SIZE] {0, 2, 1, 0, 2};

	// fill array 'order'
	for (int i = 0; i < SIZE; i++) {
		order[i].fullname = fullname_ar[i];
		order[i].title = title_ar[i];
		order[i].bopname = bopname_ar[i];
		order[i].pref = pref_ar[i];
	}

	cout << "BOP report:\n";
	cout << "a: display by name.\t" << "b: display by title.\n";
	cout << "c: display by bopname. \t" << "d: display by preferences.\n";
	cout << "Enter \'q\' to exit.\n";
	char enter;
	cout << "Enter your choice: ";
	cin >> enter;
	
	while(enter != 'q') {
	    
		switch(enter) {
		    case 'a':
		    	{
		    		for (int i = 0; i < SIZE; i++) 
		    			cout << order[i].fullname << ".\n";
		    		break;
		    	}
	    	case 'b':
		    	{
		    		for (int i = 0; i < SIZE; i++) 
		    			cout << order[i].title << ".\n";
		    		break;
		    	}
	    	case 'c':
		    	{
		    		for (int i = 0; i < SIZE; i++) 
		    			cout << order[i].bopname << ".\n";
		    		break;
		    	}
	    	case 'd':
		    	{
		    		for (int i = 0; i < SIZE; i++) {
			    		int pref_num = order[i].pref;

			    		switch(pref_num) {
			    			case 0: cout << order[i].fullname << ".\n";
			    				break;
		    				case 1: cout << order[i].title << ".\n";
			    				break;
		    				case 2: cout << order[i].bopname << ".\n";
			    				break;
			    		}
			    	}
		    	break;
		    	}
	    	default: cout << "You should enter \'a\', \'b\', \'c\' or \'d\' letters.\n";
	    	}

	    	cin >> enter;

	}

	cin.get();
}

// string show_data(struct list, int s) {
// 	for (int i = 0; i < s; i++) {
// 		cout << order[i].fullname << ".\n";
// 	}
// }