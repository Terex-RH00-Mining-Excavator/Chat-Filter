#include <iostream>
#include <vector>

void filter(const std::vector<std::string> &words, std::vector<std::string> &hash){
    for(int x = 0; x < hash.size(); x++){
        for(int i =0; i < words.size(); i++){
            if(!(words.at(i) != hash.at(x))){
                for(char &j: hash.at(x)){
                    j = '#';
                }
            }
        }
    }
}

int main()
{
    std::vector<std::string> expletives = {"fuck", "fucking", "cock", "bitch"}; // input curse words
    std::vector<std::string> sentence;
    std::string check;
    
    while(true){
        std::cout << "> ";
        std::cin >> check;
        if(check == "end!") break;
        sentence.push_back(check);
    }
    
    filter(expletives, sentence);
    
    std::cout << "Output: ";
    for(std::string i: sentence){
        std::cout << i << " ";
    }
}
