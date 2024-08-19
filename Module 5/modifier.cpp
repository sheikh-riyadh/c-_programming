#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    আমারা যদি আমাদের ২টা string কে concatination মানে জোরা লাগাতে চাই তাহলে আমারা অনেক
    ভাবে করতে পারি :
    1. a+=b; a.append(b); a+b;

    আমরা যদি চাই আমদের string এর last index এর মধ্যে কোন character অ্যাড করতে তাহলে আমরা
    করতে পারব function এর মাধ্যমে যেমন
    a.push_back("A");

    আবার আমরা যদি চাই last index থেকে কোন একটা character অ্যাড করতে তাহলে আমরা করতে পারি
    যেমন a.pop_back() তাহলে আমাদের string এর last index থেকে একটা character remove হয়ে যাবে


    a.erase(2,1) এই function এর মাধ্যমে আমরা string থেকে specific character remove করতে পারি
    যেমন আমরা যদি চাই আমাদের Hello লিখা থেকে L বাদ দিব তাহলে আমদের সেই character L এর index
    বলে দিতে হবে এবং কয়টা remove করবো সেটা ও বলে দিতে হবে যেমন "Helo" out put .

    a.erase(2) আর যদি আমরা না বলে দেই কয়টা remove করতে তাহলে ২ index এর পরে যেগুলো থাকবে সব remove
    করে দিবে "He" out put.

    a.replace(0,1,"G") আমরা যদি string থেকে কোন কিছু replace করতে চাই তাহলে আমাদের লিখতে হবে কত ইনডেক্স থেকে
    remove করতে হবে এবং কয়টা remove করবে এবং কি বসাবে out put Gello;


    a.insert(0,"G") এইটা মূলত replace মত কাজ করে তবে একটু আলাদা ভাবে এখানে সুদু কোন ইনডেক্স টা remove করবে এবং
    কি বসাবে out put "Gello"
     */

    string a = "Hello", b = "World";

    return 0;
}