#include <iostream>
#include <regex>
#include <fstream>
#include "readFile.hpp"


std::string read_file(int argc, char** argv){
	std::string file(argv[1]);

	std::regex reg(".+\\.idk");
	if(!std::regex_match(file, reg))file+=".idk";

	std::string content;

	std::fstream f;
	f.open(file,std::ios::in);

	if (!f.is_open()){ printf("error: file not found\nhint: make sure your file in the correct directory\n") ;return std::string(""); }

	std::string temp;
	while(std::getline(f, temp)){
		content += temp;
		content += "\n";
	}
	return content;

}