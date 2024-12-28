/****************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said I have a lot of trouble in my life
Allah says, Verily with hardship there is ease [Surah Alam Nasra 94:6]

I said no one is helping me....
Allah says it is my duty to help the believers [Surah Rum 30:47]

I said no one with me.....
Allah says fear not, I am with the believers [Surat al-Ha 20:46]
I said my sins are many.....
Allah says I love those who repent [Surah Baqarah 2:222]

 I said I am always sick......
Allah says: "I have sent the Qur'an as a cure for disease [Surah Bani-Israel 17:82]
I said I don't like this world......
Allah says the Hereafter is better for you than this life [Surah Duha 94:4]

I said victory is far away....
Allah says My help is near [Surah Baqarah 2:214]
I said I am not happy in my life.....
Allah says: Soon your Lord will give you so much that you will be happy [Surah Duha 93:5]

I said I was disappointed all the time.....
Allah says And do not despair and do not grieve [Surah Imran 3:139]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 ****************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to partition the linked list around a pivot
Node *partition(Node *first, Node *last) {
    if (first == last || first == NULL || last == NULL) return first;

    int pivotValue = last->val;
    Node *pivot = first;
    Node *current = first;

    while (current != last) {
        if (current->val <= pivotValue) {
            swap(pivot->val, current->val);
            pivot = pivot->next;
        }
        current = current->next;
    }
    swap(pivot->val, last->val);
    return pivot;
}

// QuickSort function for the linked list
void quickSort(Node *first, Node *last) {
    if (first != NULL && last != NULL && first != last) {
        Node *pivot = partition(first, last);

        // Ensure that the first and pivot nodes are correctly managed
        if (pivot != NULL && first != pivot) {
            Node *tmp = first;
            while (tmp != pivot && tmp->next != pivot) {
                tmp = tmp->next;
            }
            quickSort(first, tmp);
        }

        // Sort the right part of the list if necessary
        if (pivot != NULL && pivot->next != NULL && pivot->next != last) {
            quickSort(pivot->next, last);
        }
    }
}

// Function to get the last node of the linked list
Node *lastNode(Node *head) {
    Node *tmp = head;
    while (tmp != NULL && tmp->next != NULL) {
        tmp = tmp->next;
    }
    return tmp;
}

int main() {
    Node *head = NULL;
    Node *tmp = NULL;

    // Building the linked list
    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tmp = head;
        } else {
            tmp->next = newNode;
            tmp = tmp->next;
        }
    }

    // Check if the list is empty or has only one node
    if (head != NULL && head->next != NULL) {
        quickSort(head, lastNode(head));
    }

    // Printing the sorted linked list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}


