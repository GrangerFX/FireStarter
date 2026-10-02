Project FireStarter

Goal: Find methods to evolve code that can solve a specific problem. These methods must be optimized to run on a GPU using CUDA.

Code Evolution

The code has three components:
1. The instructions that perform simple operations such as adding or multiplying a register.
2. The register indices that the operations are applied to.
3. The inital data values for each register.

Each of these components can be evolved separately or together.

Example:

float function(float n) {
    float r0 = 1.23456f;
    float r1 = -0.09876f;
    n = r0 += n;
    n = r1 *= n;
    return n;
}

Here there are two instructions, two registers and two initial data values.

The opcodes are:
    n = r[x] += n
    n = r[x] *= n
The register indices are 0 and 1.
The initial data values are 1.23456 and -0.09876.

When evolving the components together, the opcodes, register indices and data values will all initially be assigned random values. At each evolution iteration, one of these would be randomized, the code function would tested against the fitness function and reverted to the pevious state if the result does not improve.
Alternately, only one component, for example the initial data value, would be modified, tested and, if needed, reverted during each evolution iteration. This would test the initial random instructions and register indices to find out if any set of initial data values allow them to improve on the current best results. This operation is simple enough to be performed in parallel on a GPU.


Initial Data Optimization

The best code candidates are compiled into CUDA PTX and executed directly on the GPU. This fully compiled code is highly performant and massively parallel. Only the initial data values are evolved as described above in a series of iterations. If the results improved during the generation, they are saved. If not, a number of random candidates are selected from the previous generation. If any of these produced better results than the current member, it is copied with its age incremeted.
At each generation, newly successful members retain their previous inital data values. Older members (copied or original), have one of their values randomized prior to evolution iterations.
This algorithm does a good job of avoiding stuck evolutions. It is the most tested, optimized and reliable code evolution algorithms.


Problem: Indexing registers is much less performant than accessing fixed registers directly. In code, the difference is n = r[0] += n and n = r0 += n. The former requires looking up the register in shared memory while the latter accesses it directly.

Solution 1: CPU Evolution. Perform only a small amount of iterations for randomized code to determine the best candidates. Compile the best candidates into CUDA PTX code with fixed register indices. Fully evolve only the data registers.
This works very well for relatively simple problems but cannot solve more complex problems.

Solution 2: GPU Evolution. Randomly generate and the evolve a large set of code candidates using the CPU. Each candidate is assigned a weight based on its fitness multiplied by the number of times it has been evolved without an improvement. The candidate with the lowest weight is selected for further evolution, compilation to CUDA PTX and initial data value evolution.

Solution 3: New Evolution. Maintain a library of successfully evolved register indices. Evolve the instruction opcodes directly on the GPU by emulating them using the fixed registers. This removes the slow register indexing problem while allowing both the opcodes and initial data values to be evolved in parallel.
This method has been tested and is several times faster at evolving code compared to using register indexing. The speed comes from both avoiding register indexing and also from the smaller number of generations required to find a successful result.


Programming Evolutionary Code

The Breakthroughs:
GPU Data Evolution: Code and the initial register data it uses can be evolved separately. This allows the code to be generated and compiled on either the CPU or GPU while the data used by the compiled code is evolved on the GPU. The data can be evolved many thousands of times faster than it can be on a CPU.

CPU Code Evolution: A code evolution algorithm has been created that can solve more difficult problems. It uses natural selection among an ever increasing pool of candidate algorithms. It has a list of code generations and weights that prefers newer and more successful members for evolution.

GPU Random Code Evolution: Rather than attempting to evolve code by randomly changing instructions, this very simple method of evolution is based on population size alone. A very large population of randomly generated programs are generated and then emulated on the GPU. A relatively small number of generations of data evolution is then performed on each of them. This is at least ten times slower than GPU data evolution using compiled code but it allows early candidates to be found for full data evolution. This algorithm is based on the concept of evolvability. That is the speed at which a set of random instructions can have its register data evolved to converge on a solution. This discovery was made while attempting to use data evolution on thousands of randomly generated code candidates. The ones that ended up with better results had more improvements per generation than ones with worse results.

GPU Fixed Register Evolution: The slowest part of emulating code on a GPU is the slow speed of indexing registers. GPUs have no ability to directly index their registers. Instead they must be written to shared memory and then loaded immediately prior to the instruction emulation and finally written back to the shared memory. Using shared memory is many times faster than using global memory but it is still at least ten times slower than using the register directly. One way around this is to use fixed register indexing. The register indices for each instruction are stored in a constant array. The compiler skips loading the indices from the array when it unrolls the instruction emulation loop. This would allow a library of successful instruction register indices to be built which solve numerous different problems. Register sets from the library could be tested until a working code solution is found. This method has its limitations but could be useful in many situations.

The Results:
The original GPU random code evolution takes 2.1 seconds, on average, to generate a sin() function with six digits of accuracy on a tuned RTX 5090. The code uses 32 instructions, up to 30 registers and just two opcodes. This code is entirely generated from scratch with the evolutionary algorithm knowing only if the results are better or worse than the original.
Since the data evolution pass takes far less time than the code evolution pass, performing data evolution on the top four candidates drops the average solution time to 1.7 seconds on an untuned RTX 5090.

GPU random code evolution with fixed register indices takes 0.5 seconds on average to generate a sin() function with six digits of accuracy on an untuned RTX 5090.

A more difficult problem is to require that three variations of sine waves be generated using the same code but different initial register data. This requires the CPU evolution to be successful. The fact that it works implies that certain patterns of code can solve a range of problems. It also implies that having a library of successful register indices could solve a range of problems.


Unexpected Results:

For the small set of samples used to test the evolved code against sin(), the results are better than 6 digits of accuracy. It arranges the floating point math errors such that on those exact samples the precision is much higher than expected. The actual precision is about ten times less than the sampled precision.


Example Result:
Note: This is only one of a very large number of solutions that can be evolved.

    inline float Sin(float n)
    {
        float r0, r1, r2, r3, r4;
    
        r0 = n += -1.57079625f;
        n *= r0;
        r0 = n += -1.55048871f;
        r1 = n *= -0.00504709f;
        r2 = n += -3.27915645f;
        r3 = n *= 0.97507936f;
        n += 6.77082920f;
        n *= 5.91008902f;
        n *= r0;
        n *= 0.04096542f;
        n *= -0.01095512f;
        n *= -0.05268164f;
        r0 = n += -0.22633524f;
        n *= 5.91095209f;
        r4 = n *= 1.69961059f;
        n = r1 *= n;
        n *= r4;
        r4 = n += 1.94992745f;
        n += r0;
        n *= -3.13565612f;
        n = r1 *= n;
        n += 0.89263713f;
        n = r1 += n;
        n *= 0.72802269f;
        n *= r4;
        n *= r2;
        n *= r1;
        n *= r3;
        n *= 0.31613135f;
        n *= 0.96034288f;
        n += -2.72793937f;
        n *= 0.36657712f;
        return n;
    }


Future Research

There is a field of study called Genetic Programming. It attempts to apply the way DNA can be evolved through mutation and mixing with the DNA of other population members to create better versions. However this approach misses the point about how DNA is used to create organisms. A program is much more like the organism itself than the DNA that created it. Splicing one section of code into another is like cutting up a cow and a sparrow and then sewing them back together and hoping you now have a flying herbivore. The fact that it works at all shows that evolution can still work even in the bleakest of circumstances.

However, the idea of basing a simulated evolutionary system on something like DNA has the potential to work very well. If you had an array of random number seeds and an algorithm that used those seeds to generate a complex program consisting of instructions and data registers, that program could then be tested to find its suitability for some goal. For example, a simulated environment could be created such that each program could become a creature in that environment. At each step, a creature loses energy until it eventually dies if it has not consumed enough to stay alive. The creatures would consume energy found in the environment, fight and consume other creatures and eventually split into two creatures once it has enough energy. When it splits, the child’s DNA could be mutated such that the generated program would be different. In addition sometimes new creatures are added to the environment that contain DNA from two or more other creatures.

The goal is to end up with a two stage evolution. Both the algorithm that converts DNA into code and the code that it produces are evolved. It is the algorithm that converts DNA into code that is the real target but it evolves much slower than the programs it generates. The length of the DNA and program generated could scale as well but shorter programs would use less energy per step than larger programs so larger programs must be smarter. It is likely that the whole system could be run on multiple computers or even an AI data center as the program size and simulation complexity increased.

With sufficiently evolved DNA to code conversion and realistic environment simulations, it is possible that general intelligence could be evolved. At a minimum this approach should yield new algorithms that would point to further research.


Future GPU Hardware or Firmware

Current GPUs are poorly suited to running code evolution because they do not have the ability to index registers. If you have an instruction like R[x] = R[y] * R[z] where x, y and z are indexes to the set of registers, a GPU must move the registers into RAM and then index the RAM addresses which is vastly slower than using fixed registers: R1 = R2 * R3. While it is unlikely that it would be cost effective to implement indexed registers, it may be possible to instead generate the fixed register code directly on the same GPU that is executing it. This would likely require minimal, or no hardware changes. As long as the instruction set was simple enough and the register array size was fixed and pre-declared, it should be reasonably safe to convert the instructions into GPU machine code between runs of the simulation. This would increase the speed of the testing of evolved GPU code greatly, at least ten times.

A conversation with Claude:
https://claude.ai/share/502e63e3-1fba-4ef4-a597-53525351f161

That's the entire project in a nutshell. I had no idea about any of this when I started. I had to observe it and then test my hypotheses to learn anything. Essentially the AI is teaching me. Considering all the computations it does, this is not terribly surprising. That's the thing about trying to work on general AI. The challenge is not creating an AI smarter than a human but accepting that in some ways it was smarter all along.

Mark Granger
grangerfx@gmail.com
