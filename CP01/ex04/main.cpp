#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::string  line;
    std::string  temp;
    std::string  replace_file;
    if (argc != 4)
    {
        std::cout << "Error" << std::endl;
        return (0);
    }
    std::ifstream file(argv[1]);
    if (file.is_open())
    {
        replace_file = argv[1];
        replace_file.append(".replace");
        std::ofstream new_file(replace_file);
        while(getline(file, temp))
        {
            line.append(temp);
            line.append("\n");
        }
        file.close();
        new_file << line;
    }
    else
        std::cout << "File cant opened!" << std::endl;
    return (0);
}