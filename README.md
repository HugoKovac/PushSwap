# PushSwap

The object of the game is to sort the numbers in stack a in ascending order. For this
I only have the following instructions:
</br>
</br>


* sa (swap a): Swaps the first 2 items on top of stack a.
Does nothing if there is only one or none.

* sb (swap b ): Swaps the first 2 elements at the top of the stack b.
Does nothing if there is only one or none.

* ss: sa and sb at the same time.
</br>


* pa (push a): Takes the first element at the top of b and puts it on a.
Does nothing if b is empty.

* pb (push b): Takes the first element at the top of a and puts it on b.
Does nothing if a is empty.
</br>


* ra (rotate a): Shifts all elements of stack a up one position.
The first element becomes the last.

* rb (rotate b): Shifts all items in stack b up one position.
The first element becomes the last.

* rr: ra and rb at the same time.
</br>

* rra (reverse rotate a): Shifts all the elements of the
stack a. The last element becomes the first.

* rrb (reverse rotate b): Shifts all the elements of the
the battery b. The last element becomes the first.

* rrr: rra and rrb at the same time.

</br>
</br>

![schema](https://github.com/HugoKovac/PushSwap/blob/main/154806.png)
