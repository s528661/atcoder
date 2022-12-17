(define (dealBreaker str)
  (list->vector (string->list str))
)

(define alpha "ABCDEFGHIJKLMNOPQRSTUVWXYZ")

(define (f n i)
  (if (= i n)
    #t
    (begin
      (display (vector-ref (dealBreaker alpha) i))
      (f n (+ i 1))
    )
  )
)

(let ([N (read)])
  (f N 0)
)
