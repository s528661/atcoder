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

(define (three2two a b c)
  (cond 
    ((and (<= b a) (<= c a)) (+ b c))
    ((and (<= a b) (<= c b)) (+ a c))
    ((and (<= b c) (<= a c)) (+ a b))
  )
)

(let ([a (read)]
      [b (read)]
      [c (read)])
      (print (three2two a b c))
)
