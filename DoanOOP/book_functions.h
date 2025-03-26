#ifndef BOOK_FUNCTIONS_H
#define BOOK_FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>
#include "book.h" // Include file book.h

// H�m nh?p m?t danh s�ch s�ch
void inputBooks(std::vector<book>& books, int n);

// H�m t�m ki?m s�ch theo m�
book* findBookById(std::vector<book>& books, const std::string& id);

// H�m t�m ki?m s�ch theo t�n
std::vector<book*> findBooksByName(std::vector<book>& books, const std::string& name);

// H�m t�m ki?m s�ch theo t�c gi?
std::vector<book*> findBooksByAuthor(std::vector<book>& books, const std::string& author);

// H�m t�m ki?m s�ch theo th? lo?i
std::vector<book*> findBooksByGenre(std::vector<book>& books, const std::string& genre);

// H�m t�m ki?m s�ch theo kho?ng gi�
std::vector<book*> findBooksByPriceRange(std::vector<book>& books, int minPrice, int maxPrice);

// H�m hi?n th? danh s�ch s�ch
void displayBooks(const std::vector<book>& books);

// H�m hi?n th? danh s�ch s�ch (d?ng con tr?)
void displayBookPtrs(const std::vector<book*>& books);

#endif // BOOK_FUNCTIONS_H

