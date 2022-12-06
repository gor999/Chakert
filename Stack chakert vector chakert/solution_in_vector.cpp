#include<iostream>
#include<vector>
#include<string>

bool is_valid(std::string expression){

std::vector<char> pahoc;
    for(int i = 0; i < expression.size(); ++i){
        if(expression[i] == '{'){
            if(expression[i + 1] == '}'){
                pahoc.push_back(expression[i]);
                pahoc.push_back(expression[i + 1]);
            }else{
                return false;
            }
        }
        else if(expression[i] == '('){
            if(expression[i + 1] == ')'){
                pahoc.push_back(expression[i]);
                pahoc.push_back(expression[i + 1]);
            }else{
                return false;
            }
        }
        else if(expression[i] == '['){
            if(expression[i + 1] == ']'){
                pahoc.push_back(expression[i]);
                pahoc.push_back(expression[i + 1]);
            }else{
                return false;
            }
        }
    }
    std::string paharan;
    for(int i = 0; i < pahoc.size(); ++i){
        paharan += pahoc[i]; 
    }
    if(paharan == expression){
        return true;
    }else{
        return false;
    }
}






int main()
{


// std::string s = "()]{}";
// std::string s = "()]{}";
//std::string s = "()[][]{}";
std::string s = ")[][]{}";


std::cout<<is_valid(s)<<std::endl;




    return 0;
}