#include<iostream>
int main()
{
    std::string name;
    int roll;
    std::string address;
    std::cout<<"Enter your name : ";
    std::cin>>name;
    std::cout<<"Enter your roll number : ";
    std::cin>>roll;
    std::cout<<"Enter your address : ";
    std::cin>>address;
    std::cout<<"Your name is "<<name<<std::endl;
    std::cout<<"Your roll number is "<<roll<<std::endl;
    std::cout<<"Your address is "<<address<<std::endl;
    return 0;
}
