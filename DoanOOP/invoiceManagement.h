#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "customer.h"
#include "bookManagement.h"
#include "customerManagement.h"
#include "invoice.h"
using namespace std;
class invoiceManagement {
private:
	vector<invoice> invoiceList;
	customerManagement customerMgr;
public:
	void invoiceExport() {
		cout << "thong tin hoa don" << endl;
		customerMgr.addCustomer();

	}
	void invoiceImport() {
		customerMgr.addCustomer();

		string ID;
		int day, month, year;
		cout << "nhap ngay:";
		cin >> day;
		cout << "nhap thang:";
		cin >> month;
		cout << "nhap nam:";
		cin >> year;
		invoice newInvoice(ID, day, month, year);
		invoiceList.push_back(newInvoice);

	}
};