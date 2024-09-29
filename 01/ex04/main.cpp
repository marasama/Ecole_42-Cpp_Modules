#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, const char *argv[])
{
	if (argc == 4)
	{
		std::ifstream file;
		std::ofstream newFile;
		std::string allFile;
		int index;
		char letter;
		file.open(argv[1]);
		if (!file.is_open())
		{
			std::cerr << "Please enter a correct filename" << std::endl;
			return (1);
		}
		while (!file.eof() && file >> std::noskipws >> letter)
			allFile += letter;
		newFile.open((std::string(argv[1]) + ".replace").c_str());
		file.close();
		if (!newFile.is_open())
		{
			std::cerr << "Could not create a new file" << std::endl;
			return (1);
		}
		for (int i = 0; i < (int)allFile.size(); i++)
		{
			index = allFile.find(argv[2], i);
			if (index != -1 && index == i)
			{
				newFile << argv[3];
				i += std::string(argv[2]).size() - 1;
			}
			else
				newFile << allFile[i];
		}
		newFile.close();
	}
	else
	{
		std::cout << "Please enter 3 arguments with this order:" << std::endl;
		std::cout << "1 - Filename" << std::endl;
		std::cout << "2 - Word to replace" << std::endl;
		std::cout << "2 - Word for replace" << std::endl;
	}
	return (0);
}
