/* #include "Array.hpp" */

/* int	main(void) */
/* { */
/* 	Array<std::string> array(2); */
/* 	array[0] = "A"; */
/* 	array[1] = "B"; */	
/* 	try */
/* 	{ */
/* 		std::cout << array[0] << std::endl; */
/* 		std::cout << array[1] << std::endl; */
/* 		array[2] = "C"; */
/* 		std::cout << array[2] << std::endl; */
/* 	} */
/* 	catch	(std::out_of_range &e) */
/* 	{ */
/* 		std ::cout << e.what() << std::endl; */
/* 	} */
/* 	return (0); */
/* } */
#include <iostream>

#include "Array.hpp"



#define MAX_VAL 750

int main(int, char**)

{

    Array<int> numbers(MAX_VAL);

    int* mirror = new int[MAX_VAL];

    srand(time(NULL));

    for (int i = 0; i < MAX_VAL; i++)

    {

        const int value = rand();

        numbers[i] = value;

        mirror[i] = value;

    }

    //SCOPE

    {

        Array<int> tmp = numbers;

        Array<int> test(tmp);

    }



    for (int i = 0; i < MAX_VAL; i++)

    {

        if (mirror[i] != numbers[i])

        {

            std::cerr << "didn't save the same value!!" << std::endl;

            return 1;

        }

    }

    try

    {

        numbers[-2] = 0;

    }

    catch(const std::exception& e)

    {

        std::cerr << e.what() << '\n';

    }

    try

    {

        numbers[MAX_VAL] = 0;

    }

    catch(const std::exception& e)

    {

        std::cerr << e.what() << '\n';

    }



    for (int i = 0; i < MAX_VAL; i++)

    {

        numbers[i] = rand();

    }

    delete [] mirror;//

    return 0;

}
