//BIBLIOTECA DE FUNCIONES “ArrayEmployees”

int initEmployees(EmployeeList[], int len); // seria poner en true is empty empleados

int addEmployee(EmployeeList[], int len, int id, char name[],char
lastName[],float salary,int sector); // esta crear empleado, iniciliaza empleado con datos

int findEmployeeById(EmployeeList[], int len,int id);

int removeEmployee(EmployeeList[], int len, int id);

int sortEmployees(EmployeeList[], int len, int order);

int printEmployees(EmployeeList[], int length);
