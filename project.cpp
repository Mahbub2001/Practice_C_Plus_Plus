#include <bits/stdc++.h>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int publication_year;

    Book(string title, string author, int publication_year)
    {
        this->title = title;
        this->author = author;
        this->publication_year = publication_year;
    }
};

class Node
{
public:
    Book book;
    Node *left;
    Node *right;
    Node(Book book) : book(book), left(NULL), right(NULL) {}
};

void insertBook(Node *&root, Book book)
{
    if (root == NULL)
    {
        root = new Node(book);
        return;
    }

    if (book.title < root->book.title)
    {
        if (root->left == NULL)
        {
            root->left = new Node(book);
        }
        else
        {
            insertBook(root->left, book);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(book);
        }
        else
        {
            insertBook(root->right, book);
        }
    }
}

void print(Node *root)
{
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    cout << "=================================================================================" << endl;
    cout << setw(30) << "BOOK NAME" << setw(30) << "AUTHOR NAME" << setw(20) << "PUBLICATION YEAR" << endl;
    cout << "=================================================================================" << endl;

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << setw(30) << f->book.title;
        cout << setw(30) << f->book.author;
        cout << setw(20) << f->book.publication_year << endl;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    cout << "=================================================================================" << endl;
}

Book *searchBook(Node *root, const string &title)
{
    if (root == NULL || root->book.title == title)
    {
        return root ? &(root->book) : NULL;
    }
    if (title < root->book.title)
    {
        return searchBook(root->left, title);
    }
    else
    {
        return searchBook(root->right, title);
    }
}

int main()
{
    Node *root = NULL;
    Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 1925};
    Book book2 = {"To Kill a Mockingbird", "Harper Lee", 1960};
    Book book3 = {"1984", "George Orwell", 1949};
    Book book4 = {"Hummingbird ", "Maxwell", 1979};
    Book book5 = {"Under Water", "Lois Lowry", 1964};

    insertBook(root, book1);
    insertBook(root, book2);
    insertBook(root, book3);
    insertBook(root, book4);
    insertBook(root, book5);
    // print(root);

    string searchTitle = "1984sfds";
    Book *foundBook = searchBook(root, searchTitle);
    if (foundBook)
    {
        cout << "Name : " << foundBook->title << "  "
             << "Author : " << foundBook->author << "  "
             << "Publication Year : " << foundBook->publication_year << endl;
    }
    else
    {
        cout << "There are no books with this title"<< endl;
    }

    return 0;
}
