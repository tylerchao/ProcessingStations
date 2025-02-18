//
//  workflow.hpp
//  ProcessingStation
//
//  Created by Chien-Hsun, Chao on 2025/2/18.
//

#ifndef workflow_hpp
#define workflow_hpp
#include "processingStations.hpp"
#include <iostream>
#include <vector>
#include <string>

#include <stdio.h>

class ProcessingStations;

class Workflow{
    
public:
    std::vector<ProcessingStations* > stations;
    
    bool anlyse_string_into_workflow(const std::string& input);
    
    int logic(int raw);
     
};

#endif /* workflow_hpp */
