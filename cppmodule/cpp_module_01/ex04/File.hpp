#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sys/stat.h>
class File{
    public:
    std::string get_file();
    std::string get_str1();
    std::string get_str2();
    File(char *file,char *str1,char *str2);
    ~File();
    private:
    std::string _file;
    std::string _str1;
    std::string _str2;
};

#endif
