## Задание 1

Вариант: 173
Номер задачи: 5
Номер функции: 13

Составление программы по условию:
•	Обобщенный артефакт, используемый в задании: квадратная матрица с действительными числами.
•	Базовые альтернативы (уникальные параметры, задающие отличительные признаки альтернатив):
1.	Обычный двумерный массив.
2.	Диагональная (на основе одномерного массива)
3.	Нижняя треугольная (одномерный массив с формулой пересчета)
      •	Общие для всех альтернатив переменные:
1.	Размерность (целое число)
      •	Общие для всех альтернатив функции
1.	Вычисление среднего арифметического (действительное число)
      •	Расположение всех альтернатив в едином контейнере.
      •	Упорядочивание элементов контейнера по убыванию используя Shaker Sort. В качестве ключей для сортировки и других действий используются результаты функции, общей для всех альтернатив.
      •	Формат ввода:
1.	Готовые тестовые файлы                                                                                                    (./matrices_dz1 -f <input file with data> <output file> <output sorted file>)                                      input file:
      a.	Первый аргумент тип матрицы число от 1 до 3 (1 – обычная, 2 – диагональная, 3 – нижнетреугольная).
      b.	Второй аргумент общий для всех – размерность (натуральное число).
      c.	Третий аргумент зависящий от первых двух – список элементов в матрице (для обычной n*n элементов, где n – размерность (действительные числа), для диагональной n элементов, где n – размерность (действительные числа), для нижнетрегольной n*(n + 1)/2, где n – размерность (действительные числа))
2.	Генерация случайных значений                                                                                        (./matrices_dz1-n <number of figures> <output file> <output sorted file>)
