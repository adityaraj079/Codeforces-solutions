# CF - A. Divide and Multiply
def myComp(a):  # EVEN-ODD SORT
    return a % 2

def solve():
    # YOUR CODE HERE
    global modobj
    # print(modobj.value(int(1e15)))  #setting modobj._modd from None to given param
    # print("Hello World")
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort(key = lambda a:(a % 2, a))
    # print(arr)
    ans, left = 0, 0
    for i in range(n - 1):
        while arr[i] % 2 == 0:
            arr[i] //= 2
            arr[n - 1] *= 2
        left += arr[i]
    print(arr[n - 1] + left)

    # sys.stdout.write(str(ans))
    # os.write(1,"%d"%ans)
    # print("YES" if ans else "NO")
    # pass

def main():
    tcs = 1
    tcs = int(input())
    for tc in range(tcs):
        # with simple_context_manager(modobj):    # temporary environment
        solve()

if name == "main":
    main()