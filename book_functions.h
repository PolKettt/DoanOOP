#ifndef BOOK_FUNCTIONS_H
#define BOOK_FUNCTIONS_H

#include "book.h"
#include <vector>

void searchBooks(const std::vector<book>& bookList);
void loadBooksFromFile(std::vector<book>& bookList, const char* filename);
void saveBooksToFile(const std::vector<book>& bookList, const char* filename);
void displayBooks(const std::vector<book>& bookList);

#endif // BOOK_FUNCTIONS_H

