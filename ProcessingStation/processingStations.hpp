//
//  processingStations.hpp
//  ProcessingStation
//
//  Created by Chien-Hsun, Chao on 2025/2/17.
//

#ifndef processingStations_hpp
#define processingStations_hpp

#include <stdio.h>

extern int global_freq_A;
extern int global_freq_B;
extern int global_freq_C;

class ProcessingStations{
    
public:
    virtual int processing_raw_material(int input_raw);
    
    virtual int move_index(int input_raw,int index);
};


class StationA: public ProcessingStations{
public:
    
    int processing_raw_material(int input_raw) override;
    
    int move_index(int input_raw, int index) override;
};

class StationB: public ProcessingStations{
public:
    
    int processing_raw_material(int input_raw) override;
    int move_index(int input_raw, int index) override;
};


class StationC: public ProcessingStations{
public:
    int processing_raw_material(int input_raw) override;
    
    int move_index(int input_raw, int index) override;
    
private:
    bool is_even_or_odd(int input_raw);
};


#endif /* processingStations_hpp */
