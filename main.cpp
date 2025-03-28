#include <iostream>
#include "book_functions.h"
#include <limits>
int main() {
    std::vector<book> bookList;
    const char* filename = "books.txt";
    loadBooksFromFile(bookList, filename);

    int choice;
    do {
        std::cout << "\n===== QUAN LY SACH =====" << std::endl;
        std::cout << "1. Nhap danh sach sach (luu vao file)" << std::endl;
        std::cout << "2. Hien thi danh sach sach" << std::endl;
        std::cout << "3. Tim sach" << std::endl;
        std::cout << "0. Thoat" << std::endl;
        std::cout << "Nhap lua chon: ";
        std::cin >> choice;
		if (std::cin.fail()) { 
            std::cout << "Loi: Lua chon phai la so nguyen! Vui long nhap lai.\n";
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            continue;
        }
        switch (choice) {
        	case 1:
            int n;
//            while (true) {
//                    std::cout << "Nhap so luong sach can them: ";
//                    std::cin >> n;
//
//                    if (!std::cin.fail() && n > 0) break;
//
//                    std::cout << "Loi: So luong sach phai la so nguyen duong! Vui long nhap lai.\n";
//                    std::cin.clear();
//                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//                }
//
//                for (int i = 0; i < n; i++) {
//                    std::cout << "\n===== NHAP THONG TIN SACH THU " << (bookList.size() + 1) << " =====" << std::endl;
//                    book newBook;
//                    newBook.inputBook();
//                    bookList.push_back(newBook);
//                }
//
//                saveBooksToFile(bookList, filename);
//                std::cout << "Da luu danh sach sach vao file!" << std::endl;
//                break;
            
            while (true) {
        std::cout << "Nhap so luong sach can them: ";
        std::cin >> n;

        if (std::cin.fail() || n <= 0) {  // Ki?m tra l?i nh?p
            std::cout << "Loi: So luong sach phai la so nguyen duong! Vui long nhap lai.\n";
            std::cin.clear();  // Xóa l?i nh?p
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
            break;  
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << "\n===== NHAP THONG TIN SACH THU " << (bookList.size() + 1) << " =====" << std::endl;
        book newBook;
        newBook.inputBook();
        bookList.push_back(newBook);
    }

    saveBooksToFile(bookList, filename);
    std::cout << "Da luu danh sach sach vao file!" << std::endl;
    break;
//                while (true) {
//                    std::cout << "Nhap so luong sach can them: ";
//                    std::cin >> n;
//
//                    if (!std::cin.fail() && n > 0) break; // N?u nh?p dúng, thoát vòng l?p
//
//                    std::cout << "Loi: So luong sach phai la so nguyen duong! Vui long nhap lai.\n";
//                    std::cin.clear();
//                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//                }
//
//                for (int i = 0; i < n; i++) {
//                    std::cout << "\n===== NHAP THONG TIN SACH THU " << (bookList.size() + 1) << " =====" << std::endl;
//                    book newBook;
//                    newBook.inputBook();
//                    bookList.push_back(newBook);
//                }
//
//                saveBooksToFile(bookList, filename);
//                std::cout << "Da luu danh sach sach vao file!" << std::endl;
//                break;
            
            case 2:
                displayBooks(bookList);
                break;
            case 3:
                searchBooks(bookList);
                break;
            case 0:
                std::cout << "Tam biet!" << std::endl;
                break;
            default:
                std::cout << "Lua chon khong hop le!" << std::endl;
        }
    } while (choice != 0);

    return 0;
}

