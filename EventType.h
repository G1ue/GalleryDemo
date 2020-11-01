#pragma once
#include <string>

#include "SortedList.h"

using namespace std;

// The event management class
class EventType
{
private:
	string EventName;					// the name of the event.
	int num;							// multimedia contents number in the event.
	SortedList<string> FileNameList;	// filename list, all filename in the list has the same event name.

public:

	//default constuctor.
	EventType()
	{
		EventName = "";
		num = 0;
		FileNameList.ResetList();
	}

	//destructor
	~EventType() {}

	/*
		@brief	Get the event name.
		@pre	The event name is set.
		@post	None.
		@return the event name.
	*/
	string GetEventName() const;

	/*
		@brief	Get the total multimedia contents number.
		@pre	The number is set.
		@post	None.
		@return the total multimedia contents number in the filenamelist.
	*/
	int GetNum() const;

	/*
		@brief	Set the event name.
		@pre	None.
		@post	The event name is set.
		@param	inName	the event name
	*/
	void SetEventName(string inName);

	/*
		@brief	Add the content filename in the list.
		@pre	None.
		@post	The filename list is set.
		@param	inFD	being added to the filename list
	*/
	void AddContentFileNameintheList(string inFN);

	/*
		@brief	Add the num
		@pre	None.
		@post	num = num+1;
	*/
	void AddNum();

	/*
		@brief	Return the filenamelist of the eventtype
		@pre	None.
		@post	Return the filename list.
	*/
	SortedList<string> getFileNameList() { return FileNameList; }

	bool operator==(const EventType& A) {
		if (EventName == A.GetEventName()) //primary key in the eventlist is the eventname.
			return true;
		return false;
	}

	bool operator >(const EventType& A) {
		if (EventName > A.GetEventName())
			return true;
		return false;
	}

	bool operator <(const EventType& A) {
		if (EventName < A.GetEventName())
			return true;
		return false;
	}
};
