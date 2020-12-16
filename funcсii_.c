#include<stdio.h>
#include<string.h>

char *zad1(char *dest, const char *src)
{
	char *ptr=dest; //Создаём указатель ptr, указывающий на начало строки dest
	while(*src) // Пока указатель src не указывает на \0
	{
		*ptr++ = *src++; // Делаем так, чтобы ptr указывал на элемент, на который указывает src, при этом постоянно двигаясь вперёд  
	}
	*ptr++ = '\0'; // Так как при достижении \0 цикл выше перестал выполняться, он не дописался в dest, поэтому вручную добавляем его
	return dest; // Возвращаем скопированную строчку
}

int zad2(const char *s1, const char *s2)
{
	while(*s1 && *s2) // Пока указатель, указывающий на строки не указывает на \0
	{
		if (*s1 < *s2) // Если указатель s1 указывают на символ, номер которого в таблице ASCII меньше, чем тот, на который указывает s2, возвращаем -1
			return -1;
		if (*s1 > *s2) // Наоборот
			return 1;  
		s1++; // Сдвигаемся на 1 символ вперёд,
		s2++; //     если символы равны
	}
}

int zad3(const char *str)
{
	const char *s; //Создаём указатель s
	for (s = str; *s; ++s); // Приравниваем s и str, если указатель s не указывает на \0 то ничего не делаем(прошу заметить ; после for) и передвигаемся на 1 символ вперёд
	return (s-str); // Как только мы достигли \0 в предыдущем цикле, мы возвращаем величину, получаемую путём вычета позиции \0 и начала строки, тоесть равную длине строки
}

char *zad4(char *destination, const char *source)
{
	char *ptr = destination + strlen(destination); // Создаём указатель указывающий на конец строки destinanion
	while (*source) // Пока указатель source не указывает на \0
	*ptr++ = *source++; 
	/* Каждый элемент, на который указывает source копируем в конец ptr, 
	рано или поздно в source будет достигнут \0 и тогда цикл закончится */
	*ptr++ = '\0'; // Дописываем в конец ptr \0, так как это действие делается и в оригинальной функции strcat (в первом задании комментарий подробнее)
	return destination; // Возвращаем конкатенированную строку
	
}

char *zad5(const char *s, int c) // Обратите внимание на const
{
	while(*s) // Пока указатель не указывает на \0
	{
		if (*s == c) // Если указатель указывает на нужный символ
		return (char*)s; // Возвращаем первое вхождение нужного символа в строку, делаем приведение типа, так как возвращаеть константу нельзя(хз, компилятор ругается)
		++s;
	}
	 // Если не найдено вхождение, получаем seg fault

}

void zad6()
{
	// int number=1;
	// char ch_number;
	// ch_number = number;
	// printf("%c\n", number);
}

void zad7(int n)
{
	if (n == 0)
		return;
	zad7(n/2);
	printf("%d", n%2);
}

void zad8(int *chisla)
{
	int i, sum, del,j,n;
	sum=j=0;
	printf("Введите верхнюю границу подсчёта\n");
	scanf("%d", &n);
	for (i=0; i<5; i++)
		if (chisla[i]>n)
		{
			sum+=chisla[i];
			j++;
		}
	del = sum/j;
	printf("%d\n", del);
}

void zad9(int *chislas)
{
    int i ,sum,del,j;
    sum=j=0;
    for (i=0;i<10;i++)
    	if (chislas[i]%2==0)
    	{
    	    sum+=chislas[i];
    	    j++;
    	}
    del=sum/j;
    printf("%d\n",del);
}

void zad10(int* num)
{
	int count,max,i;
	count=max=i=0;
	for(i=0; i<20; i++)
	{
		if (num[i]==1)
			count++;
		if (count>max)
			max = count;
		if (num[i]!=1)
			count=0;
	}
		printf ("Максимальное число идущих подряд единиц в массиве: %d\n", max);
}


void zad11()
{
	int i;
	char str[4]={'1','0','2','4'};
	for (i=0; i<4;i++)
	{
		printf("%d", str[i]-48);
	}
	printf("\n");
}

void zad12()
{
    int chisla[50], i,j;
    for (i=0;i<50;i++)
    	chisla[i]=i;
    
    for (i=0; i<15;i++)
    	for (j=0; j<50;j++)
    		chisla[j]=chisla[j+1];
    for (i=0;i<35;i++)
    	printf("%d ",chisla[i]);
    printf("\n");
}

void zad13(int *array_1, int *array_2)
{
	int s1, s2;
	s1 = sizeof(array_1)/sizeof(int);
	s2 = sizeof(array_2)/sizeof(int);
	int C[s1 + s2];	
	int i, j, n;
	i = j = n = 0;
	while(i < s1 && j < s2)
	{
		if (array_1[i] < array_2[j])
		{
			C[n] = array_1[i]; i++; n++;
		}else
		{
			C[n] = array_2[j]; j++; n++;
		}
	}
	while(i < s1)
	{
		C[n] = array_1[i]; i++; n++;
	}
	while(j < s2)
	{
		C[n] = array_2[j]; j++; n++;
	}
	for(int k = 0; k < n; k++)
	{
		printf("%d ", C[k]);
	}
	printf("\n");
}

void zad14(int* chisla)
{
    //Любые числа || Стоит делать ввод с клавиатуры? && Стоит ли делать пользовательский выбор количества элементов?
    int i ,j,sum,del;
    sum=j=0;
    for (i=0;i<10;i++)
   		if (i%2!=0 && chisla[i]%2==0)
    	{
    	    sum+=chisla[i];
     	    j++;
    	}
    del = sum/j;
    printf("%d\n",del);
}

void zad15()
{
    int i, y, k =0;
    for(i=111;i<999;i++) 
    { 
        y=i/10;
        if (i%10 == y%10 || i%10 == y/10 || y%10 == y/10) k++;
    }
    printf("%d\n",k);// Учитывать ли числа, в которых одинаковых цифры 3?
}

void zad16()
{
	printf("Функция реализована в отдельном файле\n");
	return;
}

void zad17()
{
	return;
}

void zad18()
{
	return;
}

void zad19(char* str)
{
	int length, i;
	length = strlen(str);
	for (i=0; i<length/2;i++)
		if (str[i] != str[length-i-1])
		{
			printf("Это не палиндром\n");
			return;
		}
	printf("Это палиндром\n");
}

void zad20()
{
    int i;
    for(i=20; i<=100; i++)
    {
        if ((i % 3) == 0)
        {
            printf("%d ", i);
        }
    }
}


int main()
{
	int input;
	printf("Введите номер задания\n");
	scanf("%d", &input); 
	switch(input)
	{
		case 1: printf("Задание 1\n");
				char destination[255], source[255] = "Hello, World";
				printf("%s\n", zad1(destination, source)); // Смысла выводить результат не вижу, так как выведет то, что вы написали
				break;
		case 2:	printf("Задание 2\nВведите строки для сравения\n"); // Если при вводе поставить пробел, то он будет считаться \0 и программа сравнит всё до пробела, см коммент 4
				char s1[255], s2[255];
				scanf("%s%s", s1, s2);
				printf("%d\n", zad2(s1,s2)); 
				break;
		case 3: printf("%d\n",zad3("Hello, world")); 
				break;
		case 4:	printf("Задание 4\nВведите строки для конкатенации\n"); 
		/* Та же проблема с вводом и \0, так что лучше задать 
		эти строчки строго, без использвоания scanf (в строчке ниже вручную прописать значения stroka_1 и stroka_2,
		 например как может выглядеть строка ниже: char stroka_1[255] = "Hello", stroka_2 = "world";)
		*/
				char stroka_1[255], stroka_2[255];
				scanf("%s%s", stroka_1, stroka_2);
				printf("%s\n", zad4(stroka_1, stroka_2));	
				break;
		case 5: printf("Задание 5\n");
				int sign;
				char string[255] = "Hello, world"; 
				printf("%s\n", zad5(string, 'l'));// Наглядно показываем, что указатель переместился на символ, который мы искали
				break;
		case 6: printf("Задание 6\n"); zad6();break;
		case 7: printf("Задание 7\nВведите число для записи в двоичном виде\n");  
				int n; scanf("%d",&n);
				zad7(n); 
				printf("\n");
				break;
		case 8: printf("Задание 8\nЗаполните массив");
				int chisla4[5]={0};
				for(int i=0;i<5;i++)
				scanf("%d", &chisla4[i]);
				zad8(chisla4); 
				break;
		case 9: printf("Задание 9\n");
				int chislas[10]={5,4,8,13,10,42,44,2,6,100}; 
				zad9(chislas); 
				break;
		case 10: printf("Задание 10\n");
				int num[20] = {0, 0, 1, 1, 0, 1 , 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1}; 
				zad10(num); 
				break;
		case 11:printf("Задание 11\n"); 
				zad11();
				break;
		case 12:printf("Задание 12\n");
				zad12();
				break;
		case 13:printf("Задание 13\n");
				int array_1[10] = {1,2,3,4,5,6,7,9,20,30};
				int array_2[10] = {2,3,4,6,8,9,11,20,32,33};
				zad13(array_1,array_2);
				break;
		case 14: printf("Задание 14\n");
				 int chisla[10]={5,4,8,13,10,42,44,2,6,100}; 
				 zad14(chisla); 
				 break;
		case 15: printf("Задание 15\n");
				 zad15(); 
				 break;
		case 16: zad16(); 
				 break;
		case 17: break;
		case 18: break;
		case 19: printf("Задание 19\n");
				 char str[100]; 
				 scanf("%s", str); 
				 zad19(str); 
				 break;
		case 20: printf("Задание 20\n");
				 zad20(); 
				 break;
	}
}