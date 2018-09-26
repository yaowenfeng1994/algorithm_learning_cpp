//
// Created by 姚文锋 on 2018/9/2 0002.
//
//500. 键盘行
#include "ht.h"

vector<string> hashTable::findWords(vector<string>& words)
{
    string L1 = "QWERTYUIOPqwertyuiop";//"QWERTYUIOPqwertyuiop";
    string L2 = "ASDFGHJKLasdfghjkl";//"ASDFGHJKLasdfghjkl";
    string L3 = "ZXCVBNMzxcvbnm";//"ZXCVBNMzxcvbnm";
    vector<string> newWords;
    for(int i=0;i<words.size();i++)
    {
        string strTemp(words[i]);
        int sum1=0, sum2=0, sum3=0;
//        transform(words[i].begin(), words[i].end(), strTemp.begin(), ::toupper);
        for (int j = 0; j < strTemp.size(); j++)
        {
            if (L1.find(strTemp[j]) != -1)sum1++;
            if (L2.find(strTemp[j]) != -1)sum2++;
            if (L3.find(strTemp[j]) != -1)sum3++;
        }
        if (sum1 == strTemp.size()) newWords.push_back(strTemp);
        if (sum2 == strTemp.size()) newWords.push_back(strTemp);
        if (sum3 == strTemp.size()) newWords.push_back(strTemp);
    }
    return newWords;
}
