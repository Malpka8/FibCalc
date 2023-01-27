## CZĘŚĆ OBOWIĄZKOWA
### 1. 
Wykorzystany algorytm działa na bardzo prostej zasadzie dodając do siebie kolejne wyrazy w pętli. Polecenia użyte do stworzenia repozytorium na github:
```
git init -b main
git add .
git commit -m "First commit"
gh repo create FibCalc --public --source=. --remote=FibCalc --push
```
![zad1a](obrazy/Zadanie1.png)
### 2


#### B. 
Do zbudowania obrazu wykorzystałem polecenie  ```docker build -t main .```

![zad2b](obrazy/Zadanie2_b.png)

#### C. 
Do zbudowania oraz uruchomienia obrazu wykorzystałem polecenie ```docker run -it --rm main ``` jako, że jest to aplikacja konsolowa należało wykorzystać opcje -it

![zad2c](obrazy/Zadanie2_c.png)

### 3.
D. użyto akcji metadata obrazy nazywane są kolejno zgodnie ze standardem semver np. 1.0.0

![zad3d](obrazy/Zadanie3_d.png)

