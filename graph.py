import stddraw

a = []
for i in range(300):
    y = int(input())
    a.append(y)

durationControl = int(input())


stddraw.setPenRadius(0.001)
stddraw.setCanvasSize(1000, 600)
stddraw.line(0.05, 0, 0.05, 1)
stddraw.line(0, 0.05, 1, 0.05)
stddraw.setPenRadius(0.005)
stddraw.text(0.1, 0.95, "Running Time")
stddraw.text(0.95, 0.07, "k")

the_max = max(a)
for i in range(300):
    duration = (a[i] / the_max) + 0.05
    if (duration < (durationControl / the_max) + 0.05):
        stddraw.setPenColor(stddraw.GREEN)
        stddraw.point((i / 300) + 0.05, duration)
    else:
        stddraw.setPenColor(stddraw.RED)
        stddraw.point((i / 300) + 0.05, duration)

stddraw.setPenColor(stddraw.BLACK)
stddraw.text(0.25, 0.75, "The best running time happens when k = " + str(a.index(min(a))))
stddraw.setPenColor(stddraw.BLUE)
stddraw.setPenRadius(0.001)
stddraw.line(0.05, (durationControl / the_max) + 0.05, 1, (durationControl / the_max) + 0.05)

result_pic = "result" + str(a.index(min(a))) + ".jpeg"
stddraw.save(result_pic)

stddraw.show()
