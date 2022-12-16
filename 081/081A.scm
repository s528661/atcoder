(define (dealBreaker str)
  (list->vector (string->list str))
)

(define (f V i c)
  (if (= i (vector-length V))
    (print c)
    (if (eq? (vector-ref V i) #\1)
      (f V (+ i 1) (+ c 1))
      (f V (+ i 1) c)
    )
  )
)

(let ([s (read-line)])
  (f (dealBreaker s) 0 0)
)