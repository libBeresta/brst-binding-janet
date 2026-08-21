(use spork/test)
(import spork/sh)

(use brst)

(defmacro test
  [name & body]
  ~(do
     (start-suite ,name)
     ,;body
     (end-suite)))

(defmacro is
  [v]
  ~(assert ,v))

(test "smoke"
  (def filename "smoke.pdf")
  (with-pdf-document pdf filename
    (let [page (doc-page-add pdf)]
      (page-setsize page
                    page-size-a4
                    page-orientation-landscape)))
  (is (sh/exists? filename))
  # Cleanup
  (when (sh/exists? filename)
    (sh/rm filename)))
