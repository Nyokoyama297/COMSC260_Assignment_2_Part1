// StaticArray.TestDriver.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"

//Student's name: Naoyuki Yokoyama
//Student's ID: 1635297
#include <iostream>
#include <string>
using namespace std;

#include<cassert>
#include "StaticArray.h"
#include "StaticArray.h"

const int SIZE = 100;

int main()
{
  StaticArray<int, SIZE> a;

  //StaticArray::Array
  cout << endl << "Testing StaticArray<int>::StaticArray" << endl;
  for (int i = 0; i < SIZE; i++) {
	assert(a[i] == 0);
  }
  cout << "Pass" << endl;

  //StaticArray::capacity
  cout << endl << "Testing StaticArray<int>::capasity" << endl;
  cout << "Expected Value: 100" << endl;
  cout << "Actual Value: " << a.capacity() << endl;
  assert(SIZE == a.capacity());
  cout << "Pass" << endl;

  //StaticArray::operator[] getter
  cout << endl << "Testing StaticArray<int>::operator[] getter" << endl;
  const StaticArray<int, SIZE> b = a;
  for (int i = 0; i < SIZE; i++) {
	assert(a[i] == b[i]);
  }
  cout << "Pass" << endl;

  //StaticArray::operator[] setter
  cout << endl << "Testing StaticArray<int>::operetor[] setter" << endl;
  a[6] = 123456;
  a[7] = 7654321;
  cout << "Expected Value for a[6]: 123456" << endl;
  cout << "Actual Vlue: " << a[6] << endl;
  assert(a[6] == 123456);
  cout << "Expected Value for a[7]: 7654321" << endl;
  cout << "Actual Vlue: " << a[7] << endl;
  assert(a[7] == 7654321);
  a[-1000] = 123;
  cout << "Ecpected Value for a[1000]: 123" << endl;
  cout << "Actual Value: " << a[-1000] << endl;
  assert(a[-1000] == 123);
  assert(a[-10] == 123);
  assert(a[1000] == 123);
  assert(a[0] != 123);
  assert(a[99] != 123);
  cout << "Pass" << endl;

  //Const object test
  cout << endl << "Const object test" << endl;
  const StaticArray<int, SIZE> c;
  assert(c.capacity());
  assert(c[0] == c[0]);
  assert(c[-1] == c[-1]);
  cout << "Pass" << endl;


  StaticArray<double, SIZE> d;

  //StaticArray::Array
  cout << endl << "Testing StaticArray<double>::StaticArray" << endl;
  for (int i = 0; i < SIZE; i++) {
	assert(d[i] == 0);
  }
  cout << "Pass" << endl;

  //StaticArray::capacity
  cout << endl << "Testing StaticArray<double>::capasity" << endl;
  cout << "Expected Value: 100" << endl;
  cout << "Actual Value: " << d.capacity() << endl;
  assert(SIZE == d.capacity());
  cout << "Pass" << endl;

  //StaticArray::operator[] getter
  cout << endl << "Testing StaticArray<double>::operator[] getter" << endl;
  const StaticArray<double, SIZE> e = d;
  for (int i = 0; i < SIZE; i++) {
	assert(e[i] == d[i]);
  }
  cout << "Pass" << endl;

  //StaticArray::operator[] setter
  cout << endl << "Testing StaticArray<double>::operetor[] setter" << endl;
  d[6] = 1.23456;
  d[7] = 7.654321;
  cout << "Expected Value for d[6]: 1.23456" << endl;
  cout << "Actual Vlue: " << d[6] << endl;
  assert(d[6] == 1.23456);
  cout << "Expected Value for d[7]: 7.654321" << endl;
  cout << "Actual Vlue: " << d[7] << endl;
  assert(d[7] == 7.654321);
  d[-1000] = 1.23;
  cout << "Ecpected Value for d[1000]: 1.23" << endl;
  cout << "Actual Value: " << d[-1000] << endl;
  assert(d[-1000] == 1.23);
  assert(d[-10] == 1.23);
  assert(d[1000] == 1.23);
  assert(d[0] != 1.23);
  assert(d[99] != 1.23);
  cout << "Pass" << endl;

  //Const object test
  cout << endl << "Const object test" << endl;
  const StaticArray<double, SIZE> f;
  assert(f.capacity());
  assert(f[0] == f[0]);
  assert(f[-1] == f[-1]);
  cout << "Pass" << endl;


  StaticArray<char, SIZE> g;

  //StaticArray::Array
  cout << endl << "Testing StaticArray<char>::StaticArray" << endl;
  for (int i = 0; i < SIZE; i++) {
	assert(g[i] == '0');
  }
  cout << "Pass" << endl;

  //StaticArray::capacity
  cout << endl << "Testing StaticArray<char>::capasity" << endl;
  cout << "Expected Value: 100" << endl;
  cout << "Actual Value: " << g.capacity() << endl;
  assert(SIZE == g.capacity());
  cout << "Pass" << endl;

  //StaticArray::operator[] getter
  cout << endl << "Testing StaticArray<char>::operator[] getter" << endl;
  const StaticArray<char, SIZE> h = g;
  for (int i = 0; i < SIZE; i++) {
	assert(g[i] == h[i]);
  }
  cout << "Pass" << endl;

  //StaticArray::operator[] setter
  cout << endl << "Testing StaticArray<char>::operetor[] setter" << endl;
  g[6] = 'a';
  g[7] = 'b';
  cout << "Expected Value for g[6]: a" << endl;
  cout << "Actual Vlue: " << g[6] << endl;
  assert(g[6] == 'a');
  cout << "Expected Value for g[7]: b" << endl;
  cout << "Actual Vlue: " << g[7] << endl;
  assert(g[7] == 'b');
  g[-1000] = 'c';
  cout << "Ecpected Value for a[1000]: c" << endl;
  cout << "Actual Value: " << g[-1000] << endl;
  assert(g[-1000] == 'c');
  assert(g[-10] == 'c');
  assert(g[1000] == 'c');
  assert(g[0] != 'c');
  assert(g[99] != 'c');
  cout << "Pass" << endl;

  //Const object test
  cout << endl << "Const object test" << endl;
  const StaticArray<char, SIZE> i;
  assert(i.capacity());
  assert(i[0] == i[0]);
  assert(i[-1] == i[-1]);
  cout << "Pass" << endl;


  StaticArray<string, SIZE> j;

  //StaticArray::Array
  cout << endl << "Testing StaticArray<string>::StaticArray" << endl;
  for (int i = 0; i < SIZE; i++) {
	assert(j[i] == "0");
  }
  cout << "Pass" << endl;

  //StaticArray::capacity
  cout << endl << "Testing StaticArray<string>::capasity" << endl;
  cout << "Expected Value: 100" << endl;
  cout << "Actual Value: " << j.capacity() << endl;
  assert(SIZE == j.capacity());
  cout << "Pass" << endl;

  //StaticArray::operator[] getter
  cout << endl << "Testing StaticArray<string>::operator[] getter" << endl;
  const StaticArray<string, SIZE> k = j;
  for (int i = 0; i < SIZE; i++) {
	assert(k[i] == j[i]);
  }
  cout << "Pass" << endl;

  //StaticArray::operator[] setter
  cout << endl << "Testing StaticArray<string>::operetor[] setter" << endl;
  j[6] = "abcde";
  j[7] = "fedcba";
  cout << "Expected Value for j[6]: abcde" << endl;
  cout << "Actual Vlue: " << j[6] << endl;
  assert(j[6] == "abcde");
  cout << "Expected Value for j[7]: fedcba" << endl;
  cout << "Actual Vlue: " << j[7] << endl;
  assert(j[7] == "fedcba");
  j[-1000] = "abc";
  cout << "Ecpected Value for j[1000]: abc" << endl;
  cout << "Actual Value: " << j[-1000] << endl;
  assert(j[-1000] == "abc");
  assert(j[-10] == "abc");
  assert(j[1000] == "abc");
  assert(j[0] != "abc");
  assert(j[99] != "abc");
  cout << "Pass" << endl;

  //Const object test
  cout << endl << "Const object test" << endl;
  const StaticArray<string, SIZE> l;
  assert(j.capacity());
  assert(l[0] == l[0]);
  assert(l[-1] == l[-1]);
  cout << "Pass" << endl;

  return 0;
}


// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
