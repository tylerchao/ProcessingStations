//
//  workflow.cpp
//  ProcessingStation
//
//  Created by Chien-Hsun, Chao on 2025/2/18.
//
/*
 a class for workflow and tow methods for workflows.
 */

#include "workflow.hpp"
#include "processingStations.hpp"
#include <iostream>


using namespace std;

/*
  The method to parse the input string into vector stations. However, the string must be confronted with the format such as "A->B->C", otherwise the program will give an error to the user. Also, if the stations do not exist, the program will tell the user that the input station is invalid.
*/
bool Workflow::anlyse_string_into_workflow(const string& input){
    size_t length= input.length();
    size_t index = 0;

    
    while (index < length) {
        try {
            
            if (input[index] == 'A'){
                stations.push_back(new StationA());
                ++index;
                //cout << "add station A successfully" << endl;
            }else if(input[index] =='B'){
                stations.push_back(new StationB());
                ++index;
                //cout << "add station B successfully" << endl;
            }else if(input[index] =='C'){
                stations.push_back(new StationC());
                ++index;
                //cout << "add station C successfully" << endl;
            }else if(input[index] == '-' && input[index+1] == '>' && index+1 < length){
                index+= 2;
            }else{
                throw invalid_argument("Invalid string symble or station has been detected \n");
            }
        } catch (const exception &e) {
            cerr << e.what()<< endl;
            return false;
        }
        
    }
    return true;
}

/*
This is the whole program logic. Based on the detected station, the station children will be called to operate their processing functions. The return type will be the raw material that has been processed.
 */
int Workflow::logic(int raw){
    int length= int(stations.size());
    int index=0;
    while (length > 0 && index < length) {
            raw = stations.at(index)->processing_raw_material(raw);
            index=stations.at(index)->move_index(raw,index);
        
    }
    return raw;
}


