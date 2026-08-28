#
# libBeresta
#
# Примеры использования libBeresta совместно с Janet
#
# Дмитрий Соломенников, (с) 2026
#

(use brst)

(with-pdf-document pdf "dash.pdf"
  (let [page (doc-page-add pdf)]
    (page-setsize page
                  page-size-a4
                  page-orientation-landscape)

    (page-setdash page @[8 7 2 7])

    (let [width (page-width page)
	      height (page-height page)
	      margin (* 15 mm)]
      (page-rectangle page
		      margin margin
		      (- width (* 2 margin))
		      (- height (* 2 margin))))
    (page-stroke page)))
