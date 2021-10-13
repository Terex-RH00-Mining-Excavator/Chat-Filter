#include <iostream>
#include <string>
#include <vector>

void filter(const std::vector<std::string> &words, std::vector<std::string> &hash){
    for(std::string& i: hash){
        for(const std::string& j: words){
            if(i == j) for(char& x: i) x = '#';
        }
    }
}

int main()
{
    std::vector<std::string> expletives = {"fuck", "fucking", "cock", "bitch"}, sentence; // input curse words
    std::string str;
    size_t i = 0;
    std::cout << "> ";
    do{
        std::cin >> str;
        sentence.push_back(str);
    }while(sentence.at(i++)[str.size()-1] != '.');
    filter(expletives, sentence);
    for(const std::string& j: sentence) std::cout << j << " ";
    std::cout<<std::endl;
}
