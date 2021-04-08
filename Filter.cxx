#include <iostream>
#include <vector>
using namespace std;
int find_letter_of(char check, string letters){
    for(int i =0; i < letters.length(); i++){
        if(check == letters[i]){
            return 1;
        } else if (check != letters[i]){
            continue;
        }
    }
    return 0;
}
vector<string> filter(vector<string> words, vector<string> hash){
    for(int x = 0; x < hash.size(); x++){
        for(int i =0; i < words.size(); i++){
            if(words[i] == hash.at(x)){
                for(int j =0; j < hash[x].size(); j++){
                    hash.at(x)[j] = '#';
                }
                
            } else if(words[i] != hash.at(x)){
                continue;
            }
        }
    }
    return hash;
}
int main()
{
    vector<string> myw = {"fuck", "fucking", "cock", "bitch"};
    vector<string> myarr = {"you", "fucking", "cock", "head"};
    auto FF = filter(myw, myarr);
    for(int i = 0; i < FF.size(); i++){
        cout << FF[i] << " ";
    }
}


