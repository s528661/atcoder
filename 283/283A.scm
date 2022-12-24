(define (f a b t)
  (if (= b 0)
    t
    (f a (- b 1) (* t a))
  )
)

(let ([A (read)][B (read)])
  (display (f A B 1))
)
