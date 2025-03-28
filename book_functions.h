#ifndef BOOK_FUNCTIONS_H
#define BOOK_FUNCTIONS_H

#include "book.h"
#include <vector>

void searchBooks(const std::vector<book> &bookList);
void loadBooksFromFile(std::vector<book> &bookList, const char *filename);
void saveBooksToFile(const std::vector<book> &bookList, const char *filename);
void displayBooks(const std::vector<book> &bookList);
// Hung
bool deleteBook(std::vector<book> &bookList, const std::string &id);             // Xóa sách
bool editBook(std::vector<book> &bookList, const std::string &id);               // Sửa sách
void exportBooksToFile(const std::vector<book> &bookList, const char *filename); // Xuất sách ra file

#endif // BOOK_FUNCTIONS_H