#include <iostream>
#include "Room.h"
using std::cout;
using std::endl;

int main() {
	Room kitchen(3, 3, 4, "Kitchen");
	Room dinnerRoom(6, 5, 4, "Dinner room");
	kitchen.print();
	++kitchen;
	kitchen.print();
	(kitchen++).print();
	kitchen.print();
	dinnerRoom.print();
	cout <<std::boolalpha<<"Same size: "<< (kitchen == dinnerRoom) << endl;
	dinnerRoom["height"] = 4;
	cout << R"(
After dinnerRoom["height"] = 4
)" << endl;
	dinnerRoom.print();

	cout << "Square of "<<dinnerRoom.getName()<<" : " << (int)dinnerRoom << endl;
	int s = (int)dinnerRoom;

	kitchen(1, 2, 3, "Name");
	kitchen.print();

	return 0;
}