#include <iostream>
#include <string>
#include <vector>

int main(){

    std::string action = "";
    std::vector<std::string> taskList;

    std::cout << "      | Todo List |     " << '\n';

    while(action != "exit"){
        
        // initial prompt
        std::cout << "What would you like to do?" << '\n';
        std::cout << "View    " << "Add    " << "Remove    " << "Exit    " << '\n';
        std::cin >> action;


        if(action == "add"){
            std::cout << "Name of task: ";
            std::string taskName = "";
            std:: cin >> taskName;

            if(taskName != ""){
                taskList.push_back(taskName);
                std::cout << "Task added!" << '\n';
            }
            action = "";
        }


        else if(action == "view"){
            if(taskList.empty()){
                std::cout << "No tasks" << '\n';
            }
            else{
                for(int i = 0; i < taskList.size(); i++){
                    std::cout << "[] " << taskList[i] << '\n';
                }
            }
        }


        else if(action == "remove"){
            std::cout << "Which task would you like to remove?" << '\n';
            std::string removeName = "";
            std::cin >> removeName;

            if(removeName != ""){
                bool found = false;
                for(int i = 0; i < taskList.size(); i++){
                    if(removeName == taskList[i]){
                        taskList.erase(taskList.begin() + i);
                        found = true;
                    }   
                
                }
                if (found == false){
                        std::cout << "No task named: " << removeName << '\n';
                } 
            }   

        }

    }   
}