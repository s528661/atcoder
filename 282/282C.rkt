#lang racket/base
(require racket/string)

(define (dealBreaker str)
  (list->vector (string->list str))
)

(define (vct2str vct j)
  (if (= j (vector-length vct))
    (newline)
    (begin
      (vector-set! vct j (string (vector-ref vct j)))
      (display (vector-ref vct j))
      (vct2str vct (+ j 1))
    )
  )
)

(define (f n vs i judge)
  (if (= i n)
    vs
    (if (eq? (vector-ref vs i) #\")
      (cond 
        ((= judge 0) (f n vs (+ i 1) 1))
        ((= judge 1) (f n vs (+ i 1) 0))
      )
      (begin
        (if (eq? (vector-ref vs i) #\,)
          (cond 
            ((= judge 0) (begin (vector-set! vs i #\.) (f n vs (+ i 1) judge)))
            ((= judge 1) (f n vs (+ i 1) judge))
          )
          (f n vs (+ i 1) judge)
        )
      )
    )
  )
)

(let ([N (read)][NULL (read-line)][S (read-line)])
  (define V (f N (dealBreaker S) 0 0))
  (vct2str V 0)
)
