
#include "stdafx.h"
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip> //setiosflags

// class template:
template <class T>
class mycontainer {
	T element;
public:
	mycontainer(T arg) { element = arg; }
	T increase() { return ++element; }
};

// class template specialization:
// template spesialis yaitu dimana untuk tipe data tertentu
// maka dilakukan pemrosesan berbeda seperti contoh dibawah ini
// dimana aksi spesial untuk tipe data char
template <>
class mycontainer <char> {
	char element;
public:
	mycontainer(char arg) { element = arg; }
	char uppercase()
	{
		if ((element >= 'a') && (element <= 'z'))
			element += 'A' - 'a';
		return element;
	}
};

int main() {
	mycontainer<int> myint(7);
	mycontainer<char> mychar('j');
	cout << myint.increase() << endl;
	cout << mychar.uppercase() << endl;

	_getche();
	return EXIT_SUCCESS;
}

