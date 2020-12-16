1. Напишите функцию – аналог функции stpcpy
char *strcpy(char *dest, const char *src);
#include <stdio.h>
char* cpy (char* b, char* a)
{
int i;
for (i=0; a[i] != '\0'; i++)
{
//b[i]=0;
b[i]=a[i];
}
printf ("%s\n", b);
return b;
}
int main()
{
char a [5];
char b [5];
//char c [5];
scanf ("%s", a);
cpy (b, a);
}
2. Напишите функцию – аналог функции strcmp
int strcmp(const char *s1, const char *s2);
int cmp (char* s1, char *s2)
{
int i;
for (i=0; s2[i] !='\0'; i++);
{
if (s1[i]<s2[i]) return -1;
if (s1[i]>s2[i]) return 1;
}
return 0;
}
3. Напишите функцию аналог – функции strlen
size_t strlen(const char *s);
#include <stdio.h>
char* strclen (char* a)
{
int i;
int k=0;
for (i=0; a[i] != '\0'; i++)
{ k
++;
}
printf ("%d\n", k);
return 0;
}
int main()
{
char a [5];
scanf ("%s", a);strclen (a);
}
4. Напишите функцию – аналог функции strcat
char *strcat(char *dest, const char *src);
#include <stdio.h>
char* strcat (char* a, char* b)
{
int i;
int c=0;
for (i= 0; a[i] != ('\0'); i++)
{ c
++;
}
for (i=0; a[i] != ('\0'); i++)
{ a
[c+i]=b[i];
}
printf ("%s\n", a);
return 0;
}
int main()
{
char a [50];
char b [10];
scanf ("%s", a);
scanf ("%s", b);
strcat (a, b);
}
5. Напишите функцию – аналог функции strchr
char *strchr(const char *s, int c);
===============================
6. Напишите функцию для печати числа. При использовании printf можно
пользоваться только спецификатором %с.
#include <stdio.h>
#include <stdlib.h>
char* print(int num){
int num1;
num1=num;
int count=0;
while(num>0){
num=num/10;
count++;
}
char a[count];
int count1=count;
for (int l=0;l<=count;l++){
a[l]=((num1%10)+'0');
num1=(num1/10);}
int n=1;
while (n<count1+1){
printf("%c",a[count1-n]);
n++;
} }
int main()
{
int num=123;
print(num);
return 0;
}
7. Напишите функцию для печати числа в бинарном виде.
program Hello;
var x, y, c: integer;
i: integer;
a: array [1..1000] of integer;
begin
readln (x);
i:=0;
y:=0;
{while x>0 do begin
c:=x div 10;
k:=k+1;
end;}
while x>0 do begin
y:=x mod 2;
a[i]:=y;
x:=x div 2;
i:=i+1;
end;
for c:=1 to i do
write (a[c]);
end.
8. Напишите функцию вычисляющую среднее арифмитическое всех чисел во
входном массиве, которые больше определённого значения.
#include <math.h>
#include <stdio.h>
float sum = 0;
float k = 0;
float func(int val, int*arr) {
float sr;
for (int j=0; j<10; j++) {
if (arr[j] > val) {
k++;
sum = sum + arr[j];
} }if (k!=0)
{
sr = sum/k;
}
else {
sr=0;
}
return sr;
}
int main()
{
int x;
//float n;
// float n;
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
printf ("vvedite 4silo\n");
scanf ("%d", &x);
printf("%.3f\n",func (x,arr));
return 0;
}
9. Напишите функцию вычисляющую среднее арифмитическое чётных элементов
массива.
#include <stdio.h>
#include <malloc.h>
float sa(int*a, int i,int n){
int sum=0;
int p;
float sr;
for(i=0;i<n;i++){
if( a[i]%2 == 0){
sum=sum+a[i];
} }
sr=sum/(n/2);
return sr;
}
int main(){
int i,n;
int* arr;
float sum;
printf("N=");
scanf("%d",&n);
arr = (int*)calloc((n+1),sizeof(int));
printf("Enter elements of array:\n");
for(i=0;i<n;i++)scanf("%d",&arr[i]);
sum=sa(arr,i,n);
printf("%.2f", sum);
free(arr);
return 0;
}
10. Дан массив из единиц и нулей. Напишите функцию вычисляющую самое большое
количество единиц идущих подряд.
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
int na(int*arr,int n ){
int k=0, l=0;
for(int i=0;i<9;i++){
if((arr[i]==arr[i+1])&&(arr[i]==1)){
k++;
if (k>l)
{ l
=k;
} }
else{
k=0;
} }
return l;
}
int main(){
int n,r;
int arr[10]={1,0,0,0,1,1,1,1,0,0};
r=na(arr,n)+1;
printf("%d\n",r);
}
11. Дан массив содержащий строку из цифр. Напишите функцию формирующую число
из цифр в массиве.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int bin(int*arr){
int s=0;
for(int i=0;i<5;i++){s=s+arr[i]*pow(10,(4-i));
}
return s;
}
int main(){
int arr[5]={1,2,3,4,5};
int i, n;
n=bin(arr);
printf("%d",n);
} }
12. Дан одномерный массив содержащий числа от 0 до 49. Напишите функцию
удаляющую все числа меньше 15. Удаление происходит заменой числа соседом.
#include <stdio.h>
#include <string.h>
int main()
{
int r[7];
int j, l, count, b=0;
int q;
for (q=0; q < 7; q++)
{
scanf("%d", &r[q]);
}
for (int i=0; i<7; i++)
{
if ((r[i]< 15) && (l==0))
{
count++;
} }
for (j=0; j<count; j++)
{
for (int i=0; i<7; i++)
{
if (r[i]<15)
{ r
[i]=r[i+1];
b++;
} } }
for (int q=0; q<(7-b+1); q++)
{
printf("%d\n", r[q]);
} }13. Даны 2 упорядоченных массива. Напишите функцию слияния двух упорядоченных
массивов.
void merge_mas(int src1[], int src2[], int result[]);
#include <stdio.h>
#include <string.h>
int wer( int *a, int*b, int *c)
{
for ( int i=0; a[i] !='\0'; i++)
{ c[i]=a[i];}
for (int i=0; b[i] !='\0'; i++)
{ c[3+i] = b[i];}
int t, i,j;
for ( int i=8; i>0; i--) // c[i] !='\0'; i++)
{
for (int j=0; j<(i-1); j++) //c[i] > c[n]; n++)
{
if (c[j]> c[j+1])
{
t=c[j];
c[j]=c[j+1];
c[j+1]=t;
}
}
}
return *c;
}
int main()
{ int a[4] = {345,67,97};
int b[4] = {98,87,9};
int c[8];
wer (a,b,c);
for (int q=2; q<8; q++)
{
printf("%d\n", c[q]);
}
}14. Напишите функцию вычисляющую среднее арифметическое всех чётных
элементов массива стоящих на нечётных местах.
#include <stdio.h>
#include <malloc.h>
float sa(int*a, int i,int n){
int sum=0;
int p;
float sr;
for(i=0;i<n;i++){
if (i%2 !=0){
if( a[i]%2 == 0){
sum=sum+a[i];
} } }
sr=sum/(n/2);
return sr;
}
15. Подсчитать количество натуральных чисел n ( 111 ? n ? 999 ), в записи которых
есть две одинаковые цифры.
#include <stdio.h>
#include <string.h>
int main()
{
int r[4]={112, 123, 121, 332};
int count=0, i;
//int q;
/* for (q=0; q < 4; q++)
{
scanf("%d", &r[q]);
}
*/
for (int i=0; i<4; i++)
{
if ((r[i]%10==(r[i]/10)%10) || (r[i]/100==(r[i]/10)%10) ||
(r[i]/100==r[i]%10))
{
count++;
} }
printf("%d\n", count);
}
16. Написать программу, создающую файл - копию заданного файла. Имена файлов
задаются в командной строке.#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (int argc, char argv)
{
FILE * prog;
FILE* fp;
prog = fopen ("argv[1]","r");
fp = fopen ("argv[2]", "w");
fseek(prog,0, SEEK_END);
int size = ftell(prog);
char *buff = calloc(size+1,sizeof(char));
fread (fp, 1, size, prog);
fclose (fp);
fclose (prog);
}
17. Создать функцию get_bit, проверяющую, установлен ли бит N беззнакового
однобайтового числа X и возвращающую значение логической истины в случае, если этот
бит установлен.
#include <stdio.h>
int checkbit(const int value, const int position) {
int result;
if ((value & (1 « position)) == 0) {
result = 0;
} else {
result = 1;
}
return result;
}
void main() {
int a , i;
scanf ("%d", &a);
scanf ("%d", &i);
printf("%d\n", checkbit(a, i));
}
18. Создать функцию set_bit, устанавливающую бит N беззнакового однобайтового
числа X, доступ к X организуется по указателю.
#include <stdio.h>
int set_bit (const int value, const int position) {
int result;
result=value | (1 « position);return result;
}
void main() {
int a = 5;
int i=4;
printf("%d\n", set_bit(a, i));
}
19. Строка содержит одно слово. Проверить,будет ли оно читаться одинаково справа
налево и слева направо (т. е. является ли оно палиндромом).
#include<stdio.h>
int main ()
{
char word [255];
scanf("%s", word);
int len = strlen(word);
for (int i=0; word[i]!='\0'; i++)
{
if (word[i] != (word[(len-1)-i]))
{
printf("The word is not a palindrome\n");
return 0;
} }
printf("The word is a palindrome\n");
return 0;
}
20. Найти сумму целых положительных чисел, больших 20, меньших 100 и кратных 3.
#include<stdio.h>
int main ()
{
int sum=0;
for (int i=20; i<100; i++)
{
if ((i%3)!=0) continue;
sum+=i;
}
printf("%d", sum);
return 0;
}