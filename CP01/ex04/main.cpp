#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

void	error()
{
	std::cerr << "Error" << std::endl;
	exit(0);
}

std::string copyfile(char **argv)
{
	std::string	line;
	std::string	temp;
	std::ifstream file(argv[1]);

	if (file.is_open())
	{
		while (getline(file, temp))
		{
			line.append(temp);
			line.append("\n");
		}
		file.close();
	}
	return (line);
}

std::string change_text(std::string text, char **argv)
{
	std::string	temp;
	std::string	subs;
	std::string	line;
	size_t		temp2;

	while (42)
	{
		temp2 = text.find(argv[2]);
		if (temp2 == text.npos)
			break;
		text.erase(temp2, strlen(argv[2]));
		text.insert(temp2, argv[3]);
	}
	return (text);
}

void	create_file(char **argv, std::string text)
{
	std::string  replace_file;
	replace_file = argv[1];
	replace_file.append(".replace");
	std::ofstream new_file(replace_file);
	new_file << text;   
}

int main(int argc, char **argv)
{
    if (argc != 4)
	    error();
    if (copyfile(argv).empty()) 
	    error();
    create_file(argv, change_text(copyfile(argv), argv));
    return (0);
}
