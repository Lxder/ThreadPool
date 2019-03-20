/* 单例模式模版 */
#ifndef SINGLETON_H
#define SINGLETON_H

#include <stdio.h>

template <typename T>
class Singleton
{
	public:
		static T *GetInstance() {
			if (m_pInstance == NULL) {
				m_pInstance = new T();
			}   
			return m_pInstance;
		}   

	protected:
		Singleton() {
			m_pInstance = NULL;
		}   

	private:
		static T* m_pInstance;
};

template<typename T>
T* Singleton<T>::m_pInstance = NULL;

#endif
