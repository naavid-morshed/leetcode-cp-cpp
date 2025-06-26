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
        // for (int i = 0; i < students.size(); i++) {
        //     if (sandwiches.empty()) {
        //         break;
        //     }
        //
        //     if (sandwiches[i] == students[i]) {
        //         sandwiches.erase(sandwiches.begin());
        //         students.erase(students.begin());
        //
        //         i--;
        //     } else {
        //         int first = students.front();
        //         students.erase(students.begin());
        //         students.push_back(first);
        //
        //         i--;
        //     }
        // }
        //
        // return students.size();

        while (!sandwiches.empty()) {
            if (sandwiches.front() == students.front()) {
                sandwiches.erase(sandwiches.begin());
                students.erase(students.begin());
            } else {
                int first = students.front();
                students.erase(students.begin());
                students.push_back(first);
            }
        }

        return students.size();
    }
};

#endif //LUNCH_H
