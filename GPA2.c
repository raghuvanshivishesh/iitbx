
/* Question          : count number of students scoring X marks in GQ and store it in 'sum_gq'
   int numOfStudents : Integer number containing the total number of students
   int gq[]          : Integer array containing the GQ marks of all students
   int sum_gq[]      : Integer array to be computed  */
void getTotalGQ(int numOfStudents, int gq[], int sum_gq[]) {
    // Write your solution code below this line
    for(int index = 0; index < numOfStudents; index++)
    {
      switch(gq[index])
      {
        case 1:
          sum_gq[1]++;
          break;
        case 2:
          sum_gq[2]++;
          break;
        case 3:
          sum_gq[3]++;
          break;
        case 4:
          sum_gq[4]++;
          break;
        case 5:
          sum_gq[5]++;
          break;
        case 6:
          sum_gq[6]++;
          break;
        case 7:
          sum_gq[7]++;
          break;
        case 8:
          sum_gq[8]++;
          break;
        case 9:
          sum_gq[9]++;
          break;
        case 10:
          sum_gq[10]++;
          break;
        default:
          sum_gq[0]++;
          break;
      }
    }

}



/* Question          : Count number of students scoring Y marks in GPA and store it in 'sum_gpa'
   int numOfStudents : Integer number containing the total number of students
   float gpa[]       : Array of type float containing the GPA marks of all students
   int sum_gpa[]     : Integer array to be computed */
void getTotalGPA(int numOfStudents, float gpa[], int sum_gpa[]) {
    // Write your solution code below this line
    int a;
    for(int index = 0;index < numOfStudents;index++)
    {
      a = gpa[index] *10;
      switch(a)
      {
        case 0:
          sum_gpa[0]++;
          break;
        case 3:
          sum_gpa[1]++;
          break;
        case 6:
          sum_gpa[2]++;
          break;
        case 10:
          sum_gpa[3]++;
          break;
      }
    }

}



/* Question          : Count number of students scoring X marks in GQ, Y marks in GPA, total, and result, in 'count[][]'
   int numOfStudents : Integer number containing the total number of students
   int gq[]          : Integer array containing the GQ marks of all students
   float gpa[]       : Array of type float, containing the GPA marks of all students
   int count[][]     : Integer array to be computed */
void getTotalCount(int numOfStudents, int gq[], float gpa[], int count[][5]) {
    // Write your solution code below this line
    int a;
    for(int index1 = 0;index1 < numOfStudents;index1++)
    {
      for(int index = 0;index < 11;index++)
      {
        if(gq[index1] == index)
        {
          a = gpa[index1]*10;
          switch (a) {
            case 0:
              count[index][0]++;
              break;
            case 3:
              count[index][1]++;
              break;
            case 6:
              count[index][2]++;
              break;
            default:
              count[index][3]++;
              break;
            }
        }
      }
    }
    int sum;
    for(int row = 0;row < 11;row++)
    {
        sum = 0;
        for(int column = 0;column < 4;column++)
        {
            sum = sum + count[row][column];
        }
        count[row][4] = sum;
    }
    for(int column = 0;column < 4;column++)
    {
        sum = 0;
        for(int row = 0;row < 11;row++)
        {
            sum = sum + count[row][column];
        }
        count[11][column] = sum;
    }
    sum = 0;
    for(int row = 0;row < 11;row++)
    {
        sum = sum + count[row][4];
    }
    count[11][4] = sum;
}
