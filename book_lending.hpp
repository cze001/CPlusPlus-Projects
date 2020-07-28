#include <iostream>
// Class for enabling easy addition of data into the library.dat file.
class Book_Lending {
    std::string book_name;
    std::string lender;

    public:

        std::string new_lender(std::string add_lender, std::string new_book );
        std::string get_lender(std::string list_lender);
        // void ~Book_Lending();
};