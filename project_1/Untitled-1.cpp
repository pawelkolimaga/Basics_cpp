#include <iostream>
#include <string>
#define PI 3.14

void display_description(double result, double r)
{
    std::system("cls");
    std::cout << "\n\nCircle field with r of circle: " << r << ", is " << result << "\n\n";
}

void display_description(double result, double side_size1, double side_size2)
{

    if (side_size1 == side_size2)
    {
        std::system("cls");
        std::cout << "\n\nSquere area with side size: " << side_size1 << ", is " << result << "\n\n";
    }
    else
    {
        std::system("cls");
        std::cout << "\n\nFigure area is: " << result << "\n\n";
    }
}

void initMenuBox()
{

    std::cout << "Choose the option (0-4)\n";
    std::cout << "1. Circle field \n";
    std::cout << "2. Rectangle area \n";
    std::cout << "3. Squere area \n";
    std::cout << "4. Triangular area \n\n";
    std::cout << "0. Exit \n\n";
}

double get_circle_field(double r)
{
    display_description((PI * r * r), r);
    return PI * r * r;
}

double get_triangular_area(double bottom_size, double triangule_height)
{
    display_description((0.5 * bottom_size * triangule_height), bottom_size, triangule_height);
    return 0.5 * bottom_size * triangule_height;
}

double get_squere_area(double side_size)
{
    display_description(side_size * side_size, side_size, side_size);
    return side_size * side_size;
}

double get_rectangular_area(double side1, double side2)
{
    display_description(side1 * side2, side1, side2);
    return side1 * side2;
}

void menuDecision(int user_choice)
{
    double r, bottom_size, triangule_height, squere_side_size, rect_side1, rect_side2;
    switch (user_choice)
    {
    case 1:
    {
        std::cout << "Provide the R of circle: ";
        std::cin >> r;
        get_circle_field(r);
        break;
    }
    case 2:
    {
        std::cout << "\nProvide the rectangular first side size: ";
        std::cin >> rect_side1;
        std::cout << "\nProvide the rectangular second side size: ";
        std::cin >> rect_side2;
        get_rectangular_area(rect_side1, rect_side2);
        break;
    }
    case 3:
    {
        std::cout << "Provide the squere side size: ";
        std::cin >> squere_side_size;
        get_squere_area(squere_side_size);
        break;
    }
    case 4:
    {
        std::cout << "\nProvide the bottom triangular size: ";
        std::cin >> bottom_size;
        std::cout << "\nProvide the triangular height: ";
        std::cin >> triangule_height;
        get_triangular_area(bottom_size, triangule_height);
        break;
    }
    case 0:
    {
        std::system("exit");
        break;
    }
    default:
        std::system("cls");
        std::cout << "\nYou coose wrong option\n\n";
    }
}

int main()
{
    char yes_or_no;
    size_t user_choice;
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