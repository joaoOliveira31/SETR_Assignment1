/** @file MySAG.h
 * @brief Ficheiro Principal
 * 
 * Modulo que computa valores agregados numa stream
 * 
 * @author João Oliveira, Diogo Leao, Gonçalo Moniz
 * @date 22/03/22
 * @bug Não colocar um numero na seleção bloqueia o programa
*/
#include <stdio.h>

	/**
	 * @brief Função MySAGInsert()
	 *
	 * Esta função vai adicionar o numero inserido á stream.
	 * 
	 */
	void MySAGInsert();
	/**
	 * @brief Função MySAGInit()
	 *
	 * Esta função começa o módulo e faz loop da interface em que o utilizador escolhe que função quer executar,
	 * introduzindo o numero da função que quer executar.
	 * 
	 * 
	 */
	void MySAGInit();