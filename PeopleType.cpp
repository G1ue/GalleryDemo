#include "PeopleType.h"

// Get the person's name.
string PeopleType::GetPerson() const {
	return Person;
}

// Get the total multimedia contents number.
int PeopleType::GetNum() const {
	return num;
}

// Set the person's name.
void PeopleType::SetPerson(string inName) {
	Person = inName;
}


// Add the content filename in the list.
void PeopleType::AddContentFileNameintheList(string inFN) {
	FileNameList.Add(inFN);
	AddNum();
}

// Add the num
void PeopleType::AddNum() {
	num = num + 1;
}
