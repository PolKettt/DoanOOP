#include <iostream>
using namespace std;
class book {
private:
	string ID;
	string name;
	string author;
	string gerne;
	int price;
	int amount;
	int sold;
public:
		book() 
	{
		ID = "unknow";
		name = "unknow";
		author = "unknow";
		gerne = "unknow";
		price = 0;
		amount = 0;
		sold = 0;
	}
		book(string bookID, string bookName, string bookAuthor, string bookGerne, int bookPrice, int bookAmount, int bookSold) {
			ID = bookID;
			name = bookName;
			author = bookAuthor;
			gerne = bookGerne;
			price = bookPrice;
			amount = bookAmount;
			sold = bookSold;
		}
		void setID(string bookID) {
			ID = bookID;
		}
		string getID() {
			return ID;
		}
		void setName(string bookName) {
			name = bookName;
		}
		string getName() {
			return name;
		}
		void setAuthor(string bookAuthor) {
			author = bookAuthor;
		}
		string getAuthor() {
			return author;
		}
		void setGerne(string bookGerne) {
			gerne = bookGerne;
		}
		string getGerne() {
			return gerne;
		}
		void setPrice(int bookPrice) {
			price = bookPrice;
		}
		int getPrice() {
			return price;
		}
		void setAmount(int bookAmount) {
			amount = bookAmount;
		}
		int getAmount() {
			return amount;
		}
		void setSold(int bookSold) {
			sold = bookSold;
		}
		int getSold() {
			return sold;
		}
};
