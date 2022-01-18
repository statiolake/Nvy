#pragma once

template <typename T, size_t n>
struct Array {
	T inner[n];

	Array() : inner{} {}

	Array(Array<T, n> const &other) {
		memcpy(inner, other.inner, n);
	}

	inline T operator[](size_t i) const {
		return inner[i];
	}

	inline T &operator[](size_t i) {
		return inner[i];
	}

	inline T *data() {
		return inner;
	}

	inline T const *data() const {
		return inner;
	}

	inline size_t size() {
		return n;
	}

	using iterator = T *;

	using const_iterator = T *const;

	inline iterator begin() {
		return inner;
	}

	inline iterator end() {
		return inner + n;
	}

	inline const_iterator begin() const {
		return inner;
	}

	inline const_iterator end() const {
		return inner + n;
	}
};
