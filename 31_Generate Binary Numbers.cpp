string incre(string cur_str)
{
    int l = cur_str.length();
    int i = l-1;
    while(i >= 0 && cur_str[i] == '1')
    {
        cur_str[i] = '0';
        i--;
    }
    if(i>=0)
    {
        cur_str[i] = '1';
    }
    else
    {
        string s = "1";
        cur_str = s+cur_str;
    }
    return cur_str;
}
vector<string> generate(int N)
{
	string cur_str = "1";
	vector<string>ret;
	for(int i=1;i<=N;i++)
	{
	    ret.push_back(cur_str);
	    string new_str = incre(cur_str);
	    cur_str = new_str;
	}
	return ret;
}
