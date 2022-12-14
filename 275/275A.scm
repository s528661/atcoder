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
 
(define (inp n i V)
  (let ((v (read)))
    (if (= i n)
      V
    (begin
      #(print i)
      (vector-set! V i v)
      (inp n (+ i 1) V)
    )
    )
  )
)
 
(define (idx_v V i j mx)
  (if (= i (vector-length V))
    j
    (begin
      (if (<= mx (vector-ref V i))
        (begin 
          #(print mx)
          #(print (vector-ref V i))
          (set! mx (vector-ref V i))
          (set! j (+ i 1))
          #(print j)
        )
        #F
      )
      (idx_v V (+ i 1) j mx)
    )
  )
)
 
(let ([N (read)])
  (begin 
    (define A (make-vector N))
    (inp N 0 A)
    #(print (vector-ref A 1))
    (let ((mx 0) (j 0)) (print (idx_v A 0 j mx)))
  )
)
