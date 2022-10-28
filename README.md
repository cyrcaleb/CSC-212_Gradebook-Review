# CSC-212_Gradebook-Review - readME 

### CSC 212: Data Structures & Algorithms
##### Cabel Cyr, Donavan Francis, Rafael Mendez, Ella Glantz

## Summary

##### Github repo address:

>https://github.com/cyrcaleb/CSC-212_Gradebook-Review.git



# Proof of Planning 

> Our Process of thinking: 

>> The starting class will include all objects. We will use constructors in order to allow the initialization for certain classes and their weights.
>> We will give 4 students with their own csv files holding grades. The csv files will be hard-coded with grades so that the user will only need to
>> press a button to see the results for each student and the corresponding grades. The program will print out student's name, their class, and the
>> grade they will receive for that class.We will include 4 class types which will be initialized with different constructors. These will each have
>> their own respective weights for each object Math, Science, Writing, Comp-sci. The grades.cpp file holds all the necessary code for creating and using our user defined class. Then our header file, grades.h, stores the predefined functions. The header file contains the weights of the 
>> assignments. Then our main.cpp function is where we print information out and it holds a switch statement so our code is more efficient. 



> Below is an example of pseudocode for the Gradebook calculate function seen in our grades.cpp file:
>
`
//double Gradebook::calculate(std::string filename){
    //create sum variable
    
    //Open file for reading
    
    //Create a 2d vector to hold the grades found in the file name
    
    //create an empty2d vector to store the elements of the CSV file
        //csv file should be grades for each "weight group" and should be in alphabetical order (as seen below)
        
    
    
    if(class_type == "Math"){
        //subvector[0][0] will be assignments grades
        //subvector[1][0] will be attendance grades
        //subvector[2][0] will be final_exam grades
        //subvector[3][0] will be midterm grades
        //subvector[4][0] will be quiz grades
        
        //get average for each subvector
        
        //use average and multiply by respective weight to get
        
        //return sum variable
    }else if(class_type == "Science"){
        //subvector[0][0] will be assignments grades
        //subvector[1][0] will be classwork grades
        //subvector[2][0] will be final_exam grades
        //subvector[3][0] will be final_paper grades
        //subvector[4][0] will be final_project grades
        //subvector[5][0] will be labs_weight grades
        //subvector[6][0] will be midterms grades
        
        //get average for each subvector
        
        //use average and multiply by respective weight to get
        
        //return sum variable
    }else if(class_type == "Computer"){
        //subvector[0][0] will be assignments grades
        //subvector[1][0] will be final_exam grades
        //subvector[2][0] will be final_project grades
        //subvector[3][0] will be labs_weight grades
        //subvector[4][0] will be review_project grades
        
        //get average for each subvector
        
        //use average and multiply by respective weight to get
        
        //return sum variable
    }else if(class_type == "Writing"){
        //subvector[0][0] will be assignments grades
        //subvector[1][0] will be attendance grades
        //subvector[2][0] will be classwork grades
        //subvector[3][0] will be final_paper grades
        //subvector[4][0] will be final_project grades
        //subvector[5][0] will be participation grades
        
        //get average for each subvector
        
        //use average and multiply by respective weight to get
        
        // return sum variable
    }

}

`

# Features of our Algorithm

> **what input can it take in?**

>> The csv files are hardcoded, which means in order to calculate your final grade for a class you would need to go into the csv file and alter the 
>> grades. And, upon running the code this will use these hardcoded grades in the csv file and align them to the corresponding class. You need to
>> make a gradebook for the user so that their name is valid. The input is dependent on the csv files because this will output the correlated final grade calculated with the weight. 

> **what is/are the output(s) you can receive back**

>> The outputs you receive are the final grade for this student's class(s). It will output the students name, their class, and the grade for that
>> class. 

> **Why was development like this important to your group?**

>> We felt hardcoding the csv files was the simplest yet most user-friendly way to possibly use this application for other people. Hardcoding the
>> csv files is useful and efficient if there becomes a need to weight different possible grades. It is likely your grades could change for a class.
>> Therefore, by hardcoding these csv files you can make changes as seen necessary. By using classes we are allowing for code reusability in an
>> efficient way. 


# instructions to compile our algorithm 

> **how to input data**

>> In order to input data you must create a gradebook for the student. This way the student's name is valid in our program. You will create csv files and hardcode the grades within each csv files which will align with the classes in our program. 

> **How to compile each/any option from your feature set:**

>> **In order to compile type this:**
>>> `g++ main.cpp grades.cpp -o finalgrades && ./finalgrades`



