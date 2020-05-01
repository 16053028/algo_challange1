#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> &A){
bool haveReport;
    int result =0,com;
    int l = A.size();
    sort(A.begin(), A.end());
    for(int i=0; i<l; i++){
        for(int j=i; j < l; j++){
            com = A[i]+1;
            if(A[j] == com && haveReport == false){
                result += 1;
                haveReport = true;
            }
        }
        haveReport=false;
    }
    return result;
}

int main()
{
    int sol[] = {3,3,4,5,2,0}; //{0,2,3,3,4,5}
    int sizes = sizeof(sol)/sizeof(sol[0]);

    vector <int> A(sol, sol+sizes);
    cout << solution(A);

    return 0;
}
