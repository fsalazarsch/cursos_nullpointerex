/*
 * Created by SharpDevelop.
 * User: Carlos
 * Date: 11-07-2014
 * Time: 1:01
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;

namespace farmacia
{
	/// <summary>
	/// Description of Class1.
	/// </summary>
	public class Medicamento
	{
		private	Int16 id_medicamento;
		private String nombre;
		private String compuesto;
		private String presentacion;
		private String laboratorio;
		
		public Medicamento(String nombre, String compuesto, String presentacion, String laboratorio)
		{
			nombre = this.nombre;
			compuesto = this.compuesto;
			presentacion = this.presentacion;
			laboratorio = this.laboratorio;
		}
		
		public String get_nombre(){
		return this.nombre;
		}

		public String get_compuesto(){
		return this.compuesto;
		}

		public String get_presentacion(){
		return this.presentacion;
		}

		public String get_laboratorio(){
		return this.laboratorio;
		}
		
	}
}
