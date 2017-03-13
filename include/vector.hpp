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
    vector_t(unsigned int size_);
    {
        cout << "Enter size:";
        cin >> size_;
    }
    vector_t(const vector_t& other);
    {
      ptr = new int*[size_];

		for (int i = 0; i < size_; i++)
		{
			ptr[i] = new int[size_];
		}
    }
    auto operator=(const vector_t& other) -> vector_t&;
    {
        if(this! = &ptr)
	{
		for (int i=0;i<size_; i++)
		delete[]ptr[i];
            delete[]ptr;
		ptr = vector_t.size_;
		ptr = new int*[size_];

		for (int i = 0; i < size_; i++)
		{
			ptr[i] = new int[vector_t.ptr];
		}
	ptr[size_]=vector_t.ptr[size_];
	}
        return *this;
    }
    ~vector_t() noexcept;
    {
	for (int i=0;i<capacity; i++)
		delete[]ptr[i];
	delete[]ptr;
	}
    auto size_() const noexcept -> unsigned int;
{
    unsigned size_();
    return size_;
}
    auto capacity_() const noexcept -> unsigned int;
{
unsigned capacity_();
    return capacity_;
}
    auto push_back(int value) -> void;
    {
        
    }
    auto operator[](unsigned int index) const noexcept -> int;
};
