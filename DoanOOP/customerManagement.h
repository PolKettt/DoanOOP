#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "customer.h"
#include "invoice.h"
using namespace std;
class customerManagement {
private:
	vector<customer> customerList;
	int countId;
public:
	void addCustomer() {
		string customerName, customerAddress, customerPhone;
		cout << "Nhap ten khach hang: ";
		getline(cin, customerName);
		cout << "Nhap so dien thoai khach hang: ";
		cin >> customerPhone;
		for (int i = 0; i < customerList.size(); i++) {
			if (customerList[i].getPhone() == customerPhone) {
				infoCustomer(customerList[i]);
				return;
			}
		}
		cout << "nhap dia chi khach hang";
		getline(cin, customerAddress);
		customer newCustomer(customerName, customerAddress, customerPhone);
		infoCustomer(newCustomer);
		customerList.push_back(newCustomer);

	}
void infoCustomer(customer cus) {
	cout << "Ten khach hang:" << cus.getName() << endl;
	cout << "So dien thoai khach hang:" << cus.getPhone() << endl;
	cout << "dia chi khach hang:" << cus.getAddress() << endl;
	}

};