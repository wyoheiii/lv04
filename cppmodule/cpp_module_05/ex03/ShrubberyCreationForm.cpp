#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
ShrubberyCreationForm::ShrubberyCreationForm():Form("Shru", signRequired, execRequired){
    _target = "t";
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):Form("Shru", signRequired, execRequired){
    _target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s):Form("Shru", signRequired, execRequired){
    *this = s;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s){
    if(this != &s)
        _target = s._target;
    return *this;
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    execAndSignConfirmation(executor);
    std::string fileName = _target + "_shrubery";

    std::string tree = "            # #### ####\n"
                       "        ### ###|### |/####\n"
                       "        #####/ #||/##/_/##/_#\n"
                       "      ###  #####|/  ### ###\n"
                       "    ##_ _# _ ## | #/###_/_####\n"
                       "   ## #### #   #| /  #### ##/##\n"
                       "    __#_--###`  |{,###---###-~\n"
                       "                }{\n"
                       "               }}{\n"
                       "               }}{\n"
                       "          ejm  {{}\n"
                       "         , -=-~{ .-^- _\n"
                       "               `}\n"
                       "                {`";
    
    std::ofstream ofs;
    ofs.open(fileName.c_str(), std::ios::out);
    if(ofs.fail())
        throw CantOpen();
    ofs << tree << std::endl;
    ofs.close();
}