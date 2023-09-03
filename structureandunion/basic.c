// program to create a structure
// and access the members of the structure

struct employee
{
  char name[20];
  int empid;
  float salary;
};

int main(){
  struct employee temp;
  int n;
  prntf("Enter the number of employees: ");
  scanf("%d", &n);
  struct employee emp[10];
  for(int i =0; i<n; i++){
    printf("Enter the name of the employee: ");
    scanf("%s", emp[i].name);
    printf("Enter the employee id: ");
    scanf("%d", &emp[i].empid);
    printf("Enter the salary of the employee: ");
    scanf("%f", &emp[i].salary);
  }

  // sort the employees based on the salry
  for(int i =0; i<n-1; i++){
    for(int j = i;j<n-i-1; j++){
      if(emp[i].salary> emp[i+1].salary){
        struct employee temp =emp[i];
        emp[i] = emp[i+1];
        emp[i+1] = temp;
      }
    }
  }

  // print the employees
  for(int i=0; i<n; i++){
    printf("Name: %s\n", emp[i].name);
    printf("Employee id: %d\n", emp[i].empid);
    printf("Salary: %f\n", emp[i].salary);
  }

}



