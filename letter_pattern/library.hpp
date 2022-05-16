#include <iostream>
#include "library.h"
#include <string.h>

std::string letter_body = "  What is going on with you? Is everything ok? What about rabbits - Lenka and Kenobi?\nSecond one is propably healthy as hell, but Lenka as I remnember was a little sick\nfrom time to time. Hope, it is past yet.\n";

struct Letter_data
{
    std::string first_name;
    std::string second_name;
    std::string receiver;
    std::string friend_name;
    int receiver_age;
    char sex = ' ';
};

void friend_of_both(std::string *, std::string *);
void ask_first_name(std::string *);
void ask_who_receiver(std::string *);
void ask_sex(char *);
void program_header();
void entry_header(std::string *);
void display_greetings(std::string);
void display_letter_begin(std::string);
void display(std::string);
void display_friend_line(std::string *, char *);
void display_birthday_line(std::string, int);
bool age_verification(int &);
void age_saver(int *, std::string *);
void ask_receiver_age(std::string *, int *, std::string *);
