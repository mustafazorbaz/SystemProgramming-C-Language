/* dizindolas2.c */
#include
#include
#include
#include
#include
<stdio.h>
<stdlib.h>
<dirent.h>
<string.h>
<sys/stat.h>
#define MAX_PATH_SIZE 1024
void DirWalk(const char *path, void (*Proc) (const char *))
{
char fname[MAX_PATH_SIZE];
struct dirent *de;
struct stat status;
DIR *dir;
if ((dir = opendir(path)) == NULL) {
perror("opendir");
return;
}
while ((de = readdir(dir)) != NULL) {
sprintf(fname, "%s/%s", path, de->d_name);
Proc(fname);
if (strcmp(de->d_name, ".") != 0 &&
strcmp(de->d_name, "..") != 0) {
if (stat(fname, &status) == -1) {
perror("stat");
break;
}
if (S_ISDIR(status.st_mode))
DirWalk(fname, Proc);
}
}
closedir(dir);
}
#if 1
void Disp(const char *name)
{
puts(name);
}
int main(int argc, char *argv[])
{
char fname[MAX_PATH_SIZE];
char *plast;
size_t size;
if (argc != 2) {
printf("Usage: dirtree <path>\n");
exit(1);
