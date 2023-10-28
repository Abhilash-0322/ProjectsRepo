#include <iostream>
#include <iomanip>
int sum1(int first ,int second){
    int result= first + second;
    return result;
}

int main() {
    int firstno {13};
    int secondno {7};
    int sum=firstno+secondno;

    int col_width;
    col_width=20;
    std::cout<<std::right;
    std::cout<<sum<<std::endl;
    std::cout<<std::setw(col_width)<<sum1(22,100)<<std::flush;
    std::cout<<std::setw(col_width)<<"\U0001F604\n";
    std::cout<<"🙂\n";
    std::cout<<"  \n";
    std::cout<<0x0FFF;
    std::cout<<" \n";
    std::cout<<"hello\n";
}