#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     string result;
     if (s.find("AM") != string::npos){
         if (s.substr(0,2) == "12"){
             result = "00" + s.substr(2,6);
         }
         else{
             result = s.substr(0,8);
         }
     }
     else {
         if (s.substr(0,2) == "12"){
             result = s.substr(0,8);
         }
         else{
             int num = stoi(s.substr(0,2));
             num += 12;
             result = to_string(num) + s.substr(2,6);
         }     
     }
     return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
