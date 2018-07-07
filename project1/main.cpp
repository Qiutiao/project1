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

//const int MAX_NUM=1000;
//int a[Max_num];

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
	public:
		char judge1[10];
    	char judge2[10];
    	char judge3[10];
    	char judge4[10];
    	char judge5[10];
};

/*class Judges
{
	private:
    	int max,min,average;
	public:
		int judge[200];
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
};*/

int main(int argc,const char * argv[])
{
    Students s[200];
    Judges j[200];
    int i=0;
    int n=0;
    FILE *a;
    FILE *b;
    ifstream fin("/Users/20171105125/Desktop/project1/studentdata.csv");
    string line;
	if ((a=fopen("/Users/20171105125/Desktop/project1/studentdata.csv","r"))==1)
    {
        while(fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s",s[i].studentID,s[i].name,s[i].sex,s[i].birth,s[i].grade,s[i].tel,j[i].judge1,j[i].judge2,j[i].judge3,j[i].judge4,j[i].judge5))
        {
            while(i>=n)
                {return 0;}
            printf("%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s\n",s[i].studentID,s[i].name,s[i].sex,s[i].birth,s[i].grade,s[i].tel,j[i].judge1,j[i].judge2,j[i].judge3,j[i].judge4,j[i].judge5);
            fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s\n",s[i].studentID,s[i].name,s[i].sex,s[i].birth,s[i].grade,s[i].tel,j[i].judge1,j[i].judge2,j[i].judge3,j[i].judge4,j[i].judge5);
            i++;
        }
    }
    else
    {
        printf("Open object file failure.\n");
    }
    b=fopen("/users/20171105125/Desktop/project1/studentdataout.csv","w");
    
    while (getline(fin, line))
    {
        n++;
    }
    
    return 0;
}
