
1. "r" - Read (file must exist)

Example: FILE *file = fopen("file.txt", "r");



2. "w" - Write (creates or truncates the file)

Example: FILE *file = fopen("file.txt", "w");



3. "a" - Append (creates if file doesn't exist, appends data)

Example: FILE *file = fopen("file.txt", "a");



4. "r+" - Read and write (file must exist)

Example: FILE *file = fopen("file.txt", "r+");



5. "w+" - Read and write (creates or truncates the file)

Example: FILE *file = fopen("file.txt", "w+");



6. "a+" - Read and append (creates if file doesn't exist)

Example: FILE *file = fopen("file.txt", "a+");



7. "b" - Binary mode (used with other modes, e.g., "rb", "wb")

Example: FILE *file = fopen("file.bin", "rb");
