/*
 * @Author: cnhkbbs cnhkemail@foxmail.com
 * @Date: 2023-10-02 17:02:27
 * @LastEditors: cnhkbbs cnhkemail@foxmail.com
 * @LastEditTime: 2023-10-02 17:05:31
 * @FilePath: \demo1e:\notes\Go\基础语法.go
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
package main

import (
	"fmt"
	"reflect"
)

func main() {
	// hello world
	fmt.Println("hello world")

	// 格式化字符串
	/*
		Sprintf 根据格式化参数生成格式化的字符串并返回该字符串。
		Printf 根据格式化参数生成格式化的字符串并写入标准输出。
	*/
	fmt.Println("格式化字符串")
	var num = 123
	var str = "Hello go!"
	var date = "2023-10-01"
	var template = "%s,This is %d Speaking,Today's date is %s"
	var mix_str = fmt.Sprintf(template, str, num, date)
	fmt.Println(mix_str)
	fmt.Printf(template, str, num, date)

	// 变量
	// 指定类型
	fmt.Println("\n变量")
	var no_init_variable_bool bool       //未初始化默认值为flase
	var no_init_variable_int int         //未初始化默认值为0
	var no_init_variable_float float64   // 未初始化默认值为0
	var no_init_variable_string string   // 未初始化默认值为 ""
	var no_init_variable_interface error // 未初始化默认值为 <nil>
	fmt.Printf("%v %v %v %v %v", no_init_variable_bool, no_init_variable_int, no_init_variable_float, no_init_variable_string, no_init_variable_interface)

	//未指定类型
	var variable = 1
	fmt.Println("\n未指定类型根据值自行判定变量类型", reflect.TypeOf(variable).Name())

	// :=
	// myvariable := 1 等价于 var myvariable = 1
	var myvariable_one = 1
	myvariable_two := 2
	fmt.Print(myvariable_one, myvariable_two)

	// 多变量同一行赋值
	var var1, var2, var3 = 123, 1.2, "Hello World"
	fmt.Print(var1, var2, var3)

}
