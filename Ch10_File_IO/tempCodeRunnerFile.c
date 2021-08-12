ptr = fopen("EmployeeFile.txt", "w");
    fprintf(ptr, "%s %d", name, salary);
    fclose(ptr);