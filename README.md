## CZĘŚĆ OBOWIĄZKOWA
### 1. 
Wykorzystany algorytm działa na bardzo prostej zasadzie dodając do siebie kolejne wyrazy w pętli. Polecenia użyte do stworzenia repozytorium na github:
```
git init -b main
git add .
git commit -m "First commit"
gh repo create FibCalc --public --source=. --remote=FibCalc --push
```
![zad1a}(https://github.com/Malpka8/FibCalc/obrazy/Zadanie1.png)
### 2

#### B. 
Do zbudowania obrazu wykorzystałem polecenie  ```docker build -t main .```

![zad2b}(https://github.com/Malpka8/FibCalc/obrazy/Zadanie2_b.png)

#### C. 
Do zbudowania oraz uruchomienia obrazu wykorzystałem polecenie ```docker run -it --rm main ``` jako, że jest to aplikacja konsolowa należało wykorzystać opcje -it

![zad2c}(https://github.com/Malpka8/FibCalc/obrazy/Zadanie2_c.png)

### 3.
D. użyto akcji metadata obrazy nazywane są kolejno zgodnie ze standardem semver np. 1.0.0

![zad3d}(https://github.com/Malpka8/FibCalc/obrazy/Zadanie3_d.png)

4.
A. Aby sprawdzić obecność pliku fib.yml jako opisu workflow w Github Action należy wykorzystać polecenia gh workflow list i gh workflow view 42896863

Obowiazkowa_4A.png

B. Aby uruchomić GitHub Action należy wykorzystać polecenia gh workflow run 42896863 i gh run watch

Obowiazkowa_4B.png

C. Aby pobrać własny obraz i uruchomić kontener należy wykorzystać polecenie docker run -it --rm ghcr.io/thenikesz/fibcalc:1.1.0

Obowiazkowa_4C.png
