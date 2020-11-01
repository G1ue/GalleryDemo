#include "SpecialType.h"

// default constructor
SpecialType::SpecialType()
{
	filename = "";
	people = "";
}

// default destructor
SpecialType::~SpecialType() {}

// Get the file name.
string SpecialType::GetFileName() const {
	return filename;
}

// Get people
string SpecialType::GetPeople() const {
	return people;
}

// Desipaly the file name and the people on the screen.
void SpecialType::Display() const
{
	cout << "[ File Name: " << filename
		<< " , People : " << people << " ]\n";
}


// Set the file name.
void SpecialType::SetFileName(string _FN) {
	filename = _FN;
}

// Set the people name.
void SpecialType::SetPeople(string _PP) {
	people = _PP;
}

// Set the record.
void SpecialType::SetRecord(string _FN, string _PP) {
	filename = _FN;
	people = _PP;
}

// Set the file name from the keyboard.
void SpecialType::SetFileNameFromKB() {
	cout << "\n\tEnter the file name -->";
	cin >> filename;
}