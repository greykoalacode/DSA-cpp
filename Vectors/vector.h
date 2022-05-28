// Own Header File

template <typename T>
class Vector
{
    // Data Members
    T *arr;
    int cs;
    int ms;
    // cs , ms: current Size, max Size

    // Constructor, Destructor, Methods
public:
    Vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }

    void push_back(const T d)
    {
        // Two cases
        // When vector is full
        if (cs == ms)
        {
            // create a new array and delete old one and double the capacity
            T *oldArr = arr;
            ms = 2 * ms;
            arr = new T[ms];
            // copy elements from oldArr
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            // delete old array
            delete[] oldArr;
        }

        // When vector is not Full
        arr[cs] = d;
        cs++;
    }

    void pop_back()
    {
        // bringing cs one step back would work since, the new element would be overwritten over the old one.
        if (cs >= 0)
        {
            cs--;
        }
    }
    bool isEmpty() const
    {
        return cs == 0;
    }

    // Front, Back, At(i), []
    T front() const
    {
        return arr[0];
    }

    T back() const
    {
        return arr[cs - 1];
    }

    T at(T i) const
    {
        return arr[i];
    }

    T size() const
    {
        return cs;
    }

    T capacity() const
    {
        return ms;
    }
    T operator[](const T i)
    {
        return arr[i];
    }
};