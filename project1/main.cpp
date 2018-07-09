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

string Delect(string& str)
{
    //str.find_first_not_of(" \t\r\n"),在字符串str中从索引0开始，返回首次不匹配"\t\r\n"的位置
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
    return str;
}

class Students
{
	public:
		string studentID;
    	string name;
    	string sex;
    	string birth;
    	string grade;
    	string tel;
    	Students(string a=NULL,string b=NULL,string c=NULL,string d=NULL,string e=NULL,string f=NULL):
			studentID(a),name(b),sex(c),birth(d),grade(e),tel(f){}
};
class Judges
{
	public:
		string judge[5];
		Judges(string j=NULL)
		{
			judge={j};score=s;
		}
		/*
		string judge2[200];
    	string judge3[200];
    	string judge4[200];
    	string judge5[200];
    	*/
};

class Average
{
	public:
		double max,min;
		double average;
		double judge[5];
    	void information(string judge_temp[])
		{
        	judge[0]=atof(judge_temp[0]);
			judge[1]=atof(judge_temp[1]);
			judge[2]=atof(judge_temp[2]);
			judge[3]=atof(judge_temp[3]);
			judge[4]=atof(judge_temp[4]);
    	}
    	void extremum(){
        	int i;
        	int max=0,min=0;
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
    Students s[200];
    Judges j[200];
    Average a[200];
    int i=0;
    int n=0;
    FILE *a;
    FILE *b;
    ifstream fin("/Users/20171105125/Desktop/project1/studentdata.csv");
    string line;
	while (getline(fin, line))
    {n++;}
	if ((a=fopen("/Users/20171105125/Desktop/project1/studentdata.csv","r"))==1)
    {
        while(fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s",s[i].studentID,s[i].name,s[i].sex,s[i].birth,s[i].grade,s[i].tel,j[i].judge[0],j[i].judge[1],j[i].judge[2],j[i].judge[3],j[i].judge[4]))
        {
            while(i>=n)
                {return 0;}
            a[i].information(j[i].judge);
            a[i]. extremum();
            i++;
        }
    }
    else
    {
        printf("Open object file failure.\n");
    }
    b=fopen("/users/20171105125/Desktop/project1/studentdataout.csv","w");
    fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s,%s\n",s[i].studentID,s[i].name,s[i].sex,s[i].birth,s[i].grade,s[i].tel,j[i].judge[0],j[i].judge[1],j[i].judge[2],j[i].judge[3],j[i].judge[4],"average");
    for(i=1;i<n;++n)
	{
		printf("%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s,%lf\n",s[i].studentID,s[i].name,s[i].sex,s[i].birth,s[i].grade,s[i].tel,j[i].judge[0],j[i].judge[1],j[i].judge[2],j[i].judge[3],j[i].judge[4],a[i].average);
    	fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s,%lf\n",s[i].studentID,s[i].name,s[i].sex,s[i].birth,s[i].grade,s[i].tel,j[i].judge[0],j[i].judge[1],j[i].judge[2],j[i].judge[3],j[i].judge[4],a[i].average);
	}
    return 0;
}
