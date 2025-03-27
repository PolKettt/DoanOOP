#ifndef BOOK_H
#define BOOK_H
#include <cctype>   // Cho hàm isalnum()
#include <limits>   // Cho numeric_limits
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
  
    book();  
    book(std::string bookID, std::string bookName, std::string bookAuthor, 
         std::string bookGenre, int bookPrice, int bookAmount, int bookSold);

   
    std::string getID();
    std::string getName();
    std::string getAuthor();
    std::string getGenre();
    int getPrice();
    int getAmount();
    int getSold();

    
    void setID(std::string bookID);
    void setName(std::string bookName);
    void setAuthor(std::string bookAuthor);
    void setGenre(std::string bookGenre);
    void setPrice(int bookPrice);
    void setAmount(int bookAmount);
    void setSold(int bookSold);

   
    void inputBook();
    void displayBook() const;
};

#endif // BOOK_H

