#include "File.hpp"
bool is_dir(char *av)
{
    struct stat st;

    stat(av, &st);
    if(S_ISDIR(st.st_mode)){
        std::cout<< "is dir" << std::endl;
        return(true);
    }
    return (false);
}

void replace_file(char **av){

    File file(av[1],av[2],av[3]);
    // ofstream kakikomi
    std::ofstream ofs("newfile");
    // ifstream yomikomi
    std::ifstream ifs(file.get_file());

    if (ifs.fail() || ofs.fail()){
        std::cout<<"can't open the file"<<std::endl;
        std::exit(EXIT_FAILURE);
    }
    std::size_t position;
    std::string line;
    while(getline(ifs, line)) {
        while(1) {
            if((position = line.find(file.get_str1())) == std::string::npos){
                ofs << line;
                break ;
            }
            ofs << line.substr(0,position) << file.get_str2();
            line = line.substr(position + file.get_str1().size());
        }
        if(!ifs.eof())
            ofs << std::endl;
    }
}

int main(int ac, char **av){
    char newfile[] = "newfile";

    if(ac != 4) {
        std::cout << "av[1] filename, av[2] string1,av[3] string2" << std::endl;
        return (1);
    }
    if(is_dir(av[1]) || is_dir(newfile))
        return (1);
    replace_file(av);
    return (0);
}
