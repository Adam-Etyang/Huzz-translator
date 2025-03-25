#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <unordered_map>
std::string translate(std::string word)
{
    std::vector<char>vowels;
    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');
    std::unordered_map<std::string,std::string>dictionary;
    dictionary["hoe"] = "huzz";
    dictionary["girl"] = "huzz";
    dictionary["bro"] = "bruzz";
    dictionary["deadass"] = "deaduzz";
    dictionary["employed"] = "empluzzed";
    dictionary["unemployed"] = "unempluzzed";
    std::unordered_map<std::string,std::string>::iterator it = dictionary.find(word);

    int vowel_count =0;
    if(it != dictionary.end())
    {
        return it->second;   
    }
    size_t i = 0;
    size_t secondvowelindex = 0;
    while (i<word.length())
    {
        if(std::find(vowels.begin(),vowels.end(),word[i]) != vowels.end())
        {
            vowel_count ++;
            if(vowel_count == 2)
            {
                secondvowelindex = i;
                break;
            }
        }
        i++;
    }
    if(vowel_count < 2)
    {
        i = 0;
        while(i < word.length())
        {
            if(std::find(vowels.begin(),vowels.end(),word[i])!= vowels.end())
            {
                secondvowelindex = i;
                break;
            }
            i++;
        }
    }
    if(vowel_count > 0)
    {
        word.insert(secondvowelindex, "uzz");
        if(i+3<word.length())
        {
            word.erase(i+3);
        }
    }
    return word;
}
int main()
{
    std::string word;
    std::cout<<"-----------huzz translator--------------"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"enter word: ";
    while(getline(std::cin,word))
    {
    std::cout<<"word: "<<translate(word)<<"\n";
    std::cout<<std::endl;
    
    }

    
    return 0;
}
