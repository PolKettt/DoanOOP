#include <iostream>
using namespace std;
class invoice {
private:
	string ID;
	int day;
	int month;
	int year;
public:
	invoice() {
		ID = "unknow";
		day = 0;
		month = 0;
		year = 0;
   }
	invoice(string invoiceID, int invoiceDay, int invoiceMonth, int invoiceYear) {
		ID = invoiceID;
		day = invoiceDay;
		month = invoiceMonth;
		year = invoiceYear;
	}
	void setID(string invoiceID) {
		ID = invoiceID;
	}
	string getID() {
		return ID;
	}
	void setDay(int invoiceDay) {
		day = invoiceDay;
	}
	int getDay() {
		return day;
	}
	void setMonth(int invoiceMonth) {
		month = invoiceMonth;
	}
	int getMonth() {
		return month;
	}
	void setYear(int invoiceYear) {
		year = invoiceYear;
	}
	int getYear() {
		return year;
	}
};