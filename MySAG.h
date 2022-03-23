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

	/** \brief Funcao MySAGAvg()
	* \author Goncalo
	* Returns the average of the values of the stream window (rounded to an int)
	


	* \return Media dos valores do array
	*/

	int MySAGAvg();

	/** \brief Funcao MySAGFreq()
	* \author Goncalo
    * Returns the number of times that a given value, passed as argument,
	* exists in the stream window
	
	* \return Frequencia que o valor introduzido (number) aparece no array
	*/

	int MySAGFreq(int number);