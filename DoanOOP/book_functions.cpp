#include "book_functions.h"
#include <algorithm>

// Ham nhap mot danh sach sach
void inputBooks(std::vector<book>& books, int n) {
    books.resize(n);
    for (int i = 0; i < n; i++) {
        std::cout << "\n===== NHAP THONG TIN SACH THU " << (i + 1) << " =====" << std::endl;
        books[i].inputBook();
    }
}

// Ham tim kiem sach theo ma
book* findBookById(std::vector<book>& books, const std::string& id) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].getID() == id) {
            return &books[i];
        }
    }
    return NULL;
}

// Ham tim kiem sach theo ten
std::vector<book*> findBooksByName(std::vector<book>& books, const std::string& name) {
    std::vector<book*> result;
    for (int i = 0; i < books.size(); i++) {
        std::string bookName = books[i].getName();
        std::string searchName = name;
        
        std::transform(bookName.begin(), bookName.end(), bookName.begin(), ::tolower);
        std::transform(searchName.begin(), searchName.end(), searchName.begin(), ::tolower);
        
        if (bookName.find(searchName) != std::string::npos) {
            result.push_back(&books[i]);
        }
    }
    return result;
}

// Ham tim kiem sach theo tac gia
std::vector<book*> findBooksByAuthor(std::vector<book>& books, const std::string& author) {
    std::vector<book*> result;
    for (int i = 0; i < books.size(); i++) {
        std::string bookAuthor = books[i].getAuthor();
        std::string searchAuthor = author;
        
        std::transform(bookAuthor.begin(), bookAuthor.end(), bookAuthor.begin(), ::tolower);
        std::transform(searchAuthor.begin(), searchAuthor.end(), searchAuthor.begin(), ::tolower);
        
        if (bookAuthor.find(searchAuthor) != std::string::npos) {
            result.push_back(&books[i]);
        }
    }
    return result;
}

// Ham tim kiem sach theo the loai
std::vector<book*> findBooksByGenre(std::vector<book>& books, const std::string& genre) {
    std::vector<book*> result;
    for (int i = 0; i < books.size(); i++) {
        std::string bookGenre = books[i].getGenre();
        std::string searchGenre = genre;
        
        std::transform(bookGenre.begin(), bookGenre.end(), bookGenre.begin(), ::tolower);
        std::transform(searchGenre.begin(), searchGenre.end(), searchGenre.begin(), ::tolower);
        
        if (bookGenre.find(searchGenre) != std::string::npos) {
            result.push_back(&books[i]);
        }
    }
    return result;
}

// Ham tim kiem sach theo khoang gia
std::vector<book*> findBooksByPriceRange(std::vector<book>& books, int minPrice, int maxPrice) {
    std::vector<book*> result;
    for (int i = 0; i < books.size(); i++) {
        int price = books[i].getPrice();
        if (price >= minPrice && price <= maxPrice) {
            result.push_back(&books[i]);
        }
    }
    return result;
}

// Ham hien thi danh sach sach
void displayBooks(const std::vector<book>& books) {
    if (books.empty()) {
        std::cout << "Danh sach sach trong." << std::endl;
        return;
    }
    std::cout << "\n===== DANH SACH SACH =====" << std::endl;
    for (int i = 0; i < books.size(); i++) {
        books[i].displayBook();
    }
}

// Ham hien thi danh sach sach (dang con tro)
void displayBookPtrs(const std::vector<book*>& books) {
    if (books.empty()) {
        std::cout << "Khong tim thay sach nao." << std::endl;
        return;
    }
    std::cout << "\n===== KET QUA TIM KIEM =====" << std::endl;
    for (int i = 0; i < books.size(); i++) {
        books[i]->displayBook();
    }
}

