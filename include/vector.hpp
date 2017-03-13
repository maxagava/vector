#include <iostream>

class vector_t 
{
private:
    unsigned int size_;
    unsigned int capacity_;
    int* ptr_;
    
public:
    vector_t() noexcept;
    {
    }
    vector_t(unsigned int size);
    {
        cout << "Enter size: \n";
        cin >> size;
    }
    vector_t(const vector_t& other);
    {
      ptr = new int*[size];

		for (int i = 0; i < size; i++)
		{
			ptr[i] = new int[size];
		}
    }
    auto operator=(const vector_t& other) -> vector_t&;
    {
        if(this! = &ptr)
	{
		for (int i=0;i<size; i++)
		delete[]ptr[i];
            delete[]ptr;
		ptr = vector.size;
		ptr = vector.capacity;
		ptr = new int*[size];

		for (int i = 0; i < size; i++)
		{
			ptr[i] = new int[vector.ptr];
		}
	ptr[size]=vector.ptr[size];
	}
        return *this;
    }
    ~vector_t() noexcept;
    {
	for (int i=0;i<size; i++)
		delete[]ptr[i];
	delete[]ptr;
	}
    auto size() const noexcept -> unsigned int;
{
    unsigned size();
    return size;
}
    auto capacity() const noexcept -> unsigned int;
{
unsigned capacity();
    return capacity;
}
    auto push_back(int value) -> void;
    {
        cout << "Enter value: \n"
	cin >> value;
    }
    auto operator[](unsigned int index) const noexcept -> int;
	{
	return ptr[index];
		
	}
};
