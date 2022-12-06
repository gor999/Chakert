#include<iostream>
#include<stack>
#include<string>



bool is_valid(std::string expression){
    std::stack<char> pahoc;
    for(int i = 0; i < expression.size(); ++i){
        if(expression[i] == '('){
            if(expression[i + 1] == ')'){
                pahoc.push(expression[i]);
                pahoc.push(expression[i + 1]);
            }else{
                return  false;
            }
        }
        else if(expression[i] == '['){
            if(expression[i + 1] == ']'){
                pahoc.push(expression[i]);
                pahoc.push(expression[i + 1]);
            }
            else{
                return false;
            }
        }

        else if(expression[i] == '{'){
            if(expression[i + 1] == '}'){
                pahoc.push(expression[i]);
                pahoc.push(expression[i + 1]);
            }
            else{
                return false;
            }
        }
    }
    if(pahoc.size() == expression.size()){
        return true;
    }

    return false;



}








int main(){


// std::string s = "()]{}";
// std::string s = "()]{}";
std::string s = "()[][]{}";
// std::string s = "[][]{}";


std::cout<<is_valid(s)<<std::endl;

///chem hascrel shat jamanak caxsel lucman vra u amenaprimitiv lucumn em arajarkel


    return 0;
}