#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

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

std::string	change_text(std::string text, char **argv)
{
	std::string	temp;
	std::string	line;
	std::string	newvalue;
	std::string	result;
	std::istringstream iss(text);

	while(std::getline(iss, line))
	{
		while (iss >> temp) {
			if (!temp.compare(argv[2]))
			{
				newvalue.append(argv[3]);
				result.append(newvalue);
			}
			else
				result.append(temp);
		}
		result.append("\n");
	}
	return (result);
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
