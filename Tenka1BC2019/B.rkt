#lang racket/base
(define (f n sv k i)
  (if (= i n)
    (display (list->string (vector->list sv)))
    (begin 
      (unless (eq? (vector-ref sv i) (vector-ref sv (- k 1)))
        (vector-set! sv i #\*)
      )
      (f n sv k (+ i 1))
    )
  )
)

(let ([N (read)][NULL1 (read-line)][S (read-line)][K (read)])
  (f N (list->vector (string->list S)) K 0)
)
