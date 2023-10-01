#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>
#include <iterator>

using namespace std;

void createFile();
void openFile();
void saveFile();
void editFile();
void searchFile();
void replaceFile();




void createFile()
{
    string fileName;
    cout << "Enter the name of the file to be created: ";
    cin >> fileName;
    ofstream file(fileName);
    if (file.is_open())
    {
        cout << "File created successfully" << endl;
    }
    else
    {
        cout << "Error creating file" << endl;
    }
    file.close();
}

void openFile()
{
    string fileName;
    cout << "Enter the name of the file to be opened: ";
    cin >> fileName;
    ifstream file(fileName);
    
    if (file.is_open())
    {
        cout << "File opened successfully" << endl;
        string line;
        int lineNum = 1;
        while (getline(file, line))
        {
            cout << lineNum << ". " << line << endl;
            lineNum++;
        }
    }
    else
    {
        cout << "Error opening file" << endl;
    }
    file.close();
}

void saveFile()
{
    string fileName;
    cout << "Enter the name of the file to be saved: ";
    cin >> fileName;
    ofstream file(fileName);
    if (file.is_open())
    {
        cout << "File saved successfully" << endl;
    }
    else
    {
        cout << "Error saving file" << endl;
    }
    file.close();
}

void editFile()
{
    string fileName;
    cout << "Enter the name of the file to be edited: ";
    cin >> fileName;
    ifstream file(fileName);
    if (file.is_open())
    {
        cout << "File opened successfully" << endl;
        string line;
        int lineNum = 1;
        while (getline(file, line))
        {
            cout << lineNum << ". " << line << endl;
            lineNum++;
        }
    }
    else
    {
        cout << "Error opening file" << endl;
    }
    file.close();
    string line;
    int lineNum = 1;
    vector<string> lines;
    ifstream file2(fileName);
    while (getline(file2, line))
    {
        lines.push_back(line);
    }
    file2.close();
    cout << "Enter the line number to edit: ";
    cin >> lineNum;
    cout << "Enter the text to be inserted: ";
    cin >> line;
    lines.insert(lines.begin() + lineNum - 1, line);
    ofstream file3(fileName);
    for (int i = 0; i < lines.size(); i++)
    {
        file3 << lines[i] << endl;
    }
    file3.close();
    ifstream file4(fileName);
    if (file4.is_open())
    {
        cout << "File saved successfully" << endl;
        string line;
        int lineNum = 1;
        while (getline(file4, line))
        {
            cout << lineNum << ". " << line << endl;
            lineNum++;
        }
    }
    else
    {
        cout << "Error saving file" << endl;
    }
    file4.close();
}

void searchFile()
{
    string fileName;
    cout << "Enter the name of the file to be searched: ";
    cin >> fileName;
    ifstream file(fileName);
    if (file.is_open())
    {
        cout << "File opened successfully" << endl;
        string line;
        int lineNum = 1;
        while (getline(file, line))
        {
            cout << lineNum << ". " << line << endl;
            lineNum++;
        }
    }
    else
    {
        cout << "Error opening file" << endl;
    }
    file.close();
    string line;
    int lineNum = 1;
    vector<string> lines;
    ifstream file2(fileName);
    while (getline(file2, line))
    {
        lines.push_back(line);
    }
    file2.close();
    cout << "Enter the search query: ";
    cin >> line;
    for (int i = 0; i < lines.size(); i++)
    {
        if (lines[i].find(line) != string::npos)
        {
            cout << "Line " << i + 1 << ": " << lines[i] << endl;
        }
    }
}


void deleteFile()
{
    string fileName;
    cout << "Enter the name of the file to be deleted: ";
    cin >> fileName;
    if (remove(fileName.c_str()) != 0)
    {
        cout << "Error deleting file" << endl;
    }
    else
    {
        cout << "File deleted successfully" << endl;
    }
}



void replaceFile()
{
    string fileName;
    cout << "Enter the name of the file to be replaced: ";
    cin >> fileName;
    ifstream file(fileName);
    if (file.is_open())
    {
        cout << "File opened successfully" << endl;
        string line;
        int lineNum = 1;
        while (getline(file, line))
        {
            cout << lineNum << ". " << line << endl;
            lineNum++;
        }
    }
    else
    {
        cout << "Error opening file" << endl;
    }
    file.close();
    string line;
    int lineNum = 1;
    vector<string> lines;
    ifstream file2(fileName);
    while (getline(file2, line))
    {
        lines.push_back(line);
    }
    file2.close();
    cout << "Enter the line number to replace: ";
    cin >> lineNum;
    cout << "Enter the text to be inserted: ";
    cin >> line;
    lines[lineNum - 1] = line;
    ofstream file3(fileName);
    for (int i = 0; i < lines.size(); i++)
    {
        file3 << lines[i] << endl;
    }
    file3.close();
    ifstream file4(fileName);
    if (file4.is_open())
    {
        cout << "File saved successfully" << endl;
        string line;
        int lineNum = 1;
        while (getline(file4, line))
        {
            cout << lineNum << ". " << line << endl;
            lineNum++;
        }
    }
    else
    {
        cout << "Error saving file" << endl;
    }
    file4.close();
}

void insertFile()
{
    string fileName;
    cout << "Enter the name of the file to be inserted: ";
    cin >> fileName;
    ifstream file(fileName);
    if (file.is_open())
    {
        cout << "File opened successfully" << endl;
        string line;
        int lineNum = 1;
        while (getline(file, line))
        {
            cout << lineNum << ". " << line << endl;
            lineNum++;
        }
    }
    else
    {
        cout << "Error opening file" << endl;
    }
    file.close();
    string line;
    int lineNum = 1;
    vector<string> lines;
    ifstream file2(fileName);
    while (getline(file2, line))
    {
        lines.push_back(line);
    }
    file2.close();
    cout << "Enter the line number to insert: ";
    cin >> lineNum;
    cout << "Enter the text to be inserted: ";
    cin >> line;
    lines.insert(lines.begin() + lineNum - 1, line);
    ofstream file3(fileName);
    for (int i = 0; i < lines.size(); i++)
    {
        file3 << lines[i] << endl;
    }
    file3.close();
    ifstream file4(fileName);
    if (file4.is_open())
    {
        cout << "File saved successfully" << endl;
        string line;
        int lineNum = 1;
        while (getline(file4, line))
        {
            cout << lineNum << ". " << line << endl;
            lineNum++;
        }
    }
    else
    {
        cout << "Error saving file" << endl;
    }
    file4.close();
}

// Main function
int main()
{
    int choice;
    cout << "Welcome to the Text Editor" << endl;
    cout << "1. Create a new file" << endl;
    cout << "2. Open an existing file" << endl;
    cout << "3. Edit an existing file" << endl;
    cout << "4. Search for a word in a file" << endl;
    cout << "5. Delete a file" << endl;
    cout << "6. Replace a word in a file" << endl;
    cout << "7. Insert a word in a file" << endl;
    cout << "8. Save file" << endl;
    cout << "9. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        createFile();
        break;
    case 2:
        openFile();
        break;
    case 3:
        editFile();
        break;
    case 4:
        searchFile();
        break;
    case 5:
        deleteFile();
        break;
    case 6:
        replaceFile();
        break;
    case 7:
        insertFile();
        break;
    case 8:
        saveFile();
        break;
    case 9:
        exit(0);
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}



