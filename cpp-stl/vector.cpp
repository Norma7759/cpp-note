#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
    
    //创建了一个vector容器，数组
    vector<int> v;

    //插入数据
    v.push_back(10);
    v.push_back(20);


    //访问容器中的数据，通过迭代器
    vector<int>::iterator itBegin = v.begin();  //指向容器中第一个元素
    vector<int>::iterator itEnd = v.end();  //指向容器中最后一个元素的下一个位置

    //遍历

    while(itBegin != itEnd){
        cout  << *itBegin << endl;
        itBegin++;
    }   //不常用

    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << endl;
    }   //常用


    void print(int val){
        cout << val << endl;
    }
    for_each(v.begin, v.end(), val);    //使用了标准算法





    return 0;
}