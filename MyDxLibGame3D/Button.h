#pragma once

// Image�N���X�̉��錾.
class Image;

/// <summary>
/// Button�N���X.
/// </summary>
class Button
{
public:
	/// <summary>
	/// �R���X�g���N�^.
	/// </summary>
	Button();

	/// <summary>
	/// �f�X�g���N�^.
	/// </summary>
	~Button();

	/// <summary>
	/// �X�V�֐�.
	/// </summary>
	void Update();

	/// <summary>
	/// �`��֐�.
	/// </summary>
	void Draw();

private:
	/// <summary>
	/// Image�N���X���������摜��ۑ�����ϐ�.
	/// </summary>
	Image* mImg;

	/// <summary>
	/// bool�^�̉��������ǂ�����flag.
	/// true�̂Ƃ��͉�����false�̎��͉����Ă��Ȃ��Ƃ�.
	/// </summary>
	bool mPushFlag;
};

