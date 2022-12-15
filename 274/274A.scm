(define (dealBreaker str)
  (list->vector (string->list str))
)

(define adjust-of
    (lambda (x digit)
      (let ((slide (if (positive? x) 1/2 -1/2)))
        (/ (truncate (+ slide (* x digit))) digit) )))

(let ([A (read)][B (read)])
  (begin
    #;(print (exact->inexact (/ B A)))
    #;(newline)
    (print (adjust-of (exact->inexact (/ B A)) 1e+3))
  )
)
