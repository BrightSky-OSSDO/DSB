10 RANDOMIZE TIMER

20 lowerBound = 1
30 upperBound = 5

40 randomNumber = INT((upperBound - lowerBound + 1) * RND + lowerBound)
50 CLS

60 PRINT "Initializing DSB..."
70 SLEEP 3
80 PRINT
90 PRINT "Initialization successful!"
100 SLEEP 1
110 PRINT
120 PRINT randomNumber; "USB ports found"

