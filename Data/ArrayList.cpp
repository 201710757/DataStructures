//
//  ArrayList.cpp
//  DataStruct
//
//  Created by 김지훈 on 2020/09/03.
//  Copyright © 2020 김지훈. All rights reserved.
//

#include<iostream>
#include "ArrayList.h"
using namespace std;

ArrayList::ArrayList()
{
    numOfData = 0;
    curPosition = -1;
    arr = new LData[LIST_LEN];
};
void ArrayList::ListInit(ArrayList *plist)
{
    ArrayList();
}
void ArrayList::LInsert(ArrayList *plist, LData data)
{
    if(plist->numOfData < LIST_LEN)
    {
        plist->arr[plist->numOfData] = data;
        (plist->numOfData)++;
    }
    else cout<<"FULL"<<endl;
}
int ArrayList::LFirst(ArrayList *plist, LData *pdata)
{
    if(plist->numOfData != 0)
    {
        plist->curPosition = 0;
        *pdata = plist->arr[0];
        return TRUE;
    }
    else return FALSE;
}
int ArrayList::LNext(ArrayList *plist, LData *pdata)
{
    if(plist->curPosition != plist->numOfData - 1)
    {
        *pdata = plist->arr[++(plist->curPosition)];    //??
        return TRUE;
    }
    else return FALSE;
}
LData ArrayList::LRemove(ArrayList *plist)
{
    int rPos = plist->curPosition;
    int num = plist->numOfData;
    LData rData = plist->arr[rPos];
    
    for(int i=rPos;i<num-1;i++)
        plist->arr[i] = plist->arr[i+1];
    
    plist->numOfData -= 1;
    plist->curPosition -= 1;
    
    return rData;
}
ArrayList::~ArrayList()
{
    delete [] arr;
}
