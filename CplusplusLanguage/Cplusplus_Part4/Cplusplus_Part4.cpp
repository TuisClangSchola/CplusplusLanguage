// Part4: クラス

#include "ClassA.hpp"
#include <iostream>


// プログラムコードの大本
int main()
{
	/*
	今回はクラスについて説明します。
	*/

	/*
	クラスの生成は別のファイルcpp/hppにて作成したので、そこから記述を見て
	ここでの実行の仕方を見てください。
	*/

	/// クラスの生成--------------
	ClassA c_a1;
	c_a1.Draw();
	
	ClassA c_a2(30);
	c_a2.Draw();

	ClassA c_a3(50, 60);
	c_a3.Draw();


	/// クラスの動的生成----------------
	ClassA* p_a1 = new ClassA;
	p_a1->Draw();

	ClassA* p_a2 = new ClassA(30);
	p_a2->Draw();

	ClassA* p_a3 = new ClassA(50, 60);
	p_a3->Draw();


	// 解放
	c_a1.~ClassA();
	c_a2.~ClassA();
	c_a3.~ClassA();
	delete p_a1;
	delete p_a2;
	delete p_a3;


	/*
	クラスは基本的に専用のヘッダーとcppを作成しその中で宣言するようにします。
	そしてそれをインクルードしてクラスの生成をします。

	クラスの生成には動的であるかそうでないかで二つのパターンがあります。
	どちらにしても解放を忘れないでください。

	ではコンストラクタとデストラクタについての内容は向こうで説明するとして呼び出されるタイミングに浮いて説明します。

	　ポインタのついてないクラス変数は
	コンストラクタは変数宣言したタイミングで呼ばれます。
	そしてデストラクタは直接呼び出すか変数を消すタイミングで呼び出されます。

	　ポインタのついているクラス変数は
	コンストラクタはnewしたタイミングで呼び出されます。
	そしてデストラクタは直接呼び出すかdeleteしたタイミングで呼び出されます。
	ですがポインタである以上deleteしなければメモリからは消えないので直接呼び出すのではなくdeleteするようにしてください。
	*/

	return 0;	// 正常終了
}