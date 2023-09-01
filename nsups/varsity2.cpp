#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
class Comment
{
public:
    string author;
    string text;

    Comment(const string &author, const string &text)
        : author(author), text(text) {}
};

class Content
{
public:
    string type;
    string content;
    vector<Comment> comments;

    void addComment(const Comment &comment)
    {
        comments.push_back(comment);
    }

    void removeLastComment()
    {
        if (!comments.empty())
        {
            comments.pop_back();
        }
    }

    void printAllComments()
    {
        if (comments.empty())
        {
            cout << "No comments" << endl;
            return;
        }
        for (const Comment &comment : comments)
        {
            cout << "Author: " << comment.author << endl;
            cout << "Comment: " << comment.text << endl;
            cout << "-------------------------\n";
        }
    }
};

int main()
{
    Content post;
    post.type = "Text";
    post.content = "Check out this new feature!";

    while (true)
    {
        int choice;
        cout << "1. Insert Comment\n";
        cout << "2. Pop Comment\n";
        cout << "3. Print All Comments\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            string author, text;
            cout << "Enter author: ";
            getline(cin, author);
            cout << "Enter text: ";
            getline(cin, text);
            post.addComment(Comment(author, text));
            break;
        }
        case 2:
            post.removeLastComment();
            break;
        case 3:
            post.printAllComments();
            break;
        case 4:
            cout << "Exiting...\n";
            return 0;
        default:
            cout << "Invalid choice. Please select again.\n";
            break;
        }
    }

    return 0;
}
