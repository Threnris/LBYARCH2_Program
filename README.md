Morales AJ, Zapanta Frank S13


i.) Short Analysis and Execution time
Time for reason was really small, so in order buffer time it computed over 1000 executions per run:

int num_repeats = 1000;  
start_time = clock();

for (int i = 0; i < num_repeats; i++) {
    imgCvtGrayDoubleToInt(height, width, input, output);
}

end_time = clock();

time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
time_taken /= num_repeats;

Height Width 
Ran over 30 times
For 10 10: 
  Average execution: 0.000004 s

For 100 100
  Average Execution: 0.000023s

1000 1000
  Impossible to copy paste and Load

Short Analysis: 
As expected, the higher 100*100 input, on average took significantly longer than that of its 10*10 counter part. 
As the size of the input grows, more data must be read from and written to memory.

ii.) Screenshot for checking
![image](https://github.com/user-attachments/assets/85b02845-dca0-4b54-806a-26f7e3fb9ee8)
The check is based on the example given in the specs

iii.) Link to video
https://drive.google.com/drive/folders/1vEHT1JrF4PGJUN53JNub83_6gKR9KjKz?usp=sharing
  
