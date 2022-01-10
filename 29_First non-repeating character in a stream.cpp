class Solution {
	public:
		string FirstNonRepeating(string A){
		  queue<char> uniques;
		  int count[26] = {0};
		  int  l = A.length();
		  int i;
		  for(i=0;i<l;i++)
		  {
		      count[A[i]-'a']++;
		      if(count[A[i]-'a'] == 1)
		         uniques.push(A[i]);
		     while((!uniques.empty()) && count[uniques.front()-'a'] != 1)
		        uniques.pop();
		       if(uniques.size() == 0)
		       A[i] = '#';
		       else A[i]=uniques.front();
		  }
		  return A;
		}

};
