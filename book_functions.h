#ifndef BOOK_FUNCTIONS_H
#define BOOK_FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>
#include "book.h" // Include file book.h

// Hàm nh?p m?t danh sách sách
void inputBooks(std::vector<book>& books, int n);

// Hàm tìm ki?m sách theo mã
book* findBookById(std::vector<book>& books, const std::string& id);

// Hàm tìm ki?m sách theo tên
std::vector<book*> findBooksByName(std::vector<book>& books, const std::string& name);

// Hàm tìm ki?m sách theo tác gi?
std::vector<book*> findBooksByAuthor(std::vector<book>& books, const std::string& author);

// Hàm tìm ki?m sách theo th? lo?i
std::vector<book*> findBooksByGenre(std::vector<book>& books, const std::string& genre);

// Hàm tìm ki?m sách theo kho?ng giá
std::vector<book*> findBooksByPriceRange(std::vector<book>& books, int minPrice, int maxPrice);

// Hàm hi?n th? danh sách sách
void displayBooks(const std::vector<book>& books);

// Hàm hi?n th? danh sách sách (d?ng con tr?)
void displayBookPtrs(const std::vector<book*>& books);

#endif // BOOK_FUNCTIONS_H

