/* ==========  ========== ========== ========= */
//        Binary Min Heap Data Structure       //
//           Array Implementation              //
//                                             //
//         Functions follow Pascal Case        //
//           Convention and Variables          //
//         follow Camel Case Convention        //
//                                             //
//            Author - Vamsi Sangam            //
//            Theory of Programming            //
/* ========== ========== ========== ========== */

#include <stdio.h>
#include <stdlib.h>

struct Vertex
{
    int label, value;
};

void swap(struct Vertex minHeap[], int indexA, int indexB)
{
    struct Vertex temp;

    temp = minHeap[indexA];
    minHeap[indexA] = minHeap[indexB];
    minHeap[indexB] = temp;
}

// Adds an element to the heap and returns the size - O(log N)
int EnqueueVertex(struct Vertex minHeap[], int size, struct Vertex newValue)
{
    ++size;
    minHeap[size] = newValue;

    int i = size;
    struct Vertex temp;

    while (i >= 1)
    {
        if (minHeap[i / 2].value > minHeap[i].value)
        {
            // Parent node is greater than Child Node
            // Heap Property violated
            // So, swap
            swap(minHeap, i / 2, i);
            i = i / 2;
        }
        else
        {
            // Parent is less or equal to the child
            // Heap property not violated
            // So, Insertion is done, break
            break;
        }
    }

    return size;
}

// Applies the heapify procedure - O(log N)
void Heapify(struct Vertex minHeap[], int size, int index)
{
    int i = index;
    struct Vertex temp;

    while ((2 * i) <= size)
    {
        // Left Child exists

        if ((2 * i) + 1 > size)
        {
            // Right child does not exist, but left does

            if (minHeap[i].value > minHeap[2 * i].value)
            {
                // Left child is smaller than parent
                swap(minHeap, i, 2 * i);
            }
            break;
            // Once you reach this level where it does not
            // have a right child, the heap ends here
            // taking it to the next iteration is pointless
        }

        //Both Children exist
        if (minHeap[i].value > minHeap[2 * i].value || minHeap[i].value > minHeap[2 * i + 1].value)
        {
            // One of the other child is lesser than parent
            // Now find the least amoung 2 children

            if (minHeap[2 * i].value <= minHeap[(2 * i) + 1].value)
            {
                // Left Child is lesser, so, swap
                swap(minHeap, i, 2*i);
                // And go down the heap
                i = 2 * i;
            }
            else if (minHeap[2 * i].value > minHeap[(2 * i) + 1].value)
            {
                // Left Child is lesser, so, swap
                swap(minHeap, i, (2*i)+1);
// And go down the heap
                i = (2 * i) + 1;
            }
        }
        else
        {
            // Parent is lesser than its children
            break;
        }
    }
}

// Deletes the vertex and returns the size - O(log N)
int DeleteVertex(struct Vertex minHeap[], int size, int index)
{
    // Swap the indexed element with the last
    swap(minHeap, index, size);

    int i = index;
    --size;

    Heapify(minHeap, size - 1, i);

    return size;
}

// Build Heap Procedure - O(N)
void BuildHeap(struct Vertex minHeap[], int size)
{
    int i;

    // Simply call heapify() for all nodes
    // except the last one...!
    for (i = size / 2; i >= 1; --i)
    {
        Heapify(minHeap, size, i);
    }
}

int main()
{
    int n, i;

    printf("Enter the Initial size of the Min Heap -\n");

    scanf("%d", &n);

    struct Vertex minHeap[n + 2];
    // Extra size just to demonstrate Insertion
    // and use the array as 1-indexed

    printf("Enter %d elements -\n", n);

    for (i = 1; i <= n; ++i)
    {
        scanf("%d%d", &minHeap[i].label, &minHeap[i].value);
    }

    BuildHeap(minHeap, n);

    printf("\nHeap -\n");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, %d\n", minHeap[i].label, minHeap[i].value);
    }

    struct Vertex node;

    printf("\n\nInsert an element -\n");
    scanf("%d%d", &node.label, &node.value);
    n = EnqueueVertex(minHeap, n, node);

    printf("\nHeap After Insert -\n");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, %d\n", minHeap[i].label, minHeap[i].value);
    }

    printf("\n\nDelete an Element at index-\n");
    scanf("%d", &i);
    n = DeleteVertex(minHeap, n, i);

    printf("\nHeap After Delete -\n");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, %d\n", minHeap[i].label, minHeap[i].value);
    }

    return 0;
}
