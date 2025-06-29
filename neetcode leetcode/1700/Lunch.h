//
// Created by naavidmorshed on 6/26/25.
//

#ifndef LUNCH_H
#define LUNCH_H

using namespace std;
#include <vector>

class Lunch {
public:
    static int countStudents(vector<int> &students, vector<int> &sandwiches) {
        for (int i = 0;; ) {
            const int currentSandwich = sandwiches[i];
            bool match = false;

            for (const int s : students) {
                if (s == currentSandwich) {
                    match = true;
                    break;
                }
            }

            if (!match) {
                break;
            }

            if (students[i] == sandwiches[i]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
            } else if (students[i] != sandwiches[i]) {
                int first = students.front();
                students.erase(students.begin());
                students.push_back(first);
            }


        }

        return students.size();
    }
};

#endif //LUNCH_H
