#include "EventType.h"

// Get the event name.
string EventType::GetEventName() const {
	return EventName;
}

// Get the total student number.
int  EventType::GetNum() const {
	return num;
}


// Set the event name.
void  EventType::SetEventName(string inName) {
	EventName = inName;
}


// Add the content filename in the list.
void  EventType::AddContentFileNameintheList(string inFN) {
	FileNameList.Add(inFN);
	AddNum();
}
 
// Add the num.
void EventType::AddNum() {
	num = num + 1;
}