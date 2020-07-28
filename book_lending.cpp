#include <iostream>
#include <fstream>
#include <filesystem>
#include "book_lending.hpp"

// Please note, everything in this code is very unfinished, and is in it's pre-alpha / pre-usefulness stage.

// Initalizting the functions
bool File_Exists();
void Register_Lender();
void Remove_Lender();
void Check_Lender_Dues(std::string library_data);




int main() {
    
    // Checks if the file library.dat exists.
    if (File_Exists() == true) {
        std::cout << "Library.dat file found! \n";
    }
    // General UI. The T variable is the variable used for choice in the CIN and IF statements to send user to the right function.
    int t;

    std::cout << "1. Register lender \n";
    std::cout << "2. Remove lender \n";
    std::cout << "3. Check lender dues \n";
    std::cout << ": ";
    std::cin >> t;
    
    if (t == 1) {
        Register_Lender();
    }

    else if (t == 2) {
        Remove_Lender();
    }

    else if (t == 3) {
        Check_Lender_Dues("library.dat");
    }

    else {
        std::cout << "Invalid input! \n";
        main();
    }

    

}

// This function quickly checks if the library.dat file exists, or creates one if the library file does not exist. 
bool File_Exists() {
    if (std::filesystem::exists("library.dat")) {
        return true;
    }
    else if (std::filesystem::exists("library.dat") == false) {
        std::cout << "No library.dat file found. Creating one, hang on! \n";
        std::fstream data("library.dat", std::ios::out | std::ios::binary);
        return true;
    }
    else {
        return false;
    }
    
}

// Function for registering a lender of a book.
void Register_Lender() {
    
    Book_Lending book;

    std::cout << "Enter name of book: ";
    std::string t; std::getline(std::cin, t);
    std::cin.ignore();

    std::cout << "Enter name of lender: \n" ;
    std::string n; std::getline(std::cin, n);

    // The lender has to be registrered with a book. Will probably add the option to register lenders without any books connected to them, later.
    book.new_lender(n, t);

    std::cout << "Success" << "\n"; main();


}

// Function for removing lenders completly.
void Remove_Lender() {

    Book_Lending lender;

    std::cout << "What lender would you like to remove?: ";

}

// Function for checking lender dues, sorting after the lender whom is the most over their due.
void Check_Lender_Dues(std::string library_data) {
    std::fstream data(library_data, std::ios::out | std::ios::in | std::ios::binary );
    // data.write("test");



}