#pragma once
#ifndef _SpecialType_H
#define _SpecialType_H


#include <iostream>
#include <string>
using namespace std;

class SpecialType {


private:
	string filename;
	string people;

public:

	SpecialType();		//default constructor.
	~SpecialType();		//default destructor.

	/*
		@brief	Get the file name.
		@pre	The file name is set.
		@post	None.
		@return the file name.
	*/
	string GetFileName() const;

	/*
		@brief	Get people
		@pre	People are set.
		@post	None.
		@return the people.
	*/
	string GetPeople() const;

	/*
		@brief	Desipaly the file name and the people on the screen.
		@pre	The file name and the people should be set.
		@post	None.
	*/
	void Display() const;

	/*
		@brief	Set the file name.
		@pre	None.
		@post	The file name is set.
		@param	_FN	the file name
	*/
	void SetFileName(string _FN);

	/*
		@brief	Set the people name.
		@pre	None.
		@post	The people are set.
		@param	_PP	the people
	*/
	void SetPeople(string _PP);

	/*
		@brief	Set the record.
		@pre	None.
		@post	The record is set.
		@param	_FN	the file name
				_PP	the people
	*/
	void SetRecord(string _FN, string _PP);

	/*
		@brief	Set the file name from the keyboard,
		@pre	None.
		@post	The file name is set.
		@param	_FN	the file name
	*/
	void SetFileNameFromKB();

	bool operator==(const SpecialType& _item) {
		if (filename == _item.GetFileName())
			return true;
		return false;
	}

	friend ostream& operator <<(ostream& ostrm, const SpecialType& item) {
		ostrm << "\t    File Name : " << item.GetFileName() << endl;
		ostrm << "\t    People Name : " << item.GetPeople() << endl;
		return ostrm;
	}
};
#endif
