#include <iostream>
#include <vector>
#include "book.h"
#include "book_functions.h"

using namespace std;

// Hàm tìm ki?m sách theo các tiêu chí
void searchBooks(vector<book>& bookList) {
    int searchChoice;
    string searchId, searchName, searchAuthor, searchGenre;
    int minPrice, maxPrice;

    cout << "\n===== TIM KIEM SACH =====" << endl;
    cout << "1. Tim sach theo ma" << endl;
    cout << "2. Tim sach theo ten" << endl;
    cout << "3. Tim sach theo tac gia" << endl;
    cout << "4. Tim sach theo the loai" << endl;
    cout << "5. Tim sach theo khoang gia" << endl;
    cout << "0. Quay lai" << endl;
    cout << "Nhap lua chon: ";
    cin >> searchChoice;

    switch (searchChoice) {
        case 1:
            cout << "Nhap ma sach can tim: ";
            cin >> searchId;
            {
                book* result = findBookById(bookList, searchId);
                if (result != NULL) {
                    cout << "\n===== KET QUA TIM KIEM =====" << endl;
                    result->displayBook();
                } else {
                    cout << "Khong tim thay sach co ma " << searchId << endl;
                }
            }
            break;

        case 2:
            cout << "Nhap ten sach can tim: ";
            cin.ignore();  // Ð? xóa b? d?m d?u vào
            getline(cin, searchName);
            {
                vector<book*> results = findBooksByName(bookList, searchName);
                displayBookPtrs(results);
            }
            break;

        case 3:
            cout << "Nhap ten tac gia can tim: ";
            cin.ignore();
            getline(cin, searchAuthor);
            {
                vector<book*> results = findBooksByAuthor(bookList, searchAuthor);
                displayBookPtrs(results);
            }
            break;

        case 4:
            cout << "Nhap the loai can tim: ";
            cin.ignore();
            getline(cin, searchGenre);
            {
                vector<book*> results = findBooksByGenre(bookList, searchGenre);
                displayBookPtrs(results);
            }
            break;

        case 5:
            cout << "Nhap gia thap nhat: ";
            cin >> minPrice;
            cout << "Nhap gia cao nhat: ";
            cin >> maxPrice;
            {
                vector<book*> results = findBooksByPriceRange(bookList, minPrice, maxPrice);
                displayBookPtrs(results);
            }
            break;

        case 0:
            cout << "Quay lai!" << endl;
            break;

        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
    }
}

int main() {
    vector<book> bookList;
    int choice, n;

    do {
        cout << "\n===== QUAN LY SACH =====" << endl;
        cout << "1. Nhap danh sach sach" << endl;
        cout << "2. Hien thi danh sach sach" << endl;
        cout << "3. Tim sach" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Nhap so luong sach can them: ";
                cin >> n;
                inputBooks(bookList, n);
                break;

            case 2:
                displayBooks(bookList);
                break;

            case 3:
                searchBooks(bookList);  // G?i hàm tìm ki?m
                break;

            case 0:
                cout << "Tam biet!" << endl;
                break;

            default:
                cout << "Lua chon khong hop le!" << endl;
        }
    } while (choice != 0);

    return 0;
}

