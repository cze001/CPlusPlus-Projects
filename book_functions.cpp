#include <iostream>
#include <fstream>
#include <iterator>
#include "book_lending.hpp"

// Function for when the new_lender class is called. I.e .new_lender(p1, p2) adds new lender.

void new_lender(char add_lender, char add_book_name, char current_date) {
    
    book add_book_lender[3];

    add_book_lender[0].actual_lender = add_lender;
    add_book_lender[1].actual_book = add_book_name;
    add_book_lender[2].actual_time = current_date;

    libraryfile.open("library.dat", std::ios::binary | std::ios::out );
    for (int i = 0; i < 3; i++) {
        libraryfile.write((char *) &add_book_lender, sizeof(add_book_lender));
    }
    libraryfile.close();

    std::cout << "Book " << add_book_name << " added\n";
    std::cout << "Lender " << add_lender << " registered \n";



}

// Function for getting a specific lender.
std::string Book_Lending::get_lender(std::string list_lender) {

    book test;    
 
    libraryfile.open("library.dat", std::ios::binary | std::ios::in);

    libraryfile.seekg(0, std::ios::end);
    int size = libraryfile.tellg();
    libraryfile.seekg(0, std::ios::beg);

    if (!libraryfile) {
        std::cout << "Error reading the library.dat file while calling get_lender \n";
    }

    if (list_lender == "Nothing here") {
      while (libraryfile.tellg() < size) {
        libraryfile.read((char*) test.actual_lender, sizeof(test.actual_lender));
      }




            
    }    
    libraryfile.close();


    }


//void Book_Lending::~Book_Lending() {
//    std::cout << "Removed " << book << " and " << lender;


// }


std::string Book_Lending::user(std::string book, std::string user) {
    Book_Lending data;
    
    data.get_lender();

}
