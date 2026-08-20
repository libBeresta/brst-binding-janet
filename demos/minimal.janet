#
# libBeresta
#
# Примеры использования libBeresta совместно с Janet
#
# Дмитрий Соломенников, (с) 2026
#

(use brst)

(with-pdf-document pdf "minimal.pdf"
  (let [page (doc-page-add pdf)]
    (page-setsize page
                  page-size-a4
                  page-orientation-landscape)))
