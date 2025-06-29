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
        // O(n^2), alt has O(n)
        for (int i = 0;;) {
            const int currentSandwich = sandwiches[i];
            bool match = false;

            for (const int s: students) {
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

    static int countStudentsAlt(vector<int> &students, vector<int> &sandwiches) {
        int timesNotFoundMatch = 0;

        queue<int> studentsQ;
        queue<int> sandwichQ;

        for (int i = 0; i < sandwiches.size(); i++) {
            studentsQ.push(students[i]);
            sandwichQ.push(sandwiches[i]);
        }

        while (timesNotFoundMatch != studentsQ.size()) {
            if (studentsQ.front() == sandwichQ.front()) {
                studentsQ.pop();
                sandwichQ.pop();

                timesNotFoundMatch = 0;
            } else {
                studentsQ.push(studentsQ.front());
                studentsQ.pop();

                ++timesNotFoundMatch;
            }
        }

        return studentsQ.size();
    }

    static int countStudentsAlt2(vector<int>& students, vector<int>& sandwiches) {
        int count[2] = {}; // an array of two indexes, each holding 0;

        for (int s : students) {
            count[s]++;
        }

        for (int i = 0; i < sandwiches.size(); ++i) {
            int type = sandwiches[i];

            if (count[type] == 0) {
                // No student wants this type, break here
                return sandwiches.size() - i;
            }

            count[type]--; // A student took the sandwich
        }

        return 0; // Everyone got what they wanted
    }

};

#endif //LUNCH_H
