//#include<iostream>
//#include<string>
//using namespace std;
//
//class task {
//protected:                           //delaration of the variables
//    int id;
//    bool status;
//    string description;
//
//public:
//    task() {
//        id = 0;
//        status = false;                //null constructor
//        description = " ";
//    }
//                                                  // parameterized constructor
//    task(int id, bool status, string description) {
//        this->id = id;
//        this->status = status;
//        this->description = description;
//    }
//                                           // method to check and display the status of the task
//    void statuscheck() {
//        if (status == true) {
//            cout << "The task is done" << endl;
//        }
//        else {
//            cout << "The task is pending" << endl;
//        }
//    }
//
//    void display() {
//        cout << "ID: " << id << endl;
//        cout << "Description: " << description << endl;
//        statuscheck();
//    }
//
//    int getId() {              //getter
//        return id;
//    }
//                                              // method to mark task as completed
//    void markComplete() {
//        status = true;
//    }
//};
//
//class todo {
//private:
//    task tasks[100];
//    int taskCount = 0;
//
//public:
//                                              // method to add one or more tasks
//    void addtask() {
//        int n;
//        cout << "How many tasks do you want to add? " << endl;;
//        cin >> n;
//
//        for (int i = 0; i < n; i++) {
//            int id;
//            bool status;
//            string description;
//
//            cout << "Enter task ID: " << endl;
//            cin >> id;
//            cout << "Enter status (0 for pending, 1 for done): "<<endl;
//            cin >> status;
//            cin.ignore();
//            cout << "Enter description: "<<endl;
//            getline(cin, description);
//
//                                           // create and store the task
//
//            tasks[taskCount] = task(id, status, description);
//            taskCount++;
//        }
//    }
//                           // method to view all tasks
//    void viewtask() {
//        if (taskCount == 0) {
//            cout << "No tasks added yet."<<endl;
//            return;
//        }
//
//        for (int i = 0; i < taskCount; i++) {
//            cout << "\nTask " << i + 1 << ":\n";
//            tasks[i].display();
//        }
//    }
//                                      // method to mark a task as completed by ID
//    void checkstatus() {
//        int checkId;
//        cout << "Enter the ID of the task to mark as completed: ";
//        cin >> checkId;
//
//        bool found = false;
//        for (int i = 0; i < taskCount; i++) {
//            if (tasks[i].getId() == checkId) {
//                tasks[i].markComplete();
//                cout << "Task ID " << checkId << " marked as done.\n";
//                found = true;
//                break;
//            }
//        }
//
//        if (!found) {
//            cout << "Task ID not found.\n";
//        }
//    }
//                                        // Method to remove a task by ID
//    void removetask() {
//        int removeId;
//        cout << "Enter the ID of the task to remove: ";
//        cin >> removeId;
//
//        bool found = false;
//        for (int i = 0; i < taskCount; i++) {
//            if (tasks[i].getId() == removeId) {
//                for (int j = i; j < taskCount - 1; j++) {
//                    tasks[j] = tasks[j + 1];
//                }
//                taskCount--;
//                cout << "Task ID " << removeId << " removed successfully.\n";
//                found = true;
//                break;
//            }
//        }
//
//        if (!found) {
//            cout << "Task ID not found.\n";
//        }
//    }
//};
//
//int main() {
//    todo myTodo;
//    int choice;
//
//    while (true) {
//        cout << "\nSelect your desired option:"<<endl;
//        cout << "1. Add Task"<<endl;
//        cout << "2. View Tasks" << endl;
//        cout << "3. Mark Task as Completed"<<endl;
//        cout << "4. Remove Task"<<endl;
//        cout << "Enter your choice: "<<endl;
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            myTodo.addtask();
//            break;
//        case 2:
//            myTodo.viewtask();
//            break;
//        case 3:
//            myTodo.checkstatus();
//            break;
//        case 4:
//            myTodo.removetask();
//            break;
//        default:
//            cout << "Invalid choice. Please try again."<<endl;
//        }
//    }
//
//    return 0;
//}
