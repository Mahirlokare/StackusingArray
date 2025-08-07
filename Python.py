size = 5
stack = []
top = -1

def push():
    global top
    if top == size - 1:
        print("\nOverflow!!")
    else:
        x = int(input("\nEnter the element to be added onto the stack: "))
        stack.append(x)
        top += 1

def pop():
    global top
    if top == -1:
        print("\nUnderflow")
    else:
        popped_element = stack.pop()
        print(f"\nPopped element: {popped_element}")
        top -= 1

def peek():
    if top == -1:
        print("\nUnderflow")
    else:
        print(f"\nTop of Stack: {stack[top]}")

def main():
    while True:
        print("\nPerform operation on stack:")
        print("1. Push element")
        print("2. Pop element")
        print("3. Peek")
        print("4. End")
        choice = int(input("\nEnter your choice: "))

        if choice == 1:
            push()
        elif choice == 2:
            pop()
        elif choice == 3:
            peek()
        elif choice == 4:
            print("\nExiting...")
            break
        else:
            print("\nInvalid Choice!!")

        cont = input("If you want to continue, press 1: ")
        if cont != '1':
            break

if __name__ == "__main__":
    main()
