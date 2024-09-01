#include <iostream>
#include"ClsMyString.h"
using namespace std;
int main()
{
	ClsMyString S1;
	cout << "The value is " << S1.value << endl;
	S1.value = "Yasmine";
	cout << S1.value << endl;
	S1.value = "Yasmine2";
	cout << S1.value << endl;
	S1.value = "Yasmine3";
	cout << S1.value << endl;

	cout << "After using Undo" << endl;
	S1.Undo();
	cout << S1.value << endl;
	S1.Undo();
	cout << S1.value << endl;
	S1.Undo();
	cout << S1.value << endl;

	cout << "After Using Redo" << endl;
	S1.Redo("Yasmine");
	cout << S1.value << endl;
	S1.Redo("Yasmine2");
	cout << S1.value << endl;
	S1.Redo("Yasmine3");
	cout << S1.value << endl;




}

