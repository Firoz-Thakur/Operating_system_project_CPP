-------------------------------**pseudocode to find the complexity of the algorithm*********-----

NOTE :as there are lots of statement in the algorithm having constant time,so those line of code are considered as negligible.

void round_robin()   
{  

   j(global var): no of process belonging to the round_robin algo. 
   for i to j                                                --------------- O(no of process belonging to the round_robin algo)O(j)
   {
     statement: assign the value of burst time of each process to temp variable
   }
  
  total : global variable(contain the total sum of the burst time
        
  for i to total(total burst time)                            -----------------O(total burst time) O(total)
  {
    statements:find the average waiting time and turnaround time. 
  }
  
}

void priority()
{
 k: no of process belonging to priority alog.
 q= use to hold the value of position ,if priority of one process is more than other so that we can swap.
 
 for i to k                                                 --------------------O(k)  overall complexity(O(k^2))
 { 
    for q to k                                              --------------------O(k)
    {
       statement: if one process having greater priority so set the value of q=position.
   }
   
    statement:swap the process.
    
 }

for i to k (no of process belonging to priority algo)         ---------------O(k)
{
  statement: calculate and print the waiting time,turnaround time of process
}
statement :print the average waiting time and turnaround time.

for i to to k                                                 ---------------O(k)
{
    repeat while the burst time of every process does'nt equal to zero: -------------O(burst time of every process,alomost constant)
    { 
    
       if the process having burst time greater than 10 
          substract it by 10
       else
         statement make burst time =0
    }

}
void fcfs()
{
 l: no of process belonging to priority alog
 for i to l                                                ------------O(l^2)
  {
    for j to l
     { 
       statement : find the waiting time of each process
     } 
   }

for i to l
 {
   statement :calculte and print the value of burst time,waiting time,and turnaround time
 }
 
 for i to to l                                                ---------------O(l)
{
    repeat while the burst time of every process does'nt equal to zero: -------------O(burst time of every process,alomost constant)
    { 
    
       if the process having burst time greater than 10 
          substract it by 10
       else
         statement make burst time =0
    }
 }
}

round_robin1() 
{
 
 for i to total(total burst time)                               -----------O(total)
 {
 statements: print which particlular queues is running how much of time
 }
 
}



int main()
{
  n=number of process
  for i to n:                                   -----------o(n)
  {
    statement(1a): enter the details of the process.
  
  }
 for i to n:                                     -----------o(n)
  {
    statements(2a):find process which process belongs to which queue.
  }
  
  round_robin1(); 
	round_robin();
	fcfs();
	priority();
 
  }
  
__________________________________________************************TOTAL COMPLEXITY********************__________________________________
int main()
{
  statements:    ----------------------------O(n)+O(n)
  round_robin1(); ---------------------------O(total)            //total - > total burst time
	round_robin(); ----------------------------O(j) + O(total)      //j    - > total no of process belonging to round_robin
  fcfs();         ---------------------------O(k^2) +O(k)         //k    - > total no of prcoess belonging to fcfs 
	priority();     ---------------------------O(l^2) +O(k)         //l    - > total no of prcoess belonging to fcfs 
  
 }
 
 CALCULATIION OF OVERALL TIME COMPLEXITY:::-------------
 
 OVERALL TIME COMPLEXITY = statements inside main function+round_robin1()+round_robin()+fcfs()+priority()
 
 OVERALL TIME COMPLEXITY = O(n)+O(n)+O(total) +O(j) + O(total) + O(k^2) +O(k) +O(l^2) +O(k)    
 
 OVERALL TIME COMPLEXITY = O (2 * n) + O ( 2 * total) + O(j) + O (k^2+k) + O(l^2+l)     //O (k^2+k)= O(k^2) and O (l^2+l)= O(l^2)
 
 OVERALL TIME COMPLEXITY = O(k^2+l^2) + O(n+total+j)                                    //O ( 2 * total) =O(total) and O(2 * n)=O(n)
 
 OVERALL TIME COMPLEXITY == O(k^2+l^2)                                                   //(O(k^2+l^2) > O(n+total+j)
