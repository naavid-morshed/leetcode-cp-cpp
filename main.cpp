#include <iostream>

#include "neetcode leetcode/26/Sol26.h"
#include "neetcode leetcode/27/Sol27.h"
#include "neetcode leetcode/1929/Sol1929.h"
#include "leetcode/2914/Sol2914.h"
#include "neetcode leetcode/155/Sol155.h"
#include "neetcode/designing dynamic array/DynamicArray.h"
#include "neetcode leetcode/20/Sol20Alt.h"
#include "neetcode leetcode/707 Design Linked List/MyLinkedList.h"
#include "neetcode/Design Singly Linked List/LinkedListAlt.h"
#include "neetcode/Design Singly Linked List/ListNode.h"
#include "neetcode/merge two sorted linked list/MergeTwoLists.h"
#include "neetcode/Reverse Linked List/LNode.h"
#include "neetcode/Reverse Linked List/solution.h"

using namespace std;
#include <vector>

int main() {
    // // 26
    // vector a = {0,1,2,2,3,0,4,2};
    // cout << Sol26::removeDuplicates(a) << endl;

    // 27
    // vector b = {0, 1, 2, 2, 3, 0, 4, 2};
    // cout << Sol27Alt::removeElement(b, 2) << endl;

    // // Dynamic Array
    // DynamicArray d = DynamicArray(1);
    // d.pushback(5);
    // cout << d.getCapacity() << endl;
    // d.printValues();
    // d.pushback(9);
    // cout << d.getCapacity() << endl;
    // d.printValues();

    // vector v = ;
    // vector v = Sol1929().getConcatenation({1,2,1});
    //
    // for (const auto i : v) {
    //     cout << i;
    // }
    // cout << endl;

    // cout << Sol20Alt().isValid("(){}{}{[()]}{}") << endl;

    // auto sl = new Sol155();
    // sl->push(1);
    // cout << sl->getMin() << endl;
    // sl->push(-5);
    // cout << sl->getMin() << endl;
    // sl->pop();
    // cout << sl->getMin() << endl;
    // // cout << sl->top() << endl;
    // // sl->printAll();

    // auto linked_list = LinkedList();
    // linked_list.insertTail(1);
    // linked_list.insertTail(2);
    // linked_list.insertTail(3);
    // linked_list.insertHead(3);
    // cout << linked_list.remove(1) << endl;
    // linked_list.insertHead(55);
    // linked_list.insertTail(33);
    // linked_list.remove(2);
    // const auto vals = linked_list.getValues();
    //
    // for (const auto i : vals) {
    //     cout << i << ", ";
    // }
    // cout << endl;

    // auto lla = new LinkedListAlt();
    // lla->insertHead(1);
    // lla->insertHead(2);
    // lla->insertTail(3);
    // lla->insertTail(4);
    // lla->insertTail(5);
    // // cout << lla->get(0) << endl;
    // // cout << lla->get(2) << endl;
    // // cout << lla->get(4) << endl;
    // lla->remove(2);
    // lla->remove(0);
    // lla->insertHead(6);
    // lla->insertTail(7);
    // lla->remove(2);
    // cout << lla->get(4) << endl;
    //
    // vector<int> nums = lla->getValues();
    //
    // for (const auto num: nums) {
    //     cout << num << ", ";
    // }
    // cout << endl;

    // auto tail3 = new LNode(3);
    // auto tail2 = new LNode(2, tail3);
    // auto head = new LNode(1, tail2);
    //
    // auto currentNode = head;
    //
    // while (currentNode != nullptr) {
    //     cout << currentNode->val << ", ";
    //     currentNode = currentNode->next;
    // }
    // cout << endl;
    //
    // head = Solution::reverseList(head);
    //
    // currentNode = head;
    //
    // while (currentNode != nullptr) {
    //     cout << currentNode->val << ", ";
    //     currentNode = currentNode->next;
    // }
    // cout << endl;

    //// merge two sorted linked list
    // auto g = new ListNode(4);
    // auto f = new ListNode(2, g);
    // auto e = new ListNode(1, f);
    //
    // auto d = new ListNode(5);
    // auto c = new ListNode(3, d);
    // auto a = new ListNode(1, c);
    //
    // auto result = MergeTwoLists::mergeTwoLists(e, a);
    //
    // while (result != nullptr) {
    //     cout << result->number << ", ";
    //     result = result->nextNode;
    // }
    // cout << endl;


    // auto list = new MyLinkedList();
    // list->addAtHead(1);
    // list->addAtTail(3);
    // list->addAtTail(4);
    // list->addAtTail(5);
    // list->addAtIndex(1, 2);
    // cout << list->get(1) << endl;
    // list->deleteAtIndex(1);
    // cout << list->get(1) << endl;
    // cout << list->get(0) << endl;
    //
    // auto currentNode = list;
    //
    // while (currentNode != nullptr) {
    //     cout << *currentNode->val << (currentNode->next != nullptr ? ", " : ".");
    //     currentNode = currentNode->next;
    // }
    // cout << endl;

    auto list = new MyLinkedList();

    list->addAtHead(38);
    list->addAtTail(66);
    list->addAtTail(61);
    list->addAtTail(76);
    list->addAtTail(26);
    list->addAtTail(37);
    list->addAtTail(8);

    list->deleteAtIndex(5);

    list->addAtHead(4);
    list->addAtHead(45);

    auto currentNode = list;

    while (currentNode != nullptr) {
        cout << *currentNode->val << (currentNode->next != nullptr ? ", " : ".");
        currentNode = currentNode->next;
    }
    cout << endl;
}
