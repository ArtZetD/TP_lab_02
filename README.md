# TP_lab_02

Part 1

1 - создал пустой репозиторий на github

2 - создание первого комита 
$git config --global user.name & user.email ("...")

$git config user.name & user.email ("...")

$git init

$git add README.md

$git commit -m "first commit"

$git remote add origin git@github.com:ArtZetD/TP_lab_02.git

$git push -u origin main


3 - создаю файл hello.cpp 
$touch hello.cpp 
 и добавляю в него код классического hello world в редакторе nano 
 
4 - добавляю файл в локальную копию репозитория.
$git add hello.cpp

5 - закомитил изменение 
$git commit -m"hello world"

6 - изменил исходный код в соответствии с заданием

7 - закомитил изменение 
$git commit -m"new code"

8 - запушил изменение на удаленный репозиторий
$git push -u origin main

9 - увидел на github.com последствие своих действий

Part 2

1 - создаю новую ветку patch1
$git checkout patch1

2 - внес изменение в hello.cpp в соответствии с заданием через:
$nano hello.cpp

3 - коммит, пуш
$git commit -m"hello world without using namespace std"
$git push -u origin main

4 - увидел созданную ветку 

5 - создал pull-request patch1 на сайте

6 - изменил код hello.cpp в соответствии с заданием 

7 - коммит, пуш
$git commit -m"hello world without using namespace std"
$git push -u origin main

8 - увидел изменение на github.cpp

9 - слил ветку patch1 в main 
$git checkout main
$git merge patch1

10 - локальный pull 
$git git pull origin

11 - посмотрел историю через git log 
$git log

Part 3

1 - создаю новую ветку patch2
$git checkout  -b patch2

2 - изменяю формат на -style=Mozilla 
$ clang-format -i -style=Mozilla hello.cpp

3 - комит, пуш, создание pull request
$git commit -m"changes"
$git push -u origin main

4 - сделал необходимое 

5 - конфликт обнаружен 

6 - исправляю конфликты 
$git commit 
$git git push -f origin patch2

7 - выполняю force push 
$git git push -f origin patch2

8 - конфликты пропали 

9 - merge pull request
$git checkout main 
$git merge patch2

все)
