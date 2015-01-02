#include <iostream>



void OneToX(int startnum, int value)
{
/*    int num = startnum;

    std::cout << num << std::endl;

    if (num < value)
    {
        num++;
        OneToX(num,value);
    }
  */

    if(startnum == value)
    {
        std::cout << startnum << std::endl;
    }
    else if(startnum > value)
    {
        //nothing
    }
    else if(startnum == 6) {
        std::cout << "bad you!" << std::endl;
    }
    else
    {
        std::cout << startnum << std::endl;
        OneToX(++startnum, value);
        std::cout << startnum << std::endl;
    }
}

void OneToX(int value)
{
    int num = 1;


    if (num < value)
    {
        std::cout << num << std::endl;

        OneToX(++num,value);
    }
    else
    {
        std::cout << "Invalid Input";
    }
}

int main()
{
    OneToX(10);

    return 0;
}
