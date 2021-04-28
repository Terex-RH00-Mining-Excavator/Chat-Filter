#include <iostream>
#include <vector>

std::vector<std::string> filter(std::vector<std::string> words, std::vector<std::string> hash){
    for(int x = 0; x < hash.size(); x++){
        for(int i =0; i < words.size(); i++){
            if(words[i] == hash[x]){
                for(char &j: hash[x]){
                    j = '#';
                }
            }
        }
    }
    return hash;
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
    
    std::cout << "Output: ";
    std::vector<std::string> FF = filter(expletives, sentence);
    for(std::string i: FF){
        std::cout << i << " ";
    }
}
