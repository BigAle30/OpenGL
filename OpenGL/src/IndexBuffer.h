#pragma once

class IndexBuffer
{
private:
	unsigned int m_RenderID;
	unsigned int m_Count;
public:
	IndexBuffer(const unsigned int* data, unsigned int count);
	~IndexBuffer();

	const void Bind();
	const void Unbind();

	inline unsigned int GetCount() const { return m_Count;  }

};