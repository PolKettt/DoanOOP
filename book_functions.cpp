#include "book_functions.h"
#include <fstream>
#include <iostream>

void loadBooksFromFile(std::vector<book>& books, const char* filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Khong the mo file " << filename << std::endl;
        return;
    }

    books.clear();
    book temp;
    while (!file.eof()) {
        temp.loadFromFile(file);
        if (temp.getID().empty()) continue;
        books.push_back(temp);
    }

    file.close();
}

void saveBooksToFile(const std::vector<book>& books, const char* filename) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Khong the ghi vao file " << filename << std::endl;
        return;
    }

    for (size_t i = 0; i < books.size(); i++) {
        file << books[i].getID() << ","
             << books[i].getName() << ","
             << books[i].getAuthor() << ","
             << books[i].getGenre() << ","
             << books[i].getPrice() << ","
             << books[i].getAmount() << ","
             << books[i].getSold() << "\n";
    }

    file.close();
}

void displayBooks(const std::vector<book>& books) {
    if (books.empty()) {
        std::cout << "Danh sach sach rong!\n";
        return;
    }

    for (size_t i = 0; i < books.size(); i++) {
        std::cout << "\n===== Sach thu " << (i + 1) << " =====\n";
        books[i].displayBook();
    }
}

//void searchBooks(const std::vector<book>& books) {
//    std::string keyword;
//    std::cout << "Nhap ten sach can tim: ";
//    std::cin.ignore();
//    std::getline(std::cin, keyword);
//
//    bool found = false;
//    for (size_t i = 0; i < books.size(); i++) {
//        if (books[i].getName().find(keyword) != std::string::npos) {
//            std::cout << "\n===== Tim thay sach =====\n";
//            books[i].displayBook();
//            found = true;
//        }
//    }
//
//    if (!found) {
//        std::cout << "Khong tim thay sach voi tu khoa: " << keyword << "\n";
//    }
//}
void searchBooks(const std::vector<book>& bookList) {
    if (bookList.empty()) {
        std::cout << "Danh sach sach hien dang trong!" << std::endl;
        return;
    }

    int searchChoice;
    std::cout << "\n===== TIM KIEM SACH =====" << std::endl;
    std::cout << "1. Tim theo ID" << std::endl;
    std::cout << "2. Tim theo ten" << std::endl;
    std::cout << "3. Tim theo tac gia" << std::endl;
    std::cout << "4. Tim theo khoang gia" << std::endl;
    std::cout << "Nhap lua chon: ";
    std::cin >> searchChoice;

    std::cin.ignore();  

    bool found = false;

    switch (searchChoice) {
        case 1: { // Tìm theo ID
            std::string searchID;
            std::cout << "Nhap ID sach can tim: ";
            std::cin >> searchID;

            for (size_t i = 0; i < bookList.size(); i++) {
                if (bookList[i].getID() == searchID) {
                    bookList[i].displayBook();
                    found = true;
                    break; // ID là duy nh?t nên có th? d?ng ngay
                }
            }
            break;
        }
        case 2: { // Tìm theo tên
            std::string searchName;
            std::cout << "Nhap ten sach can tim: ";
            std::getline(std::cin, searchName);

            for (size_t i = 0; i < bookList.size(); i++) {
                if (bookList[i].getName() == searchName) {
                    bookList[i].displayBook();
                    found = true;
                }
            }
            break;
        }
        case 3: { // Tìm theo tác gi?
            std::string searchAuthor;
            std::cout << "Nhap ten tac gia can tim: ";
            std::getline(std::cin, searchAuthor);

            for (size_t i = 0; i < bookList.size(); i++) {
                if (bookList[i].getAuthor() == searchAuthor) {
                    bookList[i].displayBook();
                    found = true;
                }
            }
            break;
        }
        case 4: { // Tìm theo kho?ng giá
            double minPrice, maxPrice;
            std::cout << "Nhap khoang gia (min max): ";
            std::cin >> minPrice >> maxPrice;

            for (size_t i = 0; i < bookList.size(); i++) {
                if (bookList[i].getPrice() >= minPrice && bookList[i].getPrice() <= maxPrice) {
                    bookList[i].displayBook();
                    found = true;
                }
            }
            break;
        }
        default:
            std::cout << "Lua chon khong hop le!" << std::endl;
            return;
    }

    if (!found) {
        std::cout << "Khong tim thay sach theo tieu chi da chon!" << std::endl;
    }
}

