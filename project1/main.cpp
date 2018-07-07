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
#include <string>

using namespace std;

const int MAX_NUM=1000;
int a[Max_num];

string Trim(string& str)
{
    //str.find_first_not_of(" \t\r\n"),在字符串str中从索引0开始，返回首次不匹配"\t\r\n"的位置
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
    return str;
}

class Students
{
	public:
		char studentID[15];
    	char name[20];
    	char sex[10];
    	char birth[30];
    	char grade[20];
    	char tel[20];
};

class Judges
{
private:
    int judge[200];
    int max,min,average;
public:
    void information(int judge_temp[])
	{
        judge[0]=judge_temp[0];
		judge[1]=judge_temp[1];
		judge[2]=judge_temp[2];
		judge[3]=judge_temp[3];
		judge[4]=judge_temp[4];
    }
    void extremum(){
        int i;
        int max=0,min=4;
        for(i=0;i<5;++i)
		{
            if(judge[max]<judge[i])
				{max=i;}
            if(judge[min]>judge[i])
				{min=i;}
        }
        average=(judge[0]+judge[1]+judge[2]+judge[3]+judge[4]-judge[max]-judge[min])/3;
    }
};

int main(int argc,const char * argv[])
{
    vector<csvdata> incsv;
    csvdata intp;
    FILE *fp;
    fp=fopen("/Users/S20171105125/Desktop/project1","r");//你自己的文件路径
    while(1)
        {
            fscanf(fp,"%d,%d,%f,%f",&intp.id,&intp.level,&intp.price,&intp.cost);
            incsv.push_back(intp);
            if (feof(fp))break;
        }
    fclose(fp);
    or(int i=0;i<incsv.size();i++)
        {
            cout<<incsv[i].id<<" "<<incsv[i].level<<" "<<incsv[i].price<<" "<<incsv[i].cost<<endl;
            }//输出显示每行的数据
    system("pause");
    return 0;
}
