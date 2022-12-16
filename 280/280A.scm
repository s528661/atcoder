(define (dealBreaker str)
  (list->vector (string->list str))
)

(define (g V j w cn)
  (if (= j w)
    cn
    (begin
      (if (eq? (vector-ref V j) #\#)
        (g V (+ j 1) w (+ cn 1))
        (g V (+ j 1) w cn)
      )
    )
  )
)

(define (f h w i cn)
  (let ((S (read-line)))
    (if (= i h)
      cn
      (f h w (+ i 1) (g (dealBreaker S) 0 w cn))
    )
  )
)



(let ([H (read)][W (read)][nll (read-line)])
  (print (f H W 0 0))
)
