template<typename T>
class base_sort {
public:
    base_sort(T par_array[], unsigned int* array_size) {
        this->array = par_array;
        this->size = *array_size;
    }

    virtual void sort() = 0;

    T* getArray() {
        return this->array;
    }

    int getSize() {
        return this->size;
    }
protected:
    T* array;
    unsigned int size;
};