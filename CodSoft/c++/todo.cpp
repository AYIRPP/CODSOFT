#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string name;
    bool completed;
};

void displayMenu() {
    cout << "\nTo-Do List Manager" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Mark Task as Completed" << endl;
    cout << "4. Remove Task" << endl;
    cout << "5. Exit" << endl;
}

void addTask(vector<Task>& tasks) {
    cout << "Enter the task: ";
    string taskName;
    getline(cin, taskName);
    tasks.push_back({taskName, false});
    cout << "Task '" << taskName << "' added." << endl;
}

void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks in the list." << endl;
        return;
    }

    cout << "\nTasks:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        string status = tasks[i].completed ? "Completed" : "Pending";
        cout << i + 1 << ". " << tasks[i].name << " - " << status << endl;
    }
}

void markTaskCompleted(vector<Task>& tasks) {
    viewTasks(tasks);
    if (tasks.empty()) return;

    cout << "Enter the task number to mark as completed: ";
    int taskNumber;
    cin >> taskNumber;
    cin.ignore(); // Ignore the newline character left by cin

    if (taskNumber >= 1 && taskNumber <= static_cast<int>(tasks.size())) {
        tasks[taskNumber - 1].completed = true;
        cout << "Task '" << tasks[taskNumber - 1].name << "' marked as completed." << endl;
    } else {
        cout << "Invalid task number." << endl;
    }
}

void removeTask(vector<Task>& tasks) {
    viewTasks(tasks);
    if (tasks.empty()) return;

    cout << "Enter the task number to remove: ";
    int taskNumber;
    cin >> taskNumber;
    cin.ignore(); // Ignore the newline character left by cin

    if (taskNumber >= 1 && taskNumber <= static_cast<int>(tasks.size())) {
        string removedTaskName = tasks[taskNumber - 1].name;
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task '" << removedTaskName << "' removed." << endl;
    } else {
        cout << "Invalid task number." << endl;
    }
}

int main() {
    vector<Task> tasks;
    while (true) {
        displayMenu();
        cout << "Choose an option: ";
        int choice;
        cin >> choice;
        cin.ignore(); // Ignore the newline character left by cin

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout << "Exiting To-Do List Manager." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
