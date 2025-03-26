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

    // Constructor có tham s?
    book(std::string bookID, std::string bookName, std::string bookAuthor, 
         std::string bookGenre, int bookPrice, int bookAmount, int bookSold);

    // Các hàm getter và setter
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

    // Hàm nh?p thông tin sách t? bàn phím
    void inputBook();

    // Hàm hi?n th? thông tin sách
   
    void displayBook() const;
};

#endif // BOOK_H

