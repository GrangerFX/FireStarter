Project FireStarter

Motivation:
An AI with general intelligence has been proven difficult to create with large language models. I propose an alternate way to create a general AI using evolution as a basis rather than pre-coded neural networks. The concept is to keep the actual algorithms used for general AI a mystery by allowing them to form organically as part of the evolutionary process. To even start on this project, it is first necessary to understand some basic concepts of evolution and how it can be applied to the generation of algorithms.

Test Bed:
Project FireStarter was created to experimentally develop and test various evolutionary algorithms that generate code. It uses GPU code written in CUDA to have sufficiently large population sizes that evolution can occur as quickly and efficiently as possible.
The project started in 2018 after several other AI experiments going back to the early 1980s. The target function has always been a sin() function between -PI and PI. Over time both the accuracy and speed of finding a solution has increased dramatically.


The Breakthroughs: 

GPU Data Evolution: Code and the data it uses can be evolved separately. This allows the code to be generated and compiled on either the CPU or GPU while the data used by the compiled code is evolved on the GPU. The data can be evolved many thousands of times faster than it can be on a CPU.

GPU Random Code Evolution: Rather than attempting to evolve code by randomly changing instructions, this very simple method of evolution is based on population size alone. A very large population of randomly generated programs are generated and then emulated on the GPU. A relatively small number of generations of data evolution is then performed on each of them. This is at least ten times slower than GPU data evolution using compiled code but it allows early candidates to be found for full data evolution.

CPU Code Evolution:
A code evolution algorithm has been created that can solve more difficult problems. It uses natural selection among an ever increasing pool of candidate algorithms. It has a tree of code generations and weights that prefers newer and more successful members for evolution.

The Results: 
GPU random code evolution takes 2.1 seconds, on average, to generate a sin() function with six digits of accuracy on a RTX 5090. The code uses 32 instructions, up to 30 registers and just two opcodes. This code is entirely generated from scratch with the evolutionary algorithm knowing only if the results are better or worse than the original.

To complicate the problem, three variations of sine waves can be generated using the same code but different data evolution. This implies that certain patterns of code can solve a range of problems.


Unexpected Results:

For the small set of samples used to test the evolved code against sin(), the results are better than 6 digits of accuracy. It arranges the floating point math errors such that on those exact samples the precision is much higher than expected. The actual precision is about ten times less than the sampled precision.


Example Result: Note: This is only one of a very large number of solutions that can be evolved.

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

However the idea of basing a simulated evolutionary system on something like DNA has the potential to work very well. If you had an array of random numbers and an algorithm that used that sequence of numbers to generate a complex program consisting of instructions and data registers, that program could then be tested to find its suitability for some goal. For example, a simulated environment could be created such that each program could become a creature in that environment. At each step, a creature loses energy until it eventually dies if it has not consumed enough to stay alive. The creatures would consume energy found in the environment, fight and consume other creatures and eventually split into two creatures once it has enough energy. When it splits, the child’s DNA could be mutated such that the generated program would be different. In addition sometimes new creatures are added to the environment that contain DNA from two or more other creatures.

The goal is to end up with a two stage evolution. Both the algorithm that converts DNA into code and the code that it produces are evolved. It is the algorithm that converts DNA into code that is the real target but it evolves much slower than the programs it generates. The length of the DNA and program generated could scale as well but shorter programs would use less energy per step than larger programs so larger programs must be smarter. It is likely that the whole system could be run on multiple computers or even an AI data center as the program size and simulation complexity increased.

With sufficiently evolved DNA to code conversion and realistic environment simulations, it is possible that general intelligence could be evolved. At a minimum this approach should yield results that would point to further research.


Future GPU Hardware or Firmware

Current GPUs are poorly suited to running code evolution because they do not have the ability to index registers. If you have an instruction like R[x] = R[y] * R[z] where x, y and z are indexes to the set of registers, a GPU must move the registers into RAM and then index the RAM addresses which is vastly slower than using fixed registers: R1 = R2 * R3. While it is unlikely that it would be cost effective to implement indexed registers, it may be possible to instead generate the fixed register code directly on the same GPU that is executing it. This would likely require minimal, or no hardware changes. As long as the instruction set was simple enough and the register array size was fixed and pre-declared, it should be reasonably safe to convert the instructions into GPU machine code between runs of the simulation. This would increase the speed of the testing of evolved GPU code greatly, at least ten times.
