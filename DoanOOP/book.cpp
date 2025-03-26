#include "book.h"

// Constructor mac dinh
book::book() {
    ID = "unknown";  // Doi tu "unknow" thanh "unknown"
    name = "unknown";  // Doi tu "unknow" thanh "unknown"
    author = "unknown";  // Doi tu "unknow" thanh "unknown"
    genre = "unknown";  // Doi tu "gerne" thanh "genre"
    price = 0;
    amount = 0;
    sold = 0;
}

// Constructor co tham so
book::book(std::string bookID, std::string bookName, std::string bookAuthor, 
     std::string bookGenre, int bookPrice, int bookAmount, int bookSold) {  // Doi "gerne" thanh "genre"
    ID = bookID;
    name = bookName;
    author = bookAuthor;
    genre = bookGenre;  // Doi "gerne" thanh "genre"
    price = bookPrice;
    amount = bookAmount;
    sold = bookSold;
}

// Cac ham getter va setter
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

void book::setGenre(std::string bookGenre) {  // Doi "gerne" thanh "genre"
    genre = bookGenre;  // Doi "gerne" thanh "genre"
}

std::string book::getGenre() {  // Doi "gerne" thanh "genre"
    return genre;  // Doi "gerne" thanh "genre"
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

// Ham nhap thong tin sach tu ban phim
void book::inputBook() {
    std::cout << "Nhap ma sach: ";
    std::cin >> ID;
    std::cin.ignore(); // Xoa bo dem truoc khi doc chuoi
    
    std::cout << "Nhap ten sach: ";
    std::getline(std::cin, name);
    
    std::cout << "Nhap tac gia: ";
    std::getline(std::cin, author);
    
    std::cout << "Nhap the loai: ";
    std::getline(std::cin, genre);  // Doi tu "gerne" thanh "genre"
    
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

