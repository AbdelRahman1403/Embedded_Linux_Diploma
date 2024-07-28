size_list = int(input("Enter the numbers of the list : "))

List = list(map(int,input("Enter The nums : ").strip().split()))[:size_list]

num = int(input("Enter The Number you want to search it : "))

res = List.count(num)

print(f"Ther res is : {res}")