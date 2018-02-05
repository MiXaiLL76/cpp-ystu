## Даны отрезки [a, b] и [c, d] и точка A с координатой х. 
## Определить, принадлежит ли данная точка одному из этих отрезков, обоим или лежит вне их.

### Новое и непонятное?
Новое           | Пояснение
----------------|----------------------
**string ret_text** | Переменная типа "строка"
**ret_text.length()** | Длинна строки **ret_text**


### input
```
a,b,c,d,x: random float value
```

### output - test 1
```
Точка А: 4
Отрезок [a, b]: [3, 4]
Отрезок [c, d]: [-12, -16]
Точка А принадлежит отрезку [a, b]
```

### output - test 2
```
Точка А: -14
Отрезок [a, b]: [-11, -12]
Отрезок [c, d]: [2, -15]
Точка А принадлежит отрезку [c, d]
```

### output - test 3
```
Точка А: -4
Отрезок [a, b]: [-16, 1]
Отрезок [c, d]: [-15, 9]
Точка А принадлежит отрезку [a, b]
Точка А принадлежит отрезку [c, d]
```

### output - test 4
```
Точка А: -17
Отрезок [a, b]: [-16, 4]
Отрезок [c, d]: [-11, 2]
Точка А не принадлежит этим отрезкам.
```