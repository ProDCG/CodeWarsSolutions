#include <string>

bool is_isogram(std::string str) {
    
    for(int a = 0; a < str.size(); a++){
        str[a]=std::tolower(str[a]);
    }

    if(str == "") {
        return true;
    }
    for(int i =0;i<str.size()-1;i++){
        for(int j=i+1;j<str.size();j++){
            if(str[j]==str[i]) {return false;}
        }
    }
    return true;
}