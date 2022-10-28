#include "grades.h"
#include <iostream>

Gradebook::Gradebook(std::string classType){
    class_type = classType;

    int switchCase;
    if(classType == "Math"){
        switchCase = 0;
    }else if(classType == "Science"){
        switchCase = 1;
    }else if(classType == "Computer"){
        switchCase = 2;
    }else{
        switchCase = 3;
    }

    switch(switchCase){
        case 0:
            //taken from my MTH - 142 course
            assignments = 0.15;
            attendance = 0.5;
            final_exam = 0.20;
            midterms = 0.45;
            quizzes = 0.15;
            labs_weight = 0;
            participation = 0;
            classwork = 0;
            final_project = 0;
            review_project = 0;
            final_paper = 0;
            break;
        case 1:
            //taken from my GEO - 103 course
            assignments = 0.20;
            classwork = 0.15;
            final_exam = 0.10;
            final_paper = 0.10;
            final_project = 0.10;
            labs_weight = 0.25;
            midterms = 0.10;
            review_project = 0;
            participation = 0;
            attendance = 0;
            quizzes = 0;
            break;
        case 2:
            //taken from our CSC - 212 course  (Might be .2)
            assignments = (500/1030) * 0.1;
            final_exam = (100/1030) * 0.1;
            final_project = (350/1030) * 0.1;
            labs_weight = (50/1030) * 0.1;
            review_project = (30/1030) * 0.1;
            midterms = 0;
            classwork = 0;
            final_paper = 0;
            participation = 0;
            attendance = 0;
            quizzes = 0;
            break;
        case 3:
            assignments = 0.30;
            attendance = 0.5;
            classwork = 0.15;
            final_paper = 0.30;
            final_project = 0.15;
            participation = 0.5;
            quizzes = 0;
            midterms = 0;
            review_project = 0;
            final_exam = 0;
            labs_weight = 0;
            break;
    }
}