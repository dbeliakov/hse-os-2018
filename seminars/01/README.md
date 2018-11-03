# Семинар 1. Основы работы в Linux

[Презентация](https://dbeliakov.github.io/hse-os-2018/seminars/01/slides/)  
[Примеры кода](code)
[Пример файла конфигурации vim](.vimrc)
[VirtualBox](https://www.virtualbox.org/)  
[Подготовленный образ для VirtualBox](https://goo.gl/G10hmh)  
[PuTTY](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html)  
[Основы bash. Часть 1](https://habr.com/post/47163/) и [Основы bash. Часть 2](https://habr.com/post/52871/)  

**Установка sudo на подготовленный образ**
```bash
su - # перейти под пользователя root
apt-get update # обновить список пакетов
apt-get install -y sudo # установить пакет с именем sudo
exit # вернуться под пользователя student
```

**Домашнее задание**
Написать shell-скрипт, который выполняет очистку "мусорных" файлов в соответствии с набором заданных шаблонов имен. Скрипт должен принимать один аргумент: имя каталога, который необходимо очистить; набор шаблонов передается скрипту в виде потока ввода.

При реализации нужно использовать циклы и условия. Использование команды find запрещено!

Шаблоны задаются в текстовом виде: каждый шаблон - на отдельной строке. Входной поток может содержать "комментарии" - строки, начинающиеся с символа #.

**Дополнительное домашнее задание**
Пройти как можно больше уровней в игре (Bandit)[http://overthewire.org/wargames/bandit/].

### Дополнительные материалы
* [Материалы прошлого года](https://github.com/hseos/hseos-course/tree/master/2017/01-intro)
* [История развития Linux](http://storage.piter.com/upload/contents/978591180807/978591180807_p.pdf)
* [Фильм RevolutionOS о появлении свободного ПО и Linux](https://www.youtube.com/watch?v=n1F_MfLRlX0)
* [Шпаргалка по работа в командной строке](https://help.ubuntu.ru/wiki/%D0%BA%D0%BE%D0%BC%D0%B0%D0%BD%D0%B4%D0%BD%D0%B0%D1%8F_%D1%81%D1%82%D1%80%D0%BE%D0%BA%D0%B0)
* [Права доступа в Linux](http://www.k-max.name/linux/prava-dostupa-v-linux-eshhe-odna-malenkaya-shpargalka/)
* [Как запускаются исполняемые файлы в Linux](http://www.k-max.name/linux/kak-zapuskayutsya-ispolnyaemye-fajly-v-linux/)
* [Midnight Commander: команды и горячие клавиши](http://mydebianblog.blogspot.com/2011/01/midnight-commander.html)
* [Основы работы с vim](http://mydebianblog.blogspot.com/2012/03/vim.html)
* [Основы работы с nano](https://help.ubuntu.ru/wiki/nano)
* 
