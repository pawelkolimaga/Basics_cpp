#include <iostream>

void program_header()
{
    std::cout << "Letter sample v0.1  ||   author: pkoli\n\n"
              << "   **********  \n"
              << "   **********  \n\n\n\t";
}

void display(std::string str)
{
    std::cout << str;
}

void ask_first_name(std::string *str)
{
    std::cout << "Who are You? ";
    std::cin >> *str;
}
void ask_who_receiver(std::string *str)
{
    std::cout << "\n\tTo whom you want to write? ";
    std::cin >> *str;
}

void friend_of_both(std::string *receiver_name, std::string *friend_of_both)
{
    std::cout << "\n\tWho is friend of yours - your and "
              << *receiver_name
              << "? ";
    std::cin >> *friend_of_both;
}

void ask_sex(char *sex)
{
    std::cout << "\n\tAnd is it - male or female?\n"
              << "\tPick:\n\t1 - Female\n\t2 - Male\n\t";
    std::cin >> *sex;
}

void display_greetings(std::string str)
{
    std::cout << "\nHello " << str << "\n";
}

void entry_header(std::string *str)
{
    std::cout << "Letter sample v0.1  ||   author: pkoli\n\n"
              << "   **********  \n"
              << "   **********  \n\n\n\t";
    display_greetings(*str);
}

void display_letter_begin(std::string str)
{
    std::cout << "\nDear " << str << ",\n\n";
}

void display_friend_line(std::string *friend_name, char *sex)
{
    std::cout << "Did you see " << *friend_name << " last time? I wondering what is with him.\n";
    *sex == '1' ? std::cout << "If you gonna see "
                            << *friend_name
                            << ", please tell her call me.\n"
                : std::cout << "If you gonna see "
                            << *friend_name
                            << ", please tell him call me.\n";
}

bool age_verification(int &age)
{
    if (age <= 0 || age >= 120)
    {
        return true;
    }
    return false;
}

void age_saver(int *age_var, std::string *object_first_name)
{
    std::cin >> *age_var;
    while (age_verification(*age_var))
    {
        std::system("cls");
        entry_header(object_first_name);
        std::cout << "\n\n\t\tAre you kiddin' me?! Put the proper age! ";
        std::cin >> *age_var;
    }
}

void display_birthday_line(std::string str, int age)
{
    std::cout << "I have heard "
              << str
              << ", that you had a birthday last time"
              << " and you are "
              << age
              << " now!";
}

void ask_receiver_age(std::string *receiver_name, int *recev_age, std::string *writer_name)
{
    std::cout << "\n\tWhat is age of " << *receiver_name << "?\n\t";
    age_saver(recev_age, writer_name);
}
