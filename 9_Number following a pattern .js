class Solution {
  printMinNumberForPattern(s){
    let stack = [];
    let l = s.length;
    let num = 1;
    let ans = '';
    for(let i=0;i<l;i++){
        if(s[i] === 'I'){
            stack.push(num++);
            while(stack.length !== 0){
                ans += stack.pop();
            }
        }
        else{
            stack.push(num++);
        }
    }
    stack.push(num++);
      while(stack.length !== 0){
            ans += stack.pop();
        }
        return ans;
}
}
