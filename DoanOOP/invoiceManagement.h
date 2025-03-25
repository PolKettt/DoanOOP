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

};