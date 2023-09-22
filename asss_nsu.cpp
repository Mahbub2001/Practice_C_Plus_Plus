#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

struct Task
{
    string description;
    int priority;

    bool operator<(const Task &other) const
    {
        return priority < other.priority;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    priority_queue<Task> toDoList;

    toDoList.push({"Write report", 3});
    toDoList.push({"Pay bills", 1});
    toDoList.push({"Buy groceries", 2});

    cout << "Number of tasks in the to-do list: " << toDoList.size() << endl;

    if (!toDoList.empty())
    {
        Task nextTask = toDoList.top();

        toDoList.pop();

        cout << "Task to complete: " << nextTask.description << " (Priority: " << nextTask.priority << ")" << endl;
    }
    else
    {
        cout << "No tasks in the to-do list." << endl;
    }

    return 0;
}
