学习笔记
1、分治算法的模板
int divide_conquer(Problem *problem, int params) {
  // recursion terminator
  if (problem == nullptr) {
    process_result
    return return_result;
  } 

  // process current problem
  subproblems = split_problem(problem, data)
  subresult1 = divide_conquer(subproblem[0], p1)
  subresult2 = divide_conquer(subproblem[1], p1)
  subresult3 = divide_conquer(subproblem[2], p1)
  ...

  // merge
  result = process_result(subresult1, subresult2, subresult3)
  // revert the current level status
 
  return 0;
}
2、回溯算法的模板

void backtrack(int level, ...){
	if(level > n) {
		处理结果;
		return ;
	}
	for( ; ; ){
		if(!used[i]){
			used[i] = true;
			backtrac(level + 1, ...);
			used[i] = false;
		}
	}
}
3、分治和回溯
做算法是数形合一学习。
多画出 层次结构 理解起来方便