//
// Created by Satori on 2022/6/3.
//

#ifndef PRO8_BOOKSTORE_H
#define PRO8_BOOKSTORE_H

#include <iostream>
using namespace std;

class BookStore{
protected:
    string name;
    string address;
    int numBook;

public:
    BookStore(string n, string a, int b);
    void set_name(string n);
    string get_name();
    void set_address(string a);
    string get_address();
    void set_numBook(int b);
    int get_numBook();
    virtual float get_onlineTax();
};


#endif //PRO8_BOOKSTORE_H
