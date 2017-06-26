#include "vector.hpp"


vector_t::vector_t() : size_{ 0 }, capacity_{ 0 }, ptr_{ nullptr }
{}

int vector_t::capacity()const
{
	return capacity_;
}

int vector_t::size()const
{
	return size_;
}

int vector_t::ptr(int value)const
{
	return ptr_[value];
}

vector_t::vector_t(unsigned int size)
{
	capacity_ = 1;
	while (capacity_ < size)
		capacity_ *= 2;
	ptr_ = new int[capacity_];
	for (int i = 0; i < capacity_; i++)
		ptr_[i] = 0;
	size_ = 0;
}

vector_t::vector_t(const vector_t& other)
{
	capacity_ = other.capacity_;
	size_ = other.size_;
	ptr_ = new int[capacity_];
	for (int i = 0; i < capacity_; i++)
		ptr_[i] = other.ptr_[i];
}

vector_t::~vector_t()
{
	delete[] ptr_;
}

vector_t& vector_t::operator=(const vector_t& other)
{
	delete[] ptr_;
	ptr_ = new int[other.capacity_];
	for (int i = 0; i<other.capacity_; i++)
	{
		ptr_[i] = other.ptr_[i];
	}
	capacity_ = other.capacity_;
	size_ = other.size_;
	return *this;
}



vector_t vector_t::push_back(const int value)
{
	if (capacity_ == 0)
	{
		capacity_ = 1;
		ptr_ = new int[1];
		size_ = 1;
	}
	if (size_ == capacity_)
	{
		capacity_ *= 2;
		int* temp = new int[capacity_];
		for (int i = 0; i < capacity_; i++)
			temp[i] = 0;
		for (int i = 0; i < capacity_; i++)
			temp[i] = ptr_[i];
		delete[] ptr_;
		ptr_ = new int[capacity_];
		for (int i = 0; i < size_; i++)
			ptr_[i] = temp[i];
	}
	
	
	ptr_[size_] = value;
	++size_;	return *this;
}

vector_t vector_t::pop_back()
{
	if (size_ == 0)
		return *this;
	if ((size_ - 1) == (capacity_ / 2))
		capacity_ /= 2;

	int* temp = new int[capacity_]();
	for (int i = 0; i < (size_ - 1); i++)
	{
		temp[i] = ptr_[i];
	}
	delete[] ptr_;
	ptr_ = new int[capacity_];
	ptr_ = temp;
	--size_;
	return *this;
}
int vector_t::operator[](const int value)const
{
	return ptr_[value];
}
