class base_sort {
public:
    base_sort(int par_array[], unsigned int* array_size) {
        this->array = par_array;
        this->size = *array_size;
    }

    virtual void sort() = 0;

    int* getArray() {
        return array;
    }

    int getSize() {
        return size;
    }
protected:
    int* array;
    unsigned int size;
};