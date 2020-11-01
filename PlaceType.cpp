#include "PlaceType.h"

//Get the name of the place.
string PlaceType::GetPlaceName() const {
	return PlaceName;
}

//Get the total multimedia contents number.
int PlaceType::GetNum() const {
	return num;
}

//Set the name of the place.
void PlaceType::SetPlaceName(string inName) {
	PlaceName = inName;
}


//Add the content filename in the list.
void PlaceType::AddContentFileNameintheList(string inFN) {
	FileNameList.Add(inFN);
	AddNum();
}

//Add the num
void PlaceType::AddNum() {
	num = num + 1;
}