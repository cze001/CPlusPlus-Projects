#include <iostream>
#include <fstream>
void new_lender(char add_lender, char add_book_name, char current_date);

struct book {
    char actual_lender;
    char actual_book;
    char actual_time;
};

inline std::fstream libraryfile;
// Class for enabling easy addition of data into the library.dat file.
class Book_Lending {
    std::string book_name;
    std::string lender;

    public:

        std::string get_lender(std::string list_lender = "Nothing here");
        std::string user(std::string book, std::string user);
        std::string date(std::string day, std::string month, std::string year);
        std::string time(std::string hour, std::string minute, std::string second);
        
        // void ~Book_Lending();
};