What is Multi-Level Feedback Queue Scheduling Algorithm?

The multi-level feedback queue job scheduling algorithm primarily includes multiple job queues in the system. It scans the job queue and separates the jobs into different categories based on their need for the processor.

The algorithm allocates the jobs or processes to different queues based on their CPU execution time. If a process has a large burst-time, then it is automatically moved to a lower-priority queue. This technique helps to prevent starvation of lower priority processes too.

The algorithm prefers shorter jobs with low burst times and it prefers input/output bound processes. A process known as aging promotes lower priority jobs to a higher priority queue at regular intervals of time.

An important thing to note is that there is a difference between multi-level feedback queue scheduling algorithm and multi-level queue scheduling algorithm.

In the multi level feedback queue scheduling algorithm, the processes are permanently assigned to a queue whereas, in a multilevel feedback scheduling algorithm, the processes can move between multiple queues according to their requirements.

The multilevel feedback queue scheduling algorithm makes use of both first come first serve algorithm and shortest job first algorithm.

Multilevel Queue Scheduling Program in C Language

1) Advantages:
A high CPU time job that waits for too long in a lower priority queue can be moved to a higher priority queue at regular intervals of time.

2) Disadvantage:
Moving the processes from one queue to another increases the CPU overhead.
