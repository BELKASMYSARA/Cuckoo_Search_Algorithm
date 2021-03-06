#ifndef SETUPPARAMS_H
#define SETUPPARAMS_H



  class SetUpParams
  {
  	//ici vous devez mettre quelques param�tres tels que :

	private:
		unsigned int   _independent_runs;         //number of independent runs nombre d'appels � l'algorithm
		unsigned int   _nb_evolution_steps;       // number of iterations per run nombre d'appel � la fitness
		unsigned int   _population_size;		// number of solutions in the population
		unsigned int   _solution_size;	        // size of each particle = dimension du probl�me

	public:
		SetUpParams ();
		//SetUpParams (unsigned int runs, unsigned int steps, unsigned int popsize, unsigned int solsize);

 		/*friend ostream& operator<< (ostream& os, const SetUpParams& setup);
		friend istream& operator>> (istream& is, SetUpParams& setup);*/

		/*const*/ unsigned int   independent_runs() const;
		/*const*/ unsigned int   nb_evolution_steps() const;
		/*const*/ unsigned int   population_size() const;
		/*const*/ unsigned int   solution_size() const;
		void independent_runs(const unsigned int val);
		void nb_evolution_steps(const unsigned int val);
		void population_size(const unsigned int val);
		void solution_size(const unsigned int val);

		~SetUpParams();
  };

#endif // SETUPPARAMS_H
