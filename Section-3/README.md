## Дан номер некоторого года (целое положительное число). 
## Определить соответствующий ему номер столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год.

### Новое и непонятное?
Новое           | Пояснение
----------------|----------------------
**rand() % 2017** | Целое случайное число от 0 до 2016

### input
```
y: random integer value > 0
```

### output - test 1
```
Введенный год: 1900
Столтие: 19
```

### output - test 2
```
Введенный год: 712
Столтие: 8
```