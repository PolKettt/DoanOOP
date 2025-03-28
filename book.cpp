#include "book.h"
#include <iostream>
#include <cctype>
#include <limits> // Ð? dùng numeric_limits
book::book() : price(0), amount(0), sold(0) {}

void book::inputBook() {
    bool isValid;

    // Ki?m tra ID sách
    do {
        std::cout << "Nhap ID sach (chi chua chu va so, khong co ky tu dac biet): ";
        std::cin >> ID;

        isValid = true;
        for (size_t i = 0; i < ID.length(); i++) {
            if (!isalnum(ID[i])) {
                isValid = false;
                break;
            }
        }

        if (!isValid) {
            std::cout << "Loi: ID chi duoc chua chu cai va so! Vui long nhap lai.\n";
        }
    } while (!isValid);

    std::cin.ignore();  // Xóa b? nh? d?m sau khi nh?p ID
    std::cout << "Nhap ten sach: ";
    std::getline(std::cin, name);
    std::cout << "Nhap ten tac gia: ";
    std::getline(std::cin, author);
    std::cout << "Nhap the loai sach: ";
    std::getline(std::cin, genre);

    // Ki?m tra nh?p s? h?p l? cho giá ti?n
    do {
        std::cout << "Nhap gia tien: ";
        std::cin >> price;

        if (std::cin.fail() || price < 0) {
            std::cout << "Loi: Gia tien phai la so hop le! Vui long nhap lai.\n";
            std::cin.clear(); // Xóa l?i cin
            std::cin.ignore(10000, '\n'); // Xóa b? nh? d?m
        }
    } while (std::cin.fail() || price < 0);

    // Ki?m tra nh?p s? h?p l? cho s? lu?ng sách
    do {
        std::cout << "Nhap so luong sach: ";
        std::cin >> amount;

        if (std::cin.fail() || amount < 0) {
            std::cout << "Loi: So luong sach phai la so nguyen duong! Vui long nhap lai.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    } while (std::cin.fail() || amount < 0);

    // Ki?m tra nh?p s? h?p l? cho s? lu?ng dã bán
    do {
        std::cout << "Nhap so luong da ban: ";
        std::cin >> sold;

        if (std::cin.fail() || sold < 0 || sold > amount) {
            std::cout << "Loi: So luong da ban phai la so nguyen duong va <= so luong sach! Vui long nhap lai.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    } while (std::cin.fail() || sold < 0 || sold > amount);
}
void book::displayBook() const {
    std::cout << "ID: " << ID << "\n"
              << "Ten: " << name << "\n"
              << "Tac gia: " << author << "\n"
              << "The loai: " << genre << "\n"
              << "Gia: " << price << "\n"
              << "So luong: " << amount << "\n"
              << "Da ban: " << sold << "\n";
}

std::string book::getID() const { return ID; }
std::string book::getName() const { return name; }
std::string book::getAuthor() const { return author; }
std::string book::getGenre() const { return genre; }
double book::getPrice() const { return price; }
int book::getAmount() const { return amount; }
int book::getSold() const { return sold; }

void book::loadFromFile(std::istream& in) {
    std::getline(in, ID, ',');
    std::getline(in, name, ',');
    std::getline(in, author, ',');
    std::getline(in, genre, ',');
    in >> price;
    in.ignore();
    in >> amount;
    in.ignore();
    in >> sold;
    in.ignore();
}

