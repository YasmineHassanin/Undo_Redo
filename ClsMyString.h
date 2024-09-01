#pragma once
#include<iostream>
#include<Stack>
using namespace std;

class ClsMyString
{
private:
	stack<string>_Undo;
	stack<string>_Redo;
	string _Value;
public:

	void SetValue(string value)
	{
		_Undo.push(_Value);
		_Value = value;
	}
	string GetValue()
	{
		return _Value;
	}
	__declspec(property(get = GetValue, put = SetValue))string value;
	void Redo(string value)
	{
		if (!_Redo.empty())
		{
			_Undo.push(_Value);
			_Value = _Redo.top();
			_Redo.pop();
		}
		
	}
	void Undo()
	{
		if (!_Undo.empty())
		{
			//Before making undo i'll put the value in the Redo Stack
			_Redo.push(_Value);
			//Update value that exist in the _Undo
			_Value = _Undo.top();
			_Undo.pop();
		}
	}

};

