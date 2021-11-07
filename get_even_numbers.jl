function getevennumbers(arr)
  ans = []
  for i in arr
    if (mod(i, 2) == 0)
      push!(ans, i)
    end
  end
  ans
end
