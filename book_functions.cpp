#include <iostream>
#include <fstream>
#include <iterator>
#include "book_lending.hpp"


// Function for when the new_lender class is called. I.e .new_lender(p1, p2) adds new lender.

std::string Book_Lending::new_lender(std::string add_lender, std::string add_book_name, std::string current_date) {
    book_name = add_book_name;
    lender = add_lender;
    libraryfile.open("library.dat", std::ios::binary | std::ios::in | std::ios::out | std::ios::ate); libraryfile << add_book_name << ":" << add_lender << ":" << current_date << "\n";
    libraryfile.close();
    std::cout << "Book " << add_book_name << " added\n";
    std::cout << "Lender " << lender << " registered \n";



}

// Function for getting a specific lender.
std::string Book_Lending::get_lender(std::string list_lender) {
    char buffer[100];
    libraryfile.open("library.dat", std::ios::binary | std::ios::in | std::ios::out | std::ios::ate);
    if (list_lender == "Nothing here") {
        libraryfile.read(buffer, 100);
    }
}

//void Book_Lending::~Book_Lending() {
//    std::cout << "Removed " << book << " and " << lender;


// }


