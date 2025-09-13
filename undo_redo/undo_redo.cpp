#include <iostream>
#include "cls_my_string.h" 

using namespace std; 

int main()
{
	cls_my_string s1; 

	cout << "First value : " << endl; 
	cout << "---------------------------" << endl;


	cout << s1.Value << endl; 

	s1.Value = "hamza";

	cout << "Second value : " << endl;
	cout << "---------------------------" << endl;

	cout << s1.Value << endl;

	s1.Value = "abdellatif";

	cout << "Third value : " << endl;
	cout << "---------------------------" << endl;

	cout << s1.Value << endl;

	s1.Value = "omar";

	cout << "Fourth value : " << endl;
	cout << "---------------------------" << endl;

	cout << s1.Value << endl;



	s1.undo(); 

	cout << "First undo : " << endl;
	cout << "---------------------------" << endl;

	cout << s1.Value << endl;

	s1.undo();

	cout << "Second undo : " << endl;
	cout << "---------------------------" << endl;

	cout << s1.Value << endl;

	s1.undo();

	cout << "Third undo : " << endl;
	cout << "---------------------------" << endl;

	cout << s1.Value << endl;


	s1.redo();
	cout << "First redo : " << endl;
	cout << "---------------------------" << endl;
	cout << s1.Value << endl;

	s1.redo();
	cout << "Second redo : " << endl;
	cout << "---------------------------" << endl;
	cout << s1.Value << endl;

	s1.redo();
	cout << "Third redo : " << endl;
	cout << "---------------------------" << endl;
	cout << s1.Value << endl;
}

