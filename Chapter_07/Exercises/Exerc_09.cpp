#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

// int getinfо(student pa[], int n);
int getinfo(student pa[], int n);
void displayl(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main ()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;

	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	cout << "Entered: " << entered << endl;

	for (int i = 0; i < entered; i++) {
		displayl (ptr_stu [i] ) ;
		display2(&ptr_stu[i]);
	}

	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	cin.get();
	// cin.get();
	return 0;
}

int getinfo(student pa[], int n) {
	int i;
	for (i = 0; i < n; ++i) {
		
		cout << "Enrer student's name: ";
		cin.getline(pa[i].fullname, SLEN);
		if(pa[i].fullname[0] == ' ')
			break;
		cout << "Enrer student's hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "Enrer student's OOP level: ";
		cin >> pa[i].ooplevel;
		cin.ignore(1, '\n');
	}
	return i;
}

void displayl(student st) {
	cout << "Student's name: " << st.fullname;
	cout << "; Hobby: " << st.hobby;
	cout << "; OOP leve: " << st.ooplevel;
	cout << endl;
}

void display2(const student * ps) {
	cout << "Student's name: " << ps->fullname;
	cout << "; Hobby: " << ps->hobby;
	cout << "; OOP leve: " << ps->ooplevel;
	cout << endl;
}

void display3(const student pa[], int n) {
	cout << "==========================\n";
	for (int i = 0; i < n; ++i) {
		cout << "Student's name: " << pa[i].fullname;
		cout << "; Hobby: " << pa[i].hobby;
		cout << "; OOP leve: " << pa[i].ooplevel;
		cout << endl;
	}
}
