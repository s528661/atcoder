#lang racket/base
(define (type_constant c)
    (cond
        ((integer? c) 'integer?)
        ((string? c) 'string?)
        ((symbol? c) 'symbol?)
        ((boolean? c) 'boolean?)
        (else (error "constant " c "of unknown type"))
    )
)
    
(define (dealBreaker str)
  (list->vector (string->list str))
)
  
(define (f i c avector)
  (if (= i (vector-length avector))
    c
    (begin
      #;(print (vector-ref avector i))
      #;(char? (vector-ref avector i))
      (if (equal? (vector-ref avector i) #\v)
        (f (+ i 1) (+ c 1) avector)
        (f (+ i 1) (+ c 2) avector)
      )
    )
  )
)

(let ((S (read-line)))
  (begin
    #;(string? S)
    (print (f 0 0 (dealBreaker S)))
  )
)
