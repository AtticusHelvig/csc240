#include <iostream>
#include <stack>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool isMatching(stack<char>* sp, char matcher);
void createPairs(string line, unordered_set<char>* openers,
                 unordered_map<char, char>* pairs);

int main(int argc, char** argv) {
    cout << "Matching Brackets: A. Helvig" << endl;

    const char EC = '#';
    const string DEFAULT_MATCHES = "#{}()[]<>";
    stack<char>* brackets = new stack<char>();
    unordered_map<char, char>* pairs = new unordered_map<char, char>();
    unordered_set<char>* openers = new unordered_set<char>();
    int lineCount;
    string firstLine;
    getline(cin, firstLine);

    if (firstLine.at(0) == EC) {
        createPairs(firstLine, openers, pairs);
        string secondLine;
        getline(cin, secondLine);
        lineCount = stoi(secondLine);
    } else {
        createPairs(DEFAULT_MATCHES, openers, pairs);
        lineCount = stoi(firstLine);
    }

    for (int i = 0; i < lineCount; i++) {
        string line;
        getline(cin, line);
        bool mismatch = false;

        for (int j = 0; j < line.size(); j++) {
            char c = line.at(j);
            if (openers->count(c) > 0) {
                brackets->push(c);
                continue;
            }

            if (pairs->count(c) > 0) {
                if (!isMatching(brackets, pairs->at(c))) {
                    mismatch = true;
                    continue;
                }
            }
        }
        if (brackets->size() > 0) {
            mismatch = true;
        }

        cout << (mismatch ? "0 " : "1 ");
        while (brackets->size() > 0) {
            brackets->pop();
        }
    }
    cout << endl;
}

bool isMatching(stack<char>* sp, char matcher) {
    if (sp->empty()) {
        return false;
    }
    if (sp->top() != matcher) {
        return false;
    }
    sp->pop();
    return true;
}

void createPairs(string line, unordered_set<char>* openers,
                 unordered_map<char, char>* pairs) {
    for (int i = 1; i < line.size() - 1; i += 2) {
        openers->insert(line.at(i));
        pairs->insert_or_assign(line.at(i + 1), line.at(i));
    }
}
