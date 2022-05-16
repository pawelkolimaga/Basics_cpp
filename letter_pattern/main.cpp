#include <iostream>
#include "library.hpp"

main()
{
    Letter_data writer_1;

    program_header();
    ask_first_name(&writer_1.first_name);
    display_greetings(writer_1.first_name);
    ask_who_receiver(&writer_1.receiver);
    friend_of_both(&writer_1.receiver, &writer_1.friend_name);
    ask_sex(&writer_1.sex);

    /*
        Dependency: age should be >= 0 or <=120
    */
    ask_receiver_age(&writer_1.receiver, &writer_1.receiver_age, &writer_1.first_name);

    /*
        Writing a letter with received data
    */
    display_letter_begin(writer_1.receiver);
    display(letter_body);
    display_friend_line(&writer_1.friend_name, &writer_1.sex);
    display_birthday_line(writer_1.receiver, writer_1.receiver_age);
}