//
//  processingStations.cpp
//  ProcessingStation
//
//  Created by Chien-Hsun, Chao on 2025/2/17.
//
/*
 Chidren station A, B, C, if there is more station in future, they could be added as children
 */

#include "processingStations.hpp"
#include <iostream>

using namespace std;

int global_freq_A, global_freq_B, global_freq_C;;

int ProcessingStations::processing_raw_material(int input_raw){
    return  input_raw;
}

int ProcessingStations::move_index(int input_raw,int index){
    return index;
}


/*
 The operation logic for station A is that adds 1 to the received number and sends it to the next station.
 */
int StationA::processing_raw_material(int input_raw) {
    ++global_freq_A;
    return ++input_raw;
}

/*
 moving index to the next after processing station A
 */
int StationA::move_index(int input_raw, int index) {
    return ++index;
}

/*
 The operation logic for station B is that subtracts 1 from the received number and sends it to the next station.
 */
int StationB::processing_raw_material(int input_raw) {
    ++global_freq_B;
    return --input_raw;
}

/*
 moving index to the next after processing station B
 */
int StationB::move_index(int input_raw, int index){
    return ++index;
}

/*
 The operation logic for station C is that takes different actions based on the received number.
 
 Suppose the processing workflow is C→A→B:
 - If the number is odd, send the number to the next station. e.g., if the number
 received is 1, it will be sent to station A.
 
 -If the number is even, skip the next station and send the number to the station
 after next. e.g., if the number received is 2, it will skip station A and send the
 number to station B.
 */
int StationC::processing_raw_material(int input_raw){
    //do nothing
    ++global_freq_C;
    return input_raw;
}

/*
 moving idex to the next depends on checking the input raw whether evern or odd
 */
int StationC::move_index(int input_raw, int index){
    if (!is_even_or_odd(input_raw)){
        // even
        return ++index;
    }else{
        // odd
        return index+=2;
    }
}

/*
 Identify if raw material is even or odd.
 */
bool StationC::is_even_or_odd(int input_raw){
    // even, true ; odd, false
    return (input_raw % 2 == 0);
}






