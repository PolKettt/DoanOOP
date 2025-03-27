#include "book.h"
#include <cctype>   // Cho hàm isalnum()
#include <limits>   // Cho numeric_limits

book::book() {
    ID = "unknown";  
    name = "unknown";  
    author = "unknown";  
    genre = "unknown";  
    price = 0;
    amount = 0;
    sold = 0;
}

// Constructor co tham so
book::book(std::string bookID, std::string bookName, std::string bookAuthor, 
     std::string bookGenre, int bookPrice, int bookAmount, int bookSold) {  
    ID = bookID;
    name = bookName;
    author = bookAuthor;
    genre = bookGenre;  
    price = bookPrice;
    amount = bookAmount;
    sold = bookSold;
}


void book::setID(std::string bookID) {
    ID = bookID;
}

std::string book::getID() {
    return ID;
}

void book::setName(std::string bookName) {
    name = bookName;
}

std::string book::getName() {
    return name;
}

void book::setAuthor(std::string bookAuthor) {
    author = bookAuthor;
}

std::string book::getAuthor() {
    return author;
}

void book::setGenre(std::string bookGenre) {  
    genre = bookGenre;  
}

std::string book::getGenre() {  
    return genre;  
}

void book::setPrice(int bookPrice) {
    price = bookPrice;
}

int book::getPrice() {
    return price;
}

void book::setAmount(int bookAmount) {
    amount = bookAmount;
}

int book::getAmount() {
    return amount;
}

void book::setSold(int bookSold) {
    sold = bookSold;
}

int book::getSold() {
    return sold;
}
void book::inputBook() {
    std::string tempID;
    bool validID = false;

    while (!validID) {
        std::cout << "Nhap ma sach: ";
        std::cin >> tempID;
        
        
        bool isValid = true;
        for (size_t i = 0; i < tempID.length(); ++i) {
            if (!isalnum(tempID[i])) {
			//std::isalnum() de kiem tra ky tu chi la chu hoac so
                isValid = false;
                break;
            }
        }

        if (isValid) {
            ID = tempID;
            validID = true;
        } else {
            std::cout << "Ma sach chi duoc chua chu va so. Vui long nhap lai!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    std::cin.ignore(); 
    
    std::cout << "Nhap ten sach: ";
    std::getline(std::cin, name);
    
    std::cout << "Nhap tac gia: ";
    std::getline(std::cin, author);
    
    std::cout << "Nhap the loai: ";
    std::getline(std::cin, genre);
    
    std::cout << "Nhap gia sach: ";
    std::cin >> price;
    
    std::cout << "Nhap so luong: ";
    std::cin >> amount;
    
    std::cout << "Nhap so luong da ban: ";
    std::cin >> sold;
}

// Ham hien thi thong tin sach
void book::displayBook() const{
    std::cout << "Ma sach: " << ID << std::endl;
    std::cout << "Ten sach: " << name << std::endl;
    std::cout << "Tac gia: " << author << std::endl;
    std::cout << "The loai: " << genre << std::endl;  // Doi tu "gerne" thanh "genre"
    std::cout << "Gia sach: " << price << " dong" << std::endl;
    std::cout << "So luong: " << amount << std::endl;
    std::cout << "Da ban: " << sold << std::endl;
}

