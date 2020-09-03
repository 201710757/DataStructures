//
//  LinkedRead.cpp
//  DataStruct
//
//  Created by 김지훈 on 2020/09/03.
//  Copyright © 2020 김지훈. All rights reserved.
//
#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node * next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
    
};

int main(void)
{
    Node * head = NULL;
    Node * tail = NULL;
    Node * cur = NULL;
    Node * front = NULL;
    
    Node * newNode = NULL;
    int readData = 0;
    
    while(true)
    {
        cout <<"Input : "; cin >> readData;
        if(readData == -1) break;
        
        newNode = new Node(readData);
        
        if(head == NULL) head = newNode;
        else
        {
            newNode->next = head;
        }
        head = newNode;
    }
    cout<<endl;
    
    
    if(head == NULL) cout<<"No Data"<<endl;
    else{
        cur = head;
        cout<<cur->data<<" ";
        while(cur->next != NULL)
        {
            cur = cur->next;
            cout<<cur->data<<" ";
        }
    }
    cout<<endl;
    
    if(head == NULL) cout<<"No Data"<<endl;
    else{
        Node * delNode = head;
        Node * delNextNode = head->next;
        
        cout<<"Del : "<<delNode->data<<endl;
        free(delNode);
        while(delNextNode!=NULL)
        {
            delNode = delNextNode;
            delNextNode = delNextNode->next;
            cout<<"Del : "<<delNode->data<<endl;
            free(delNode);
        }
    }
    return 0;
}
