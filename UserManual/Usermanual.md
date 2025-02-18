# **User Manual**  
This user manual provides instructions for using the control panel to manage multiple processing stations.  

This working station allows users to store previous product results so they can be accessed the next time the panel is launched.  

# **Requirements**  
An executable file named **"ProcessingStation"** is stored in the folder **"ProcessingStation"**.  

# **Function Descriptions**  

The control panel interface provides the following functions:  

1. **Set up a processing workflow and input raw material** 
2. **Show all finished products** – 
3. **Show the processing count of each station** 
4. **Exit the program and save processing results** 

### **1. Set Up a Processing Workflow**  

- **Define the processing workflow**  
  After launching the executable file **"ProcessingStation"**, the console will display a menu with several options. To set up a processing workflow, enter option **"1"**.  

  Then, input the desired workflow sequence using station letters. The correct format follows this pattern:  
  - **Example:** `"A->B->C"`  
  - **Rules:**  
    - Use **uppercase letters** for station names.  
    - Use **"->"** to separate stations.  
    - **Do not include spaces** between characters.  

- **Input the raw material**  
  After defining the workflow, enter a raw material value as an **integer** (e.g., `1`). The console will then display the processing result.  

  - **Example Input:** `1`  
  - **Example Output:**  
    ```
    After processing, the output product = 3
    ```

### **2. Show All Finished Products**  

Users can check previously completed products stored in the local database. This function lists all finished products processed through different workflows.  

- **Example Output:**  
    ```
    Finished Prodcuts has:  3, 3
    ```

### **3. Show the Processing Count of Each Station**  

This function displays how many times each station has processed raw materials.  

**Example Output:**  
```
    Station A was processed 4 times. 
    Station B was processed 1 time. 
    Station C was processed 1 time.
```


### **4. Exit and Save**  

This function saves all finished products to the database before exiting the program. The saved results will be available for review the next time the program is launched.  

#  Demonstration

### 1. Open the console.
* Open the console

<br>

<img src="/Users/tyler/Documents/xCode/workspace/ProcessingStation/UserManual/Images/One.png" alt="One" style="width:80%; height:auto;">
<center><h4>Workflow menu</h4></center>

<br>

### 2. Set the proceesing workflpw

* To Set the processing workflow to A→A.


<br>

<img src="/Users/tyler/Documents/xCode/workspace/ProcessingStation/UserManual/Images/Two.png" alt="One" style="width:80%; height:auto;">
<center><h4>set the processing workflow</h4></center>

<br>

### 3. Given raw material
* Input raw material = "1", after processing, the output product = "3".
<br>

<img src="/Users/tyler/Documents/xCode/workspace/ProcessingStation/UserManual/Images/Three.png" alt="One" style="width:80%; height:auto;">
<center><h4>give raw material</h4></center>

<br>

### 4 & 5. Set another processing workflow and Given raw material
* Set the processing workflow to A→B→C→B→A.
* Input raw material = "2"; after processing, the output product = "3".
<br>

<img src="/Users/tyler/Documents/xCode/workspace/ProcessingStation/UserManual/Images/Four.png" alt="One" style="width:80%; height:auto;">
<center><h4>set another processing workflow</h4></center>

<br>

### 6. Show all finished products
* Show all finished product, the console will display two products of "3", e.g. “3, 3”.
<br>

<img src="/Users/tyler/Documents/xCode/workspace/ProcessingStation/UserManual/Images/Five.png" alt="One" style="width:80%; height:auto;">
<center><h4>show finished products</h4></center>

<br>

### 7.Show the processing count of each station;
* Show the processing count of each station; the console will display (P.S. Station B is skipped once because of station C):
- Station A was processed 4 times.
- Station B was processed 1 time.
- Station C was processed 1 time.
<br>

<img src="/Users/tyler/Documents/xCode/workspace/ProcessingStation/UserManual/Images/Six.png" alt="One" style="width:80%; height:auto;">
<center><h4>show stations</h4></center>

<br>

### 8. Exit and Save

* Exit the program and close the console.
<br>

<img src="/Users/tyler/Documents/xCode/workspace/ProcessingStation/UserManual/Images/Seven.png" alt="One" style="width:80%; height:auto;">
<center><h4>exit and save</h4></center>

<br>








