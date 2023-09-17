// To-Do List
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Task // defining a struct for description and completion status of each task
{
    string description;
    bool completed;

    Task(string desc) : description(desc), completed(false) {} // Constructor for Task, initializes description and sets completed to false
};

class Todolist // defining a class to manage to do list
{
private:
    vector<Task> tasks;

public:
    void addTasks(const string &description) // function to add tasks
    {
        tasks.push_back(Task(description)); // create a task object and add it to the vector
        cout << "Task added: " << description << endl;
    }
    void viewTasks() // function to view tasks
    {
        if (tasks.empty()) // checks if the list is empty
        {
            cout << "No tasks found !!" << endl;
        }
        cout << "Tasks: " << endl;
        for (int i = 0; i < tasks.size(); i++)
        {
            cout << i + 1 << ". ";
            if (tasks[i].completed)
                cout << "(Completed) "; // display completed status

            cout << tasks[i].description << endl;
        }
    }
    void markAscompleted(int tasknum) // function to mark tasks as completed
    {
        if (tasknum < 1 || tasknum > tasks.size()) // checks for invalid task number
            cout << "Invalid task number." << endl;

        tasks[tasknum - 1].completed = true; // set task as completed
        cout << "Task marked as completed: " << tasks[tasknum - 1].description << endl;
    }
    void deleteTasks(int tasknum) // function to delete tasks
    {
        if (tasknum < 1 || tasknum > tasks.size())
            cout << "Invalid task number." << endl;

        cout << "Task deleted: " << tasks[tasknum - 1].description << endl; // remove task from vector
        tasks.erase(tasks.begin() + tasknum - 1);
    }
};
int main()
{
    Todolist todolist; // defining an object of class Todolist
    int choice;

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Delete Task" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) // using switch case to define the menu
        {
        case 1:
        {
            string description;
            cout << "Enter task: ";
            cin.ignore();
            getline(cin, description);
            todolist.addTasks(description);
            break;
        }
        case 2:
        {
            todolist.viewTasks();
            break;
        }
        case 3:
        {
            int tasknum;
            cout << "Which task do you want to complete? Enter the corresponding index: ";
            cin >> tasknum;
            todolist.markAscompleted(tasknum);
            break;
        }
        case 4:
        {
            int tasknum;
            cout << "Which task would you like to delete? Enter the corresponding index: ";
            cin >> tasknum;
            todolist.deleteTasks(tasknum);
            break;
        }
        case 5:
            cout << "You have come out of the list." << endl;
            return 0;

        default:
            cout << "Enter a valid task number." << endl;
            break;
        }
    }
    return 0;
}
