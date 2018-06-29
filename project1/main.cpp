//
//  main.cpp
//  project1
//
//  Created by 王子健 on 2018/6/26.
//  Copyright © 2018年 王子健. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

const int MAX_NUM=1000;

string Trim(string& str)
{
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
    return str;
}

int a[MAX_NUM];
class Poi{
    int a;
};
int main(){
    freopen("studentdate.number","r",stdin);
    return 0;
}
