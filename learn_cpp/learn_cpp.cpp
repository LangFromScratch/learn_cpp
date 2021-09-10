// learn_cpp.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

class Animal {
protected:
    const char* name;
public:
    virtual void action() {
        std::cout << "親クラスのaction関数\n";

    }
};

class Dog : public Animal {
public:
    Dog(const char* n) {
        name = n;
    }
    virtual void action() override {
        std::cout << "イヌの" << name << "はワンワンと吠える\n";
    }
};

class Cat : public Animal {
public:
    Cat(const char* n) {
        name = n;
    }
    virtual void action() override {
        std::cout << "ネコの" << name << "はいつも寝ている\n";
    }
};

class Rabbit : public Animal {
public:
    Rabbit(const char* n) {
        name = n;
    }
    virtual void action() override {
        std::cout << "ウサギの" << name << "はピョンピョン跳ねる\n";
    }
};


int main() {
    Animal* animals[] =
    {
        new Dog("シロ"),
        new Cat("タマ"),
        new Rabbit("ピョンスケ")
    };

    for (auto ptr : animals) {
        ptr->action();
    }

    for (auto ptr : animals) {
        delete ptr;
    }
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
