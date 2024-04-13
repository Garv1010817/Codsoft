#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;
};

int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
        cout << "\n1. Add task\n2. Complete task\n3. Display tasks\n4. Quit\n";
        cin >> choice;

        switch (choice) {
        case 1: {
            Task newTask;
            cout << "Enter task description: ";
            cin.ignore();
            getline(std::cin, newTask.description);
            tasks.push_back(newTask);
            break;
        }
        case 2: {
            string taskDescription;
            cout << "Enter task description to mark as complete: ";
            cin.ignore();
            getline(std::cin, taskDescription);

            for (Task& task : tasks) {
                if (task.description == taskDescription) {
                    task.completed = true;
                }
            }
            break;
        }
        case 3:
            for (const Task& task : tasks) {
                cout << (task.completed ? "[x] " : "[ ] ") <<
                task.description << '\n';
            }
            break;
        case 4:
            return 0;
        default:
            cout << "Invalid choice, try again.\n";
        }
    }

    return 0;
}
