#include "File.hpp"
std::string File::get_newfile()
{return this->_newfile;}
std::string File::get_file()
{return this->_file;}
std::string File::get_str1()
{return this->_str1;}
std::string File::get_str2()
{return this->_str2;}

File::File(char *file,char *str1,char *str2) {
    _file = file;
    _str1 = str1;
    _str2 = str2;
    _newfile = "new_file";
}
File::~File() {}
//
//void File::change_string(File file)
//{
//
//}


