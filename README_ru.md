# brst-binding-janet

Языковая привязка библиотеки libBeresta для языка [Janet][janet].

[`libBeresta`][libBeresta] &ndash; свободная, открытая,
кросс-платформенная библиотека для генерации PDF-файлов.

Этот репозиторий &ndash; член семейства `brst-binding-<lang>` языковых
привязок библиотеки `libBeresta`, предназначенный для [Janet][janet].
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

[gen_readme]: https://github.com/libBeresta/libBeresta/blob/master/gen/README_ru.md
[gen]: https://github.com/libBeresta/libBeresta/blob/master/gen/
[org]: https://github.com/libBeresta
[janet]: https://janet-lang.org/