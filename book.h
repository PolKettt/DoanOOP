#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class book {
private:
    std::string ID;
    std::string name;
    std::string author;
    std::string genre;
    double price;
    int amount;
    int sold;

public:
    book();
    void inputBook();
    void displayBook() const;
    std::string getID() const;
    std::string getName() const;
    std::string getAuthor() const;
    std::string getGenre() const;
    double getPrice() const;
    int getAmount() const;
    int getSold() const;
    void loadFromFile(std::istream& in);
};

#endif

