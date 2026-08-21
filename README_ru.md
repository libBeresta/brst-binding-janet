# brst-binding-janet

Языковая привязка библиотеки libBeresta для языка [Janet][janet].

[`libBeresta`][libBeresta] &ndash; свободная, открытая,
кросс-платформенная библиотека для генерации PDF-файлов.

Этот репозиторий &ndash; член семейства `brst-binding-<lang>` языковых
привязок библиотеки `libBeresta`, предназначенный для языка [Janet][janet].

Языковые привязки генерируются автоматически
из&nbps;каноничных определений, представленных в&nbsp;виде S-выражений
в&nbsp;[`gen/data/*.lsp`][gen-data], обновляемых вместе с&nbsp;библиотекой.

## Статус: v1.0.1
- API библиотеки генерируется автоматически из `gen/data/*.lsp`
- сборка проверялась только на Linux
- реализовано в виде Janet native
- выпускается совместно с основной библиотекой

## Обязательные составляющие

По соглашению, принятому в библиотеке `libBeresta`, каждая языковая
привязка должна обязательно содержать два файла:
- [README.md](README.md) &ndash; описание языковой привязки
- [CMakeLists.txt](CMakeLists.txt) &ndash; точка входа для генерации
  файлов языковой привязки, проверки её работоспособности и сборки
  отчуждаемого архива.

Все остальное содержимое (включая этот файл) определяется
особенностями работы с проектами в [Janet][janet].

## Быстрый старт

### Установка
Клонируйте репозитории языковой привязки:

```sh
git clone https://github.com/libBeresta/brst-binding-janet.git
```

Постройте библиотеку:

```sh
cd brst-binding-janet
cmake -S . -B _build -DLIBBRST_SHARED_LIB=OFF
cmake --build _build
```
Имя `_build` важно, оно используется при дальнейшей работе с библиотекой.

### Сборка Janet native

Исходники Janet используют Janet bundle для сборки native.

Соберите и установите Janet bundle:

```sh
janet-pm build
janet-pm install
```
Будет собрана и установлена в экосистему Janet библиотека с кодом языковой
привязки.

Теперь можно удостовериться, что все работает:

```sh
cmake --build _build --target check
```
или (что то же самое):

```
janet-pm test
```

Должно напечататься сообщение

```
All tests passed.
```

### Использование

Теперь можно перейти в папку `demos/` и начать запускать примеры вызовом

```
janet minimal.janet
```

После каждого запуска должен формироваться соответствующий файл `*.pdf`

## Использование как зависимость Janet

Возможно использование библиотеки как зависимость в Janet bundle.

Создайте папку проекта и папку `bundle`

```sh
mkdir -p prj/bundle
```

Создайте файл `prj/bundle/info.jdn` со следующим содержанием:

```
@{:author "Your Name"
  :description "libBeresta test"
  :license "MIT"
  :jpm-dependencies @["spork"
                      {:url "https://github.com/libBeresta/brst-binding-janet.git"}
                      {:url "https://github.com/rwtolbert/janet-native-tools.git" :tag "0.2.0"}]
  :name "brst-test"
  :version "1.0.1"}

```
Создайте файл `prj/bundle/info.jdn` со следующим содержанием:

```
(use brst)

(with-pdf-document pdf "minimal.pdf"
  (let [page (doc-page-add pdf)]
    (page-setsize page
                  page-size-a4
                  page-orientation-landscape)))

```

Выполните команды

```
cd prj
janet-pm deps
janet-pm build
```

Должен появиться файл `minimal.pdf`. Пользуйтесь!

## Дальнейшие шаги

Библиотека libBeresta развивается, за прогрессом можно следить
в репозитории [https://github.com/libBeresta/libBeresta][libBeresta],
а также на сайте [libberesta.ru](libberesta.ru).

[libBeresta]: https://github.com/libBeresta/libBeresta
[gen_readme]: https://github.com/libBeresta/libBeresta/blob/master/gen/README_ru.md
[gen]: https://github.com/libBeresta/libBeresta/blob/master/gen/
[org]: https://github.com/libBeresta
[janet]: https://janet-lang.org/
