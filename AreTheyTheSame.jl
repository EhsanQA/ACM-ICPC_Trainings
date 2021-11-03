module Same
    export comp

    function comp(array1, array2)
        if (array1 === nothing || array2 === nothing)
          return false
        end
        if (size(array1, 1) != size(array2, 1)) 
          return false
        end
        array1 = broadcast(abs, array1)
        array1 = sort(array1)
        array2 = sort(array2)
        index = 1
        
        for i in array1
          if (array2[index] != array1[index] * array1[index])
            return false
          end
          index += 1
        end
        return true
    end
end
