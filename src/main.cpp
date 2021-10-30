#include <iostream>
#include <regex>
#include "readFile.hpp"
#include "parse.hpp"

int main (int argc, char** argv){
	if(argc < 2){printf("error: no input files\nhint: idk {file_name}.idk\n");return 0;}

	std::string content = read_file(argc, argv);
	parse(content);
}
