string encode(string src)
{     
  string ret = "";
  int l = src.length();
  char cur_char_cons = src[0];
  int cur_count =1;
  int ptr = 1;
  while(ptr < l){
      if(src[ptr] == cur_char_cons)
         cur_count++;
      else{
          ret = ret + cur_char_cons + to_string(cur_count);
          cur_char_cons = src[ptr];
          cur_count =1;
      }
      ptr ++;
  }
  ret = ret + cur_char_cons + to_string(cur_count);
  return ret;
}    
