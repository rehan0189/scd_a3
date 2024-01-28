#include<iostream>
using namespace std;
class Door {
 	private:
		bool isopen;
		bool isLocked;
	public:
		Door(); // Initializes the door as closed and unlocked
		void openDoor();
		void closeDoor();
 		void lockDoor();
		void unlock();
 		bool isDoorOpen() const;
		bool isDoorlocked() const;
	};
	
	void Door::openDoor() {
    		if (!isLocked) {
       		 isopen = true;
       		 cout << "Door is now open." << endl;
    } else {
        	cout << "Cannot open the door. It is locked." << endl;
    }
	}
	bool Door::isDoorOpen() const {
    return isopen;
}
