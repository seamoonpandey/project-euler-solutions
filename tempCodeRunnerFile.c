for (givenNumber = 13; givenNumber < 20; givenNumber++)
    {
        countRun = 0;
        testNumber = givenNumber;
        while (testNumber > 1)
        {
            if (testNumber % 2 == 0)
            {
                testNumber /= 2;
            }
            else
            {
                testNumber = (testNumber * 3) + 1;
            }
            countRun++;
        }
        if (countRun == countMax)
        {
            printf("%ld", givenNumber);
            break;
        }
        else
            continue;
    }