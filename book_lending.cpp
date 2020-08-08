#include <iostream>
#include <fstream>
#include <filesystem>
#include "book_lending.hpp"
#include "other_functions.cpp"


// Please note, everything in this code is very unfinished, and is in it's pre-alpha / pre-usefulness stage.

// Initalizting the functions
bool File_Exists();
void Register_Lender();
void Remove_Lender();
void Check_Lender_Dues(std::string library_data = "Everyone");




int main() {
    int t = 0;
    int c = 0;

    // Checks if the file library.dat exists.
    if (File_Exists() == true) {
        std::cout << "Library.dat file found! \n";
    }
    // General UI. The T variable is the variable used for choice in the CIN and IF statements to send user to the right function.
    std::cout << "*** Book Lending System *** \n";
    std::cout << "1. Register lender \n";
    std::cout << "2. Remove lender \n";
    std::cout << "3. Check lender dues \n";
    std::cout << "4. Register book from pre-existing lender \n";
    std::cout << "5. Remove book from pre-existing lender \n";
    std::cout << ": ";
    std::cin >> t;

    switch(t) {
        case 1: 
            Register_Lender();
            break;
        case 2:
            Remove_Lender();
            break;
        case 3:
            Check_Lender_Dues();
            break;
        default:
            std::cout << "Invalid output: " << t << "\n";
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
        data.close();
        return true;
    }
    else {
        return false;
    }
    
}

// Function for registering a lender of a book.
void Register_Lender() {
    
    time_t k = std::time(0);

    Book_Lending book;

    std::cout << "Enter name of book: ";
    char t; std::cin >> t;

    std::cout << "Enter name of lender: " ;
    char n; std::cin >> n;

    // The lender has to be registrered with a book. Will probably add the option to register lenders without any books connected to them, later.
    new_lender(n, t, currentDateTime());


    std::cout << "Success! " << "\n"; main();


}

// Function for removing lenders completly.
void Remove_Lender() {

    Book_Lending lender;

    std::cout << "What lender would you like to remove?: ";

}

// Function for checking lender dues, sorting after the lender whom is the most over their due.
void Check_Lender_Dues(std::string library_data) {
    Book_Lending temp;

    temp.get_lender();
    
    main();



}