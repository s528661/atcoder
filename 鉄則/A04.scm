(define (dec->bin n)
  (cond ((zero? n) '())
        (else (cons (remainder n 2)
                    (dec->bin (quotient n 2))))))

(define (reverse! l)
  (if (null? l)
     '()
     (append (reverse! (cdr l)) (list (car l)))
  )
)
          
(define (f lt n)
  (if (= n 0)
    lt
    (f (cons 0 lt) (- n 1))
  )
)

(define (disp vc i)
  (if (= i (vector-length vc))
    (newline)
    (begin
      (display (vector-ref vc i))
      (disp vc (+ i 1))
    )
  )
)

(let ([N (read)])
  (disp (list->vector (f (reverse! (dec->bin N)) (- 10 (length (dec->bin N))))) 0)
)
