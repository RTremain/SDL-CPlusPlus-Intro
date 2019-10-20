#pragma once

class UnCopyable
{
public:


private:
	UnCopyable(const UnCopyable &unCopyable);

	const UnCopyable& operator = (const UnCopyable &unCopyable);

protected:
	UnCopyable() {};
};
