#include "bit_array.cpp"
#include <iostream>

int main()
{
    int bitsNeeded = 50, choice = -1, bitIndex;
    BitArray *bitArray = new BitArray(bitsNeeded);

    while (true)
    {
        printf("1. Set a bit.\n");
        printf("2. Clear a bit.\n");
        printf("3. Set all bits.\n");
        printf("4. Clear all bits.\n");
        printf("5. Print bit array.\n");
        printf("6. Exit\n>> ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\t>> Which bit to set?: ");
            scanf("%d", &bitIndex);
            bitArray->setBit(bitIndex - 1);
            break;
        case 2:
            printf("\t>> Which bit to clear?: ");
            scanf("%d", &bitIndex);
            bitArray->clearBit(bitIndex - 1);
            break;
        case 3:
            bitArray->setAllBits();
            break;
        case 4:
            bitArray->clearAllBits();
            break;
        case 5:
            bitArray->display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid Choice!\n");
            break;
        }
        if (choice != 5)
        {
            bitArray->display();
        }
    }
}