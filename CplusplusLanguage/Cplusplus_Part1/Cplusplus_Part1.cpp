// Part1: 基本入出力構文

#include <iostream>		// C++標準のインクルードファイル


// プログラムコードの大本
int main()
{
	/*
	C++での入力出力に関することを説明するところですが、C言語を理解していると思うので構文を見て覚えてください。
	*/

	// 標準出力
	std::cout << "HelloWorld" << std::endl;

	
	// 標準入力
	int a = 0;
	std::cin >> a;
	std::cout << a << std::endl;


	// エラー出力
	std::cerr << "EroorCode : 0" << std::endl;
	

	/// おまけ--------------------------
	/*
	改行コードとしてC++ではendlを行うことが多いと思います。
	ですが、処理速度的にはendlよりも\nを使った方が良いです。

	では、なぜendlというものがあるというとこれは\nという改行に加えてバッファをフラッシュしています。
	分かりやすく言うと、改行をしつつバッファをフラッシュ（スタックを解放）しています。

	例えば動画を見ていると裏でストリーミング処理が行われています。
	そのストリーミングとは先の部分を読み込みバッファが溜まったらフラッシュするといったことを常にしています。

	そのバッファをフラッシュするといったことを自動的に行ってくれるのがendlです。
	意図的に行う場合はflushを呼びます。

	まぁ簡単に言えばバッファをフラッシュする必要が無いときは\nの方が早いです。
	まぁ不安ならendlの方が安全です。
	*/


	return 0;	// 正常終了
}