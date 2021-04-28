#include <iostream>
#include <vector>
void filter(const std::vector<std::string> words, std::vector<std::string> &hash){
    for(int x = 0; x < hash.size(); x++){
        for(int i =0; i < words.size(); i++){
            if(!(words[i] != hash[x])){
                for(char &j: hash[x]){
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
    std::string input;
    while(true){
        std::cout << "> ";
        std::cin >> input;
        if(input == "end!") break;
        sentence.push_back(check);
    }
    
    filter(expletives, sentence);
    
    std::cout << "Output: ";
    for(std::string i: sentence){
        std::cout << i << " ";
    }
}
