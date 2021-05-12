#pragma once
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// ��������� ������
struct Node {
    char key;
    Node* left;
    Node* right;
    int height;
};

// ��������� ������ ������ 
int height(Node* node) {
    if (node == NULL)
        return 0;
    return node->height;
}

// ���������� ������������� ��������
int max(int a, int b) {
    return (a > b) ? a : b;
}

// �������� ������ ������
Node* new_node(char key) {
    Node* node = new Node();

    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;

    return node;
}

// ������� ������  
Node* turn_right(Node* root) {
    Node* child = root->left;
    Node* temp = child->right;

    // ���������� �������� 
    child->right = root;
    root->left = temp;

    // ���������� ������  
    root->height = max(height(root->left), height(root->right)) + 1;
    child->height = max(height(child->left), height(child->right)) + 1;

    return child;
}

// ������� �����  
Node* turn_left(Node* root) {
    Node* child = root->right;
    Node* temp = child->left;

    // ���������� �������� 
    child->left = root;
    root->right = temp;

    // Update heights  
    root->height = max(height(root->left), height(root->right)) + 1;
    child->height = max(height(child->left), height(child->right)) + 1;

    return child;
}

// ��������� ������� �������
int get_balance(Node* node) {
    if (node == NULL) return 0;

    return (height(node->left) - height(node->right));
}

// ���������� �������� � ������ c ������������� ��� ����������
Node* insert(Node* node, char key) {
    if (node == NULL) return(new_node(key));

    if (key < node->key) {
        node->left = insert(node->left, key);
    }
    else if (key > node->key) {
        node->right = insert(node->right, key);
    }
    else { // ���������� ����� �� ���������
        return node;
    }

    // ���������� ������
    node->height = 1 + max(height(node->left), height(node->right));

    // �������� �������
    int balance = get_balance(node);

    if (balance > 1 && key < node->left->key) {
        return turn_right(node);
    }

    if (balance < -1 && key > node->right->key) {
        return turn_left(node);
    }

    if (balance > 1 && key > node->left->key) {
        node->left = turn_left(node->left);

        return turn_right(node);
    }

    if (balance < -1 && key < node->right->key) {
        node->right = turn_right(node->right);

        return turn_left(node);
    }

    return node;
}

// ������� ��������� ������, ��� ������
void get_line(const Node* root, int depth, vector<char>& vec) {
    if (depth <= NULL && root != NULL) {
        vec.push_back(root->key);

        return;
    }

    if (root->left != NULL) {
        get_line(root->left, depth - 1, vec);
    }
    else if (depth - 1 <= NULL) {
        vec.push_back(' '); // ������� �����������
    }

    if (root->right != NULL) {
        get_line(root->right, depth - 1, vec);
    }
    else if (depth - 1 <= NULL) {
        vec.push_back(' '); // ������� �����������
    }
}

// ������� ������ ������
void print(const Node* node, const int height, int depth) {
    vector<char> vec;

    get_line(node, depth, vec); // ��������� ������

    cout << setw((height - depth) * 3); // ��������� ���������� ������ ������������ �������

    bool toggle = true; // ������ �����

    if (vec.size() > 1) {
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] != ' ') {
                if (toggle) {
                    cout << "/" << setw((height - depth) / 2);
                }
                else {
                    cout << "\\" << setw((height - depth) / 2);
                }
            }

            toggle = !toggle;
        }

        cout << endl << setw((height - depth) * 3);
    }

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] != ' ') {
            cout << vec[i] << setw((height - depth) / 2);
        }
    }

    cout << endl;
}

// �������� ���� ������ ������
void show_tree(Node* node) {
    int h = height(node) * 2;

    // ����� ���������� i ��� ��������� ���������� �������
    for (int i = 0; i < h; i++) {
        print(node, h, i);
    }
}

// ���������� ��������
Node* add_element(Node* node) {
    char key;

    cout << "������� �����" << endl;
    cout << "> ";

    cin >> key;

    node = insert(node, key);

    return node;
}

// �������� ������
Node* generate() {
    Node* node = NULL;
    char key;
    char answer;
    int size;

    cout << "��������� �������? (Y - ��, N - ���)" << endl;
    cout << "> ";

    cin >> answer;

    if (answer == 'Y' || answer == 'y') 
    {
        cout << "������� ���������� ��������� : ";
        cin >> size;

        for (int i = 0; i < size; i++) {
            node = add_element(node);
        }
    }
    else {
        cout << "������� ���������� ��������� : ";
        cin >> size;
        //33-126 ���� ��� �������� �� ������� asc2
        key = 0;
        for (int i = 1; i <= size; i++) 
        {
            while (key < 33)
            {
                key = rand() % 127;
            }
            node = insert(node, key);
            key = 0;
        }
    }

    return node;
}

// ������� �� ��������� �����
void count(Node* node, int& counter, char key) {
    if (node != NULL) {
        if (node->key == key) {
            counter++;
        }

        count(node->right, counter, key);
        count(node->left, counter, key);
    }
}
