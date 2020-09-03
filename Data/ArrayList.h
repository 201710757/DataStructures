//
//  ArrayList.h
//  DataStruct
//
//  Created by 김지훈 on 2020/09/03.
//  Copyright © 2020 김지훈. All rights reserved.
//

#ifndef ArrayList_h
#define ArrayList_h



#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef int LData;


class ArrayList
{
public:
    LData * arr;
    int numOfData;
    int curPosition;
    ArrayList();
    ~ArrayList();
    
    void ListInit(ArrayList * plist);
    void LInsert(ArrayList * plist, LData data);

    int LFirst(ArrayList * plist, LData * pdata);
    int LNext(ArrayList * plist, LData * pdata);

    LData LRemove(ArrayList * plist);
    int LCount(ArrayList * plist);
};


#endif /* ArrayList_h */
