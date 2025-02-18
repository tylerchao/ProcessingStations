//
//  main.cpp
//  ProcessingStation
//  Doc:The main file includes the methods for loading files, saving files, and displaying the user interface through the show_menu method. This show_menu method contains four options, allowing the user to choose different operations to set up the workflow for the factory.
//
//  Created by Chien-Hsun, Chao on 2025/2/17.
//

#include <iostream>
#include <vector>
#include <string>
#include "workflow.hpp"
#include <fstream>

using namespace std;

const string FILENAME = "./Finished_Product.txt";

void load_products_file(vector<int>& products_list){
    
    ifstream FinishedProductsFile(FILENAME);
    
    if(!FinishedProductsFile.is_open()){
        cerr << "Erro Opening File" << endl;
        return;
    }
    
    int product;
    
    while (FinishedProductsFile >> product) {
        products_list.push_back(product);
    }
 
    FinishedProductsFile.close();
}

void save_products_files(vector<int>& prodcuts){
    ofstream FinishedProductsFile(FILENAME);
    
    if(!FinishedProductsFile.is_open()){
        cerr << "Erro Opening a File" << endl;
        return;
    }
    
    for(int product:prodcuts){
        FinishedProductsFile << product << endl;
    }
    
    FinishedProductsFile.close();
    
}


void show_menu(){
    cout << "\n ------ Workflows Functions ------\n";
    cout << "1. Setup a workflow\n";
    cout << "2. Show all finished products \n";
    cout << "3. Show the processing count of each station \n";
    cout << "4. Exit and Save \n";
    cout << "Choose an option: ";
}

int main(){
    vector<int> products_list;
    int option;
    
    load_products_file(products_list);
    
    
    do{
        show_menu();
        
        cin >> option;
        
        if(cin.fail()){
            cout << "Invalid Input !!!! Please give the valid Input!!!!!";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        
        cin.ignore();
        
        switch (option) {
            case 1:{
                cout << "Please Input a workflow \n";
                string flow;
                getline(cin, flow);
                if (flow.empty()){
                    cout << "please enter workflow, do not skip\n ";
                    continue;
                }
                
                Workflow w;
                
                if(!w.anlyse_string_into_workflow(flow)){
                    cout << "Invalid staion workflow, please resign it.\n";
                    continue;
                }
                
                cout << "Please Input raw material \n";
                int raw_material;
                cin >> raw_material;
                
                if(cin.fail()){
                    cout << "Invalid raw material input !!!! Please give the valid Input!!!!!";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                
                int finishedProduct=w.logic(raw_material);
                cout <<  "after processing, the output product = " << finishedProduct << endl;
                products_list.push_back(finishedProduct);
                break;
                
            }
            case 2:{
                cout << "Finished Prodcuts has: ";
                for(int i = 0; i < products_list.size() ; i++){
                    cout << products_list[i];
                    if (i != (products_list.size()-1)){
                        cout << ",";
                    }
            }
                break;}
                
            case 3:{
                cout << "Station A was processed times: " << global_freq_A << " times" << endl;
                cout << "Station B was processed times: " << global_freq_B << " times" << endl;
                cout << "Station C was processed times: " << global_freq_C << " times" << endl;
                break;}
                
            case 4:{
                save_products_files(products_list);
                cout << "Exiting and Save \n";
                break;}
                
            default:{
                cout << "Invalid option. Please try again.\n";
                break;}
        }
    }while(option!=4);
    
    return 0;
}
