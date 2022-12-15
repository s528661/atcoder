#lang racket
(define (my-read)
  (let ([a (read)])
    (if (symbol? a)
      (symbol->string a)
      a)))
 
(define (my-read-line)
  (let ([line (read-line)])
    (if (string=? "" line)
        (my-read-line)
        line)))
        
(require srfi/42)
(require srfi/25)
(require racket/pretty)

(define (1darray Z j)
  (if (= j (vector-length Z))
    Z
    (begin 
      (vector-set! Z j (read))
      (1darray Z (+ j 1))
    )
  )
)

(define (2darray V i m)
  (let ((W (make-vector m)))
    (if (= i (vector-length V))
      V
      (begin
        (1darray W 0)
        (vector-set! V i W)
        #;(newline)
        (2darray V (+ i 1) m)
      )
    )
  )
)

(let ([N (read)]
      [M (read)])
  (begin 
    (define A (make-vector N))
    (2darray A 0 M)
    (print A)
  )
)
