#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

struct card{
    int colorID;
    int numID;
};

int main(){
    vector<string> colorMap;
    vector<string> numMap;

    colorMap.push_back("Spade");
	colorMap.push_back("Heart");
	colorMap.push_back("Club");
	colorMap.push_back("Diamond");

    numMap.push_back("A");
	numMap.push_back("2");
	numMap.push_back("3");
	numMap.push_back("4");
	numMap.push_back("5");
	numMap.push_back("6");
	numMap.push_back("7");
	numMap.push_back("8");
	numMap.push_back("9");
	numMap.push_back("10");
	numMap.push_back("J");
	numMap.push_back("Q");
	numMap.push_back("K");

    for(int j=0; j < colorMap.size(); j++){
        cout<< colorMap[j]<<endl;
    }
    
    return 0;
    
}