#include "readFile.hpp"
#include <iostream>
#include <regex>
#include <string>

std::string parse(std::string content){
	std::regex reg("\\S+");
	std::smatch m;
	while(std::regex_search(content, m, reg)){
		std::cout << m[0] << std::endl;
		content = m.suffix().str();
	}
}