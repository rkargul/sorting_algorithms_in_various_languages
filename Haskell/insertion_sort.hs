insert :: Ord a => a -> [a] -> [a]
insert x [] = [x]
insert x (y:ys)
    | x <= y    = x : y : ys
    | otherwise = y : insert x ys


insertionSort :: Ord a => [a] -> [a]
insertionSort [] = []
insertionSort (x:xs) = insert x (insertionSort xs)

main :: IO ()
main = do
    let unsortedList = [5, 2, 9, 3, 6]
    let sortedList = insertionSort unsortedList
    putStrLn ("Unsorted List: " ++ show unsortedList)
    putStrLn ("Sorted List: " ++ show sortedList)