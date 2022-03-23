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
#define maxSize 10
	/**
	 * @brief Função MySAGInsert()
	 * @author João
	 *
	 * Esta função vai adicionar o numero inserido á stream.
	 * 
	 */
	void MySAGInsert();
	/**
	 * @brief Função MySAGInit()
	 * @author João
	 *
	 * Esta função começa o módulo
	 * 
	 */

	void MySAGInit();
	/**
	 * @brief Função MySAGMin()
	 * @author Diogo
	 *
	 * Esta função vai devolver o menor inteiro presente na stream.
	 * 
	 */
	void MySAGMin();
	/**
	 * @brief Função MySAGMax()
	 * @author Diogo
	 *
	 * Esta função vai devolver o maior inteiro presente na stream.
	 * 
	 */
	void MySAGMax();

	/** \brief Funcao MySAGAvg
	* \author Goncalo
	* \param[in,out] Describe Sem argumentos
	* \param[in,out] Each one in an individual line
	* \return Retorna 0
	* \date 22-3-21
	*/
	int MySAGAvg();

	/** \brief Funcao MySAGFreq
	* \author Goncalo
	* \param[in,out] Describe Sem argumentos
	* \param[in,out] Each one in an individual line
	* \return Retorna 0
	* \date 22-3-21
	*/
	int MySAGFreq(int number);