# Задание 1

Вариант: 173
Номер задачи: 5
Номер функции: 13

## Составление программы по условию:
Обобщенный артефакт, используемый в задании: квадратная матрица с действительными числами.
Базовые альтернативы (уникальные параметры, задающие отличительные признаки альтернатив):
1.	Обычный двумерный массив.
2.	Диагональная (на основе одномерного массива)
3.	Нижняя треугольная (одномерный массив с формулой пересчета)

Общие для всех альтернатив переменные:
1.	Размерность (целое число)

Общие для всех альтернатив функции
1.	Вычисление среднего арифметического (действительное число)

Расположение всех альтернатив в едином контейнере.

Упорядочивание элементов контейнера по убыванию используя Shaker Sort. В качестве ключей для сортировки и других действий используются результаты функции, общей для всех альтернатив.

Формат ввода:
1.	Готовые тестовые файлы                                                                                                    
      (./matrices_dz1 "-f 'input file with data' 'output file' 'output sorted file'")

input file:
1. Первый аргумент тип матрицы число от 1 до 3 (1 – обычная, 2 – диагональная, 3 – нижнетреугольная).
2. Второй аргумент общий для всех – размерность (натуральное число).
3. Третий аргумент зависящий от первых двух – список элементов в матрице (для обычной n*n элементов, где n – размерность (действительные числа), для диагональной n элементов, где n – размерность (действительные числа), для нижнетрегольной n*(n + 1)/2, где n – размерность (действительные числа))


Генерация случайных значений                                                                                        
      (./matrices_dz1 "-n 'number of figures' 'output file' 'output sorted file'")

## Характеристики программы

Интерфейсные модули: 6

Модули реализации: 7

Общий размер исходных тестов: 5,4 Мб

Общий размер результатов тестов: 1,3Мб

Результаты тестов (в секундах)

Количество элементов	Ввод из файла

5	            0.000723

10	            0.001385

100	            0.008016

1000	            0.245731

10000	            21.507630

3 (некорректные)	0.000593

1 (некорректный)	Вывод исключения

Различия во времени не зависят от типа ввода, минимальные различия может выдавать сортировка, так как генерируемые данные могут быть частично упорядочены.

## Заключение
Было разработано приложение по заданному ТЗ, а также проведен полный анализ структуры, памяти и времени работы.
