#include <iostream>
using namespace std;
class customer {
private:
	string name;
	string address;
	string phone;
public:
	customer() {
		name = "unknow";
		address = "unknow";
		phone = "unknow";
	}
	customer(string customerName, string customerAddress, string customerPhone) {
		ID = customerID;
		name = customerName;
		address = customerAddress;
		phone = customerPhone;
	}
	void setID(string customerID) {
		ID = customerID;
	}
	string getID() {
		return ID;
	}
	void setName(string customerName) {
		name = customerName;
	}
	string getName() {
		return name;
	}
	void setAddress(string customerAddress) {
		address = customerAddress;
	}
	string getAddress() {
		return address;
	}
	void setPhone(string customerPhone) {
		phone = customerPhone;
	}
	string getPhone() {
		return phone;
	}
};
