#include "library.h"

int main(int argc, char *charv[])
{

    do
    {
        std::system("cls"); // add comment
        initMenuBox();
        std::cin >> user_choice;
        menuDecision(user_choice);
        if (user_choice == 0)
        {
            break;
        }
        else
        {
            std::cout << "\nDo you want to pick another figure? (Y/n) ";
            do
            {
                std::cin >> yes_or_no;
            } while (!((yes_or_no == 'Y') || (yes_or_no == 'y') || (yes_or_no == 'n') || (yes_or_no == 'N')));
            std::system("cls");
        }
    } while ((yes_or_no == 'Y') || (yes_or_no == 'y'));
}