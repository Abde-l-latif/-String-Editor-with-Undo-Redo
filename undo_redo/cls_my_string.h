#pragma once
#include <iostream>
#include <stack>

using namespace std;

class cls_my_string
{

private :

	stack <string> _list; 
	stack <string> _list2;

public : 

	string get_Value()
	{
		if (_list.empty())
			return "";

		return _list.top(); 
	}

	void set_value(string value)
	{
		_list.push(value);	
		while (!_list2.empty()) _list2.pop();
	}

	_declspec(property(get = get_Value, put = set_value)) string Value;

	void undo()
	{
		if (!_list.empty())
		{
			_list2.push(_list.top());
			_list.pop();
		}
	}

	void redo()
	{
		if (!_list2.empty())
		{
			_list.push(_list2.top());
			_list2.pop();
		}
	}

};

