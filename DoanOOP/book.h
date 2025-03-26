#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class book {
private:
    std::string ID;
    std::string name;
    std::string author;
    std::string genre;
    int price;
    int amount;
    int sold;

public:
    // Constructor m?c ??nh
    book();

    // Constructor c� tham s?
    book(std::string bookID, std::string bookName, std::string bookAuthor, 
         std::string bookGenre, int bookPrice, int bookAmount, int bookSold);

    // C�c h�m getter v� setter
    void setID(std::string bookID);
    std::string getID();

    void setName(std::string bookName);
    std::string getName();

    void setAuthor(std::string bookAuthor);
    std::string getAuthor();

    void setGenre(std::string bookGenre);
    std::string getGenre();

    void setPrice(int bookPrice);
    int getPrice();

    void setAmount(int bookAmount);
    int getAmount();

    void setSold(int bookSold);
    int getSold();

    // H�m nh?p th�ng tin s�ch t? b�n ph�m
    void inputBook();

    // H�m hi?n th? th�ng tin s�ch
   
    void displayBook() const;
};

#endif // BOOK_H

