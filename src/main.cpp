#include <iostream>
#include <string>
#include "testing.h"

int main(int argc, char **argv)
{
    std::cout << "Hello World" << std::endl;

    // Call function
    std::string file_path = "C:/Ashwin/My_Programming/Programs/rviz/temp/data/example.tdms";
    int error_code = ReadTdms(file_path.c_str());

    std::cout << "Error code: " << error_code << std::endl;

    return 0;
}