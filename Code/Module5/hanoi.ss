(define hanoi (lambda (n source center destination)
	(if (= n 1)
		(begin							
			(display "move top from ")
			(display source)
			(display " to ")
			(display destination)
			(newline)
		)
		(begin
			(hanoi (- n 1) source destination center)
			(hanoi 1 source center destination)
			(hanoi (- n 1) center source destination)
		)
	)
)) 