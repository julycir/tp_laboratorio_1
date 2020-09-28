//BIBLIOTECA DE FUNCIONES �ArrayEmployees�

//Estructura "Employee"
typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}Employee;

int initEmployees(Employee list[], int len,int value);
int LookForEmptySpace(Employee list[],int len);
int addEmployee(Employee list[], int len, int id, char name,char lastName,float salary,int sector);
int findEmployeeById(Employee list[], int len,int id);
int removeEmployee(Employee list[], int len, int id);
int printEmployees(Employee list[], int len);

//int sortEmployees(Employee list[], int len, int order);

