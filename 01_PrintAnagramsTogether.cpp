// Link to the problem - https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
         unordered_map<string,vector<string>> ump;
         for(int i=0;i<string_list.size();i++)
         {
             string s = string_list[i];
             priority_queue<char> pq;
             for(int j=0;j<s.size();j++)
             {
                 pq.push(s[j]);
             }
             string str_to_hash="";
             while(!pq.empty()){
                 str_to_hash += pq.top();
                 pq.pop();
             }
             if(ump.find(str_to_hash) == ump.end())
             {
                 vector<string> tp ={string_list[i]};
                 ump[str_to_hash] = tp;
             }
             else{
                 ump[str_to_hash].push_back(string_list[i]);
             }
         }
         vector<vector<string>> ret_vect;
         for(auto itr = ump.begin();itr != ump.end();itr++){
             ret_vect.push_back(itr->second);
         }
         return ret_vect;
         
    }
};
