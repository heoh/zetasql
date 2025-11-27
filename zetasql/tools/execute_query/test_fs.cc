#include <cstdio>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>
#include <stdlib.h>
#include <dirent.h>

void list_directory(const char* path) {
  DIR* dir = opendir(path);
  if (dir == NULL) {
    printf("Failed to open directory: %s\n", path);
    return;
  }

  printf("Contents of %s:\n", path);
  struct dirent* entry;
  while ((entry = readdir(dir)) != NULL) {
    printf("  %s\n", entry->d_name);
  }
  closedir(dir);
}

int main() {
  list_directory("/");

  // system("mkdir -p /usr/share/zoneinfo/America");
  // system("chmod -R 777 /usr/share/zoneinfo");

  // FILE* f2 = fopen("/usr/share/zoneinfo/America/Los_Angeles", "w");
  // if (f2) {
  //   printf("Opened for write via fopen\n");
  //   fprintf(f2, "Writing to Los_Angeles timezone data\n");
  //   fclose(f2);
  // } else {
  //   printf("Failed to open for write via fopen\n");
  // }

  int fd = open("/usr/share/zoneinfo/America/Los_Angeles", O_RDONLY);
  if (fd >= 0) {
    printf("Opened via open\n");
    close(fd);
  } else {
    printf("Failed to open via open\n");
  }
  return 0;
}
