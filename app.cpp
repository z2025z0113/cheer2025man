#include <iostream>
#include <array>
#include <string>
#include <map>
#include <unordered_map>


using namespace std;

float income20250507();
float expenditure20250507();
int main(){
	cout<<"hallo me"<<endl;
	//e le me .ha er bin finance .0510 [756.48]
	//give one string array .[amount,date]
	//array<string,3> arrayHa = 
	map<string,float> mapHa;
	mapHa["2025-0510"] = 756.48;
	mapHa["2025-0610"] = 756.48;
	mapHa["2025-0710"] = 756.48;
	mapHa["2025-0810"] = 756.48;
	mapHa["2025-0910"] = 756.48;
	mapHa["2025-1010"] = 756.48;
	mapHa["2025-1110"] = 770.26;
	//cout<<mapHa["2025-0510"]<<endl;
	for(map<string,float>::iterator it=mapHa.begin();it!=mapHa.end();++it){
		cout<<it->first << ": "<<it->second <<endl;
	}

	map<string,float> mapJb;
	mapJb["2025-0522"] = 349.5;
	mapJb["2025-0622"] = 361.15;
	mapJb["2025-0722"] = 349.5;
	mapJb["2025-0822"] = 361.15;
	mapJb["2025-0922"] = 28361.15;
	mapJb["2025-1022"] = 2024.6;

	map<string,float> mapHb;
	mapHb["2025-0520"] = 4091.82;
	mapHb["2025-0620"] = 2058.11;
	mapHb["2025-0720"] = 2058.11;
	mapHb["2025-0820"] = 1162.37;
	mapHb["2025-0920"] = 1162.37;
	mapHb["2025-1020"] = 1162.37;
	mapHb["2025-1120"] = 1162.37;

	cout << "see today status :" << endl;
	cout << "today money income & expenditure result is " << income20250507() + expenditure20250507()<<endl;
	//every day income & expanditure.
	
	//end .program 2025 0507 1702
	return 0;
}

float income20250507(){
	float jd_ms = 25.7 -3;
	float hummingbird = 35.2;
	float result = jd_ms + hummingbird;
	return 0 + result;
}
float expenditure20250507(){
	return 0;
}
//end.2025 0507 1551
