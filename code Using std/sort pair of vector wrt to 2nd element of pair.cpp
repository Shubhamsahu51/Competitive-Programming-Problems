#include<iostream>
#include<vector>
#include<algorithm>

bool comp(std::pair<int,int>a,std::pair<int,int>b) {

    return a.second > b.second;
}


void printByMarks(std::vector<int> &roll,std::vector<int> &marks) {
    std::vector<std::pair<int,int>> v;
    for (int i=0;i<roll.size();i++)
        v.push_back({roll[i],marks[i]});
    std::sort(v.begin(),v.end(),comp);
    for (int i=0;i<4;i++)
        std::cout<<v[i].first<<" "<<v[i].second<<std::endl;
}

int main (){
    std::vector<int> roll{101,108,103,105};
    std::vector<int> marks{70,80,40,90};
    printByMarks(roll,marks);
    return 0;
}
