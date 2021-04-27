#include <iostream>
#include <vector>
using namespace std;
vector<string> filter(vector<string> words, vector<string> hash){
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
    vector<string> expletives = {"fuck", "fucking", "cock", "bitch"}; // input curse words
    vector<string> sentence;
    string check;
    int i, v;
    cout << "Length: ";
    cin >> v;
    for(i =0; i < v; i++){
        cout << "> ";
        cin >> check;
        sentence.push_back(check);
    }
    cout << "Output: ";
    vector<string> FF = filter(expletives, sentence);
    for(string i: FF){
        cout << i << " ";
    }
}
