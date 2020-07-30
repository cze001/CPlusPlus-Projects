#include <iostream>
#include <fstream>

inline std::fstream libraryfile;
// Class for enabling easy addition of data into the library.dat file.
class Book_Lending {
    std::string book_name;
    std::string lender;

    public:

        std::string new_lender(std::string add_lender, std::string new_book, std::string current_date);
        std::string get_lender(std::string list_lender = "Nothing here");
        // void ~Book_Lending();
};