(define (pow2 x) (lambda (x) (* x x)))

(define (f m j vn)
  (if (= j m)
    vn
    (let ([s (read)][c (read)])
      (if (= s 1)
        (unless (= c 0) (vector-set! vn 0 c))
        (vector-set! vn (- s 1) c)
      )
      (f m (+ j 1) vn)
    )
  )
)

(define (g vn i)
  (if (= i (vector-length vn))
    (newline)
    (if (= (vector-ref vn 0) 0)
      -1
      (begin 
        (display (vector-ref vn i))
        (g vn (+ i 1))
      )
    )
  )
)

(let ([N (read)][M (read)])
  (define vn (make-vector N 0))
  (g (f M 0 vn) 0)
)
