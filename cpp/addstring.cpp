#include<iostream>
#include<string>
#include<cstring> 
using namespace std;
int main(){
    char num1[]="429";
    char num2[]="77";
    int number1=0,number2=0,digit,number3=0;
        for(int i=0;i<strlen(num1);i++){
            digit=num1[(strlen(num1)-1)-i]- '0';
            number1=number1*10+digit;
        }
        for(int i=0;i<strlen(num2);i++){
            digit=num2[(strlen(num2)-1)-i]- '0';
            number2=number2*10+digit;
        }
        number3=number1+number2;
        // char st[30];
        // int count=0;
        // while(number3>0){
        //     st[count]=number3%10+48;
        //     number3/=10;
        //     count++;
        // }
        std::string strNumber = std::to_string(number3);
        cout<<strNumber;
}