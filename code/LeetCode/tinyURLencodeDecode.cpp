//
//
// @..*
//
//  Created by Choonghun Lee on 9/11/18.
//  @..
//

#include "stdc++.h"

 

using namespace std;

unordered_map<string, string> short2long, long2short;

string dict = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

short2long.clear();
long2short.clear();
srand(time(NULL));


// Encodes a URL to a shortened URL.
string encode(string longUrl) {
    
    if (long2short.count(longUrl)) {
        return "http://tinyurl.com/" + long2short[longUrl];
    }
    
    int idx = 0;
    
    string randStr;
    
    for (int i = 0; i < 6; ++i)
        randStr.push_back(dict[rand() % 62]);
    
    while (short2long.count(randStr) != 0 ) {
        
        randStr[idx] = dict[rand() % 62];
        idx = (idx + 1) % 5;
        
    }
    
    short2long [randStr] = longUrl;
    long2short[longUrl] = randStr;
    
    return "http://tinyurl.com/" + randStr;
}

// Decodes a shortened URL to its original URL.
string decode(string shortUrl) {
    
    string randStr = shortUrl.substr(shortUrl.find_last_of("/") + 1);
    
    return short2long.count(randStr) ? short2long[randStr] : shortUrl;
}





int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    std::cout << "Hello, World!\n";
    return 0;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    std::cout << "Hello, World!\n";
    return 0;
}