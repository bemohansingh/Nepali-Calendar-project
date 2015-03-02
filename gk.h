//#inclide<iostream>
#include<ctime>
char myans[500];
int slen=0;
char *msga [500];
char *ans [500];
void wans()
{
    if(opts==0)
    {
    if( event.type == SDL_KEYDOWN )
    {
        //If the string less than maximum size
        if( slen<=100)
        {
             if( ( event.key.keysym.sym == SDLK_BACKSPACE )  &&mupd==0 )
        {
             mupd=1;
            //Remove a character from the end

              if(slen!= 0 )
                {
                    slen--;
                myans[slen]='\0';

                }

        }
          else if( event.key.keysym.unicode ==SDLK_RETURN &&mupd==0 )
            {
            mupd=1;
                myans[slen]='\0';


            }
        else if(mupd==0&&( event.key.keysym.sym != SDLK_LSHIFT ) &&( event.key.keysym.sym != SDLK_RSHIFT ) )
            {
                mupd=1;
                //Append the character
                myans[slen]=(char)event.key.keysym.unicode;
                slen++;
            }

        }

        //If the string was changed
        if( msg[457]!=NULL)
        {
            //Free the old surface
            SDL_FreeSurface( msg[457] );

            //Render a new text surface
            msg[457] = TTF_RenderText_Solid( font[0], myans, textColor );
        }
        else
        {
           msg[457] = TTF_RenderText_Solid( font[0], myans, textColor );
        }


}
if(event.type == SDL_KEYUP)
{
    mupd=0;
}

    }
}
void gk()
{

            msga[0] = "Which Dutch painter cut off part of his ear? ";
            ans[0] = "Vincent van Gogh";
            msga[1] = "In which country is the Great Barrier Reef?";
            ans[1] = "Australia";
            msga[2] = "What color is chlorophyll?";
            ans[2] = "Green";
            msga[3] = "How many points are scored for a touchdown in American football?";
            ans[3] = "Six";
            msga[4] = "Which soft green egg-shaped fruit comes from New Zealand?";
            ans[4] = "The Kiwi fruit";
            msga[5] = "Who was the youngest Beatle?";
            ans[5] = "George Harrison";
            msga[6] = "In which city is the cathedral of Nôtre Dame?";
            ans[6] = "Paris";
            msga[7] = "What color is the middle stripe of the French flag?";
            ans[7] = "White";
            msga[8] = "Who wrote a famous diary while hiding from the Nazis in Amsterdam?";
            ans[8] = "Anne Frank";
            msga[9] = "Who directed, Jaws, Raiders of the Lost Ark, and ET?";
            ans[9] = "Steven Spielberg";
            msga[10] = "Who was the leading actress in Sleepless in Seattle and You’ve Got Mail?";
            ans[10] = "Meg Ryan";
            msga[11] = "What is the family name of JFK?";
            ans[11] = "Kennedy";
            msga[12] = "In which country was Buddha born?";
            ans[12] = "Nepal";
            msga[13] = "What nationality was Picasso?";
            ans[13] = "Spanish";
            msga[14] = "Whose nose grew longer every time he told a lie?";
            ans[14] = "Pinocchio";
            msga[15] = "On what date did Osama Bin Laden's Al Queda organization attack America?";
            ans[15] = "September 11th";
            msga[16] = "In which galaxy do we live?";
            ans[16] = "The Milky Way";
            msga[17] = "In which year did the Titanic sink?";
            ans[17] = "1912";
            msga[18] = "Who painted The Scream?";
            ans[18] = "Edvard Munch";
            msga[19] = "What is the smallest breed of dog?";
            ans[19] = "The Chihuahua";
            msga[20] = "Which French wine is released every year on the third Thursday of November?";
            ans[20] = "Beaujolais nouveau";
            msga[21] = "What does Alice follow down a hole into Wonderland?";
            ans[21] = "The White Rabbit";
            msga[22] = "On what date do the people of England eat Christmas dinner?";
            ans[22] = "December 25th";
            msga[23] = "Who sang Yellow Submarine?";
            ans[23] = "The Beatles";
            msga[24] = "What is the height of mount everesr?";
            ans[24] = "8848m";
            msga[25] = "In which city was the famous black hole?";
            ans[25] = "Calcutta";
            msga[26] = "Christopher Cockerel invented what";
            ans[26] = "Hovercraft";
            msga[27] = "Ray Bolger played who in The Wizard of Oz";
            ans[27] = "Scarecrow";
            msga[28] = "Sabotage is French - What did the saboteurs use";
            ans[28] = "Shoes - sabot means shoe";
            msga[29] = "Which part of the human body contains the most gold";
            ans[29] = "Toenails";
            msga[30] = "Mohs scale hardest substance is diamond - what's the softest";
            ans[30] = "Talc";

            msga[31] = "La Giaconda is better known as what";
            ans[31] = "Mona Lisa";
            msga[32] = "Names - Baker Cook obvious what did Cordwainer do";
            ans[32] = "Shoemaker";
            msga[33] = "Which country do Sinologists study";
            ans[33] = "China";
            msga[34] = "Rudy Stevens became famous under which name";
            ans[34] = "Barbara Stanwyck";
            msga[35] = "What is Orchesis - either professional or amateur";
            ans[35] = "Art of Dancing";
            msga[36] = "Taken literally what should you see in a Hippodrome";
            ans[36] = "Horses";
            msga[37] = "Who wrote the Man in the Iron Mask";
            ans[37] = "Alexander Dumas";
            msga[38] = "Which 1993 Disney film starred Bet Middler as a witch";
            ans[38] = "Hocus Pocus";
            msga[39] = "What was the first James Bond film";
            ans[39] = "Dr No";
            msga[40] = "Aescapalious emblem staff snake Greek Roman god of what";
            ans[40] = "Medicine";

            msga[41] = "Giacomo Agostini - 122 Grand Prix 15 world titles what sport";
            ans[41] = "Motorcycle Racing";
            msga[42] = "Led Deighton trilogy Game Set Match What 3 Capitals";
            ans[42] = "Berlin Mexico London";
            msga[43] = "Alan Stuart Konigsberg famous as who";
            ans[43] = "Woody Allen";
            msga[44] = "Which human rights organisation founded 1961 got Nobel 1977";
            ans[44] = "Amnesty International";
            msga[45] = "Whose autobiography was The long walk to Freedom";
            ans[45] = "Nelson Mandela";
            msga[46] = "What was discovered in 1922 by Howard Carter";
            ans[46] = "Tutankamen tomb";
            msga[47] = "Clyde Tonbaugh discovered what planet in 1930";
            ans[47] = "Pluto";
            msga[48] = "Who won the women's heptathlon at Seoul in 1988";
            ans[48] = "Jackie Joyner-Kersey";
            msga[49] = "What was the world’s first high level programming language 1957";
            ans[49] = "IBM FORTRAN";
            msga[50] = "Bombardier Billy Wells was seen on many Rank films - why";
            ans[50] = "Hit Gong";

            msga[51] = "In Star Fleet Will Riker plays which musical instrument";
            ans[51] = "Trombone";
            msga[52] = "Troy McClure appears in which cartoon series";
            ans[52] = "The Simpsons";
            msga[53] = "Illinois second largest city and a TV detective share what name";
            ans[53] = "Rockford";
            msga[54] = "Who composed the opera Ill Travatore";
            ans[54] = "Guiseppe Verdi";
            msga[55] = "In Greek mythology Deianeira was the wife of who";
            ans[55] = "Hercules";
            msga[56] = "Which female name means worth of love";
            ans[56] = "Amanda";
            msga[57] = "Odin owned Geri and Freki what were they";
            ans[57] = "Wolves";
            msga[58] = "What is the largest environmental organisation in the world";
            ans[58] = "Greenpeace";
            msga[59] = "Who designed the difference engine finally built in 1991";
            ans[59] = "Charles Babbage's computer 1796";
            msga[60] = "Who is the Patron Saint of boy scouts";
            ans[60] = "Saint George";
            msga[61] = "In his will who left his wife his second best bed";
            ans[61] = "William Shakespeare";
            msga[62] = "In TS Elliot's book of practical cats name the mystery cat";
            ans[62] = "Macavity";
            msga[63] = "If a doctor says you have ecchymosis what have you got";
            ans[63] = "A Bruise";
            msga[64] = "Captain Hans Langsdorff captained which German Battleship";
            ans[64] = "Graf Spee";
            msga[65] = "From the Earth to the sun is one AU what does AU stand for";
            ans[65] = "Astronomical Unit";
            msga[66] = "The religious text Tripitaka comes from which religion";
            ans[66] = "Buddhism";
            msga[67] = "Agni, face covered in butter, is the Hindu god of what";
            ans[67] = "Fire";
            msga[68] = "Which pop singer was nicknamed The Groover from Vancouver";
            ans[68] = "Brian Adams";
            msga[69] = "If you landed at Mirabel international airport where are you";
            ans[69] = "Montreal";
            msga[70] = "In Star Trek Deep Space Nine which character had a simbiant";
            ans[70] = "Jadzea Dax";
            msga[71] = "Which novel opens and closes with the letters of Robert Walton";
            ans[71] = "Frankenstein";
            msga[72] = "Which stars name means chained maiden";
            ans[72] = "Andromeda";
            msga[73] = "Name European Cathedral known as the coronation cathedral";
            ans[73] = "Rheims";
            msga[74] = "The Shining Path is a revolutionary movement in which country";
            ans[74] = "Peru";
            msga[75] = "The computer language LISP means what";
            ans[75] = "List Processing";
            msga[76] = "Bor and Bestla his parents Vili and Ve his brothers name him";
            ans[76] = "Odin chief Norse God";
            msga[77] = "Old Dominion was a nickname of which US state";
            ans[77] = "Virginia";
            msga[78] = "Jim Rhodes is the alter ego of which Marvel comic book hero";
            ans[78] = "Iron Man";
            msga[79] = "Name UK General who defeated Montcalm on Plains Abraham";
            ans[79] = "James Wolfe";
            gkn=79;
            msga[gkn+1] = "Funny and Interesting Facts\n>>You can’t kill yourself by holding your breath\nThere is a city called Rome on every continent.\nIt’s against the law to have a pet dog in Iceland.\nYour heart beats over 100,000 times a day.";

            msga[gkn+2] = "People Who Changed the World\n>> Lord Buddha (c 563 - 483BC) Spiritual Teacher and founder of Buddhism.";

            msga[gkn+3] = "People Who Changed the World\n>> Winston Churchill (1874 - 1965) Prime Minister of Great Britain during Second World War.";

            msga[gkn+4] = "People Who Changed the World\n>> William Shakespeare (1564- 1616) English poet and playwright.";

            msga[gkn+5] = "People Who Changed the World\n>>Adolf Hitler (1889 - 1945) Dictator of Nazi Germany.";

            msga[gkn+6] = "People Who Changed the World\n>>Abraham Lincoln (1809 – 1865) President of US during civil war, helped end slavery.";

            msga[gkn+7] = "People Who Changed the World\n>> Nelson Mandela (1918 - ) Anti-apartheid leader. First President of democratic South Africa in 1994.";

            msga[gkn+8] = "People Who Changed the World\n>> Martin Luther King (1929 - 1968) Non-violent civil rights leader";

            msga[gkn+9] = "People Who Changed the World\n>>Mikhail Gorbachev (1931 - ) Leader of Soviet Union. Oversaw transition from Communism in Eastern Europe.";

            msga[gkn+10] = "People Who Changed the World\n>>Thomas Jefferson (1743- 1826) 3rd President of US. Principle author of Declaration of Independence";

            msga[gkn+11] = "People Who Changed the World\n>>George Washington (1732 – 1799) - 1st President of US";
            msga[gkn+12] = "People Who Changed the World\n>>Sri Krishna (c. BC) - Spiritual Teacher of Hinduism";
            msga[gkn+13] = "People Who Changed the World\n>>Albert Einstein (1879 – 1955) - German physicist.";
            msga[gkn+14] = "People Who Changed the World\n>>Ataturk (1881-1938) - founder of the Turkish Republic.";
            msga[gkn+15] = "People Who Changed the World\n>>Pablo Picasso (1881-1973) - Spanish painter and sculptor";
            msga[gkn+16] = "People Who Changed the World\n>>Johann Gutenberg (1395 – 1468) - Inventor of printing press.";
            msga[gkn+17] = "People Who Changed the World\n>>Plato (424 – 348 BC) - philosopher.";
            msga[gkn+18] = "People Who Changed the World\n>>Queen Elizabeth II (193- British Queen";
            msga[gkn+19] = "People Who Changed the World\n>>Dwight Eisenhower (1890 – 1969) - Supreme Allied Commander";
            msga[gkn+20] = "People Who Changed the World\n>>Elvis Presley (1935 – 1977) - Rock star.";

            msga[gkn+21] = "People Who Changed the World\n>>Marie Curie (1867 – 1934) - Chemist and Physicist";
            msga[gkn+22] = "People Who Changed the World\n>>Thomas Edison (1847 – 1931) - Inventor and businessman.";
            msga[gkn+23] = "People Who Changed the World\n>>George Orwell (1903 – 1950) - English author";
            msga[gkn+24] = "People Who Changed the World\n>>Haile Selassie - Ethiopian Leader";
            msga[gkn+25] = "People Who Changed the World\n>>Genghis Kahn - Leader of Mongol Empire stretching from China to Europe.";
            msga[gkn+26] = "People Who Changed the World\n>>Henry Ford (1864-1947) US Industrialist";
            msga[gkn+27] = "People Who Changed the World\n>>Benjamin Franklin (1706 - 1790) - US writer and polymath";
            msga[gkn+28] = "People Who Changed the World\n>>Confucius (551 – 479 BC) - Chinese philosopher.";
            msga[gkn+29] = "People Who Changed the World\n>>Alexander the Great (356 – 323 BC) - King of Macedonia.";
            msga[gkn+30] = "People Who Changed the World\n>>Woodrow Wilson (1856 – 1924) - President of US during WWI";

            msga[gkn+31] = "HEALTH\n>>The more fat your have on your body, the more is the risk of straining your heart and developing diabetes";
            msga[gkn+32] = "HEALTH\n>>if you are past the age of 25 the only way you can know that you are putting on excess weight to compare your weight against the figure of desirable weight if 20% more you are obese";
            msga[gkn+33] = "HEALTH\n>>if you are over weight the only solution is to reduce your food intake. Any amount of exercise is not as good as reading in take of food(rich in calories)";
            msga[gkn+34] = "HEALTH\n>>if you spend more calories in work than what you take from food you will lose weight if you take more calories then what you spend you will gain weight if is all qestion of calories balance";
            msga[gkn+35] = "HEALTH\n>>the indian council of medical research recommended allowavces of food stuffs to be taken be indian are given table";
            msga[gkn+36] = "HEALTH\n>>do not start any dieting without consulting your doctor and dietician";
            msga[gkn+37] = "HEALTH\n>>have some regular strenuous esercise at least for half an hour each day running ,cycling, swimming, brisk walking will help to reduce your fat by removing excess calories ";
            msga[gkn+38] = "HEALTH\n>>it has been proved that regular exercise can prevent heart attacks ";
            msga[gkn+39] = "HEALTH\n>>never start any exercise program without getting a fitness certificate from your family physician";
            msga[gkn+40] = "HEALTH\n>>it does not matter what tooth paste you use ,brush your teeth at least twice a day especially before going to bed";

            msga[gkn+41] = "for DIABETES\n>> once you over 45 years get your urine checked for sugar and get your fasting blood sugar estimated";
            msga[gkn+42] = "for DIABETES\n>>Most middle-aged people with diabetes can manage to control the disease with diabetes with diet and talblets.only a few require insulin";
            msga[gkn+43] = "during pregnancy\n>>do not take any drugs without consulting your doctor ";
            msga[gkn+44] = "during pregnancy\n>>avoid all drugsfirst 3 month of pregnancy";
            msga[gkn+45] = "during pregnancy\n>>do not get any X-Ray test during this period ";
            msga[gkn+46] = "during pregnancy\n>>groth of the childis from the dateof conceptaion";
            msga[gkn+47] = "during pregnancy\n>>consult your obstretrician periodically any make sure that you are taking a nutrious diet";
            msga[gkn+48] = "during pregnancy\n>>check your hemoglobin, blood group,Rh type and Urine for albumin ante-natal care is essential";
            msga[gkn+49] = "symptoms of JAUNDICE disease \n>>nausea,Vomiting,low grade temperature,loss of appetite";
            msga[gkn+50] = "symptoms of TUBERCULOSIS disease \n>>Prolonged cough usually with expectoration.(LUNG)low gradeevening rise of temp,loss of appetite, marked loss of weight";

            msga[gkn+51] = "symptoms of TYPHOID disease \n>>High fever, malaise,coated tongue";
            msga[gkn+52] = "symptoms of MEASLES disease \n>>high temp,watering eyes sore, mouth temp,subside with appearance of skin rash";
            msga[gkn+53] = "symptoms of MUMPS disease \n>>fever,swelling on both sides,in front of the ears inability to open the mouth";
            msga[gkn+54] = "symptoms of DIPHTHERA disease \n>> high temp sore throat white patch in throat";
            msga[gkn+55] = "symptoms of HEART ATTACK disease \n>>sudden severe chest pain profuse sweating diffeculty in breating, occasionally a mild discomfort in the chest may be the only symptom a mild heart attack";
            msga[gkn+56] = "symptoms of HYPERTENSION disease \n>> unexplainedheadache,dizzines,vertigo(high blood pressure)";
            msga[gkn+57] = "amazing facts about the human body\n>>The appendix gets a bad press. It is usually treated as a body part that lost its function millions of years ago. All it seems to do is occasionally get infected and cause appendicitis. Yet recently it has been discovered that the appendix is very useful to the bacteria that help your digestive system function. They use it to get respite from the strain of the frenzied activity of the gut, somewhere to breed and help keep the gut's bacterial inhabitants topped up. So treat your appendix with respect.";
            msga[gkn+58] = "amazing facts about the human body\n>>Practically everything we experience is made up of molecules. These vary in size from simple pairs of atoms, like an oxygen molecule, to complex organic structures. But the biggest molecule in nature resides in your body. It is chromosome 1. A normal human cell has 23 pairs of chromosomes in its nucleus, each a single, very long, molecule of DNA. Chromosome 1 is the biggest, containing around 10bn atoms, to pack in the amount of information that is encoded in the molecule.";
            msga[gkn+59] = "amazing facts about the human body\n>>It is hard to grasp just how small the atoms that make up your body are until you take a look at the sheer number of them. An adult is made up of around 7,000,000,000,000,000,000,000,000,000 (7 octillion) atoms.";
            msga[gkn+60] = "amazing facts about the human body\n>>It might seem hard to believe, but we have about the same number of hairs on our bodies as a chimpanzee, it's just that our hairs are useless, so fine they are almost invisible. We aren't sure quite why we lost our protective fur. It has been suggested that it may have been to help early humans sweat more easily, or to make life harder for parasites such as lice and ticks, or even because our ancestors were partly aquatic.";
            msga[gkn+61] = "amazing facts about the human body\n>>Goosepimples are a remnant of our evolutionary predecessors. They occur when tiny muscles around the base of each hair tense, pulling the hair more erect. With a decent covering of fur, this would fluff up the coat, getting more air into it, making it a better insulator. But with a human's thin body hair, it just makes our skin look strange.";
            msga[gkn+62] = "amazing facts about the human body\n>>If sci-fi movies were to be believed, terrible things would happen if your body were pushed from a spaceship without a suit. But it's mostly fiction. There would be some discomfort as the air inside the body expanded, but nothing like the exploding body parts Hollywood loves. Although liquids do boil in a vacuum, your blood is kept under pressure by your circulatory system and would be just fine. And although space is very cold, you would not lose heat particularly quickly. As Thermos flasks demonstrate, a vacuum is a great insulator.";
            msga[gkn+63] = "amazing facts about the human body\n>>The atoms that make up your body are mostly empty space, so despite there being so many of them, without that space you would compress into a tiny volume. The nucleus that makes up the vast bulk of the matter in an atom is so much smaller than the whole structure that it is comparable to the size of a fly in a cathedral. If you lost all your empty atomic space, your body would fit into a cube less than 1/500th of a centimetre on each side. Neutron stars are made up of matter that has undergone exactly this kind of compression. In a single cubic centimetre of neutron star material there are around 100m tons of matter. An entire neutron star, heavier than our sun, occupies a sphere that is roughly the size across of the Isle of Wight.";
            msga[gkn+64] = "amazing facts about the human body\n>>The atoms that make up matter never touch each other. The closer they get, the more repulsion there is between the electrical charges on their component parts. It's like trying to bring two intensely powerful magnets together, north pole to north pole. This even applies when objects appear to be in contact. When you sit on a chair, you don't touch it. You float a tiny distance above, suspended by the repulsion between atoms. This electromagnetic force is vastly stronger than the force of gravity – around a billion billion billion billion times stronger. You can demonstrate the relative strength by holding a fridge magnet near a fridge and letting go. The electromagnetic force from the tiny magnet overwhelms the gravitational attraction of the whole Earth.";
            msga[gkn+65] = "amazing facts about the human body\n>>Every atom in your body is billions of years old. Hydrogen, the most common element in the universe and a major feature of your body, was produced in the big bang 13.7bn years ago. Heavier atoms such as carbon and oxygen were forged in stars between 7bn and 12bn years ago, and blasted across space when the stars exploded. Some of these explosions were so powerful that they also produced the elements heavier than iron, which stars can't construct. This means that the components of your body are truly ancient: you are stardust.";
            msga[gkn+66] = "amazing facts about the human body\n>>One of the mysteries of science is how something as apparently solid and straightforward as your body can be made of strangely behaving quantum particles such as atoms and their constituents. If you ask most people to draw a picture of one of the atoms in their bodies, they will produce something like a miniature solar system, with a nucleus as the sun and electrons whizzing round like planets. This was, indeed, an early model of the atom, but it was realised that such atoms would collapse in an instant. This is because electrons have an electrical charge and accelerating a charged particle, which is necessary to keep it in orbit, would make it give off energy in the form of light, leaving the electron spiralling into the nucleus.";
            msga[gkn+67] = "amazing facts about the human body\n>>When you see blood oozing from a cut in your finger, you might assume that it is red because of the iron in it, rather as rust has a reddish hue. But the presence of the iron is a coincidence. The red colour arises because the iron is bound in a ring of atoms in haemoglobin called porphyrin and it's the shape of this structure that produces the colour. Just how red your haemoglobin is depends on whether there is oxygen bound to it. When there is oxygen present, it changes the shape of the porphyrin, giving the red blood cells a more vivid shade.";
            msga[gkn+68] = "amazing facts about the human body\n>>Surprisingly, not all the useful DNA in your chromosomes comes from your evolutionary ancestors – some of it was borrowed from elsewhere. Your DNA includes the genes from at least eight retroviruses. These are a kind of virus that makes use of the cell's mechanisms for coding DNA to take over a cell. At some point in human history, these genes became incorporated into human DNA. These viral genes in DNA now perform important functions in human reproduction, yet they are entirely alien to our genetic ancestry.";
            msga[gkn+69] = "amazing facts about the human body\n>>On sheer count of cells, there is more bacterial life inside you than human. There are around 10tn of your own cells, but 10 times more bacteria. Many of the bacteria that call you home are friendly in the sense that they don't do any harm. Some are beneficial.";
            msga[gkn+70] = "amazing facts about the human body\n>>Depending on how old you are, it's pretty likely that you have eyelash mites. These tiny creatures live on old skin cells and the natural oil (sebum) produced by human hair follicles. They are usually harmless, though they can cause an allergic reaction in a minority of people. Eyelash mites typically grow to a third of a millimetre and are near-transparent, so you are unlikely to see them with the naked eye. Put an eyelash hair or eyebrow hair under the microscope, though, and you may find them, as they spend most of their time right at the base of the hair where it meets the skin. Around half the population have them, a proportion that rises as we get older";
            msga[gkn+71] = "amazing facts about the human body\n>>Your eyes are very sensitive, able to detect just a few photons of light. If you take a look on a very clear night at the constellation of Andromeda, a little fuzzy patch of light is just visible with the naked eye. If you can make out that tiny blob, you are seeing as far as is humanly possible without technology. Andromeda is the nearest large galaxy to our own Milky Way. But \"near\" is a relative term in intergalactic space – the Andromeda galaxy is 2.5m light years away. When the photons of light that hit your eye began their journey, there were no human beings. We were yet to evolve. You are seeing an almost inconceivable distance and looking back in time through 2.5m years.";
            msga[gkn+72] = "amazing facts about the human body\n>>Despite what you've probably been told, you have more than five senses. Here's a simple example. Put your hand a few centimetres away from a hot iron. None of your five senses can tell you the iron will burn you. Yet you can feel that the iron is hot from a distance and won't touch it. This is thanks to an extra sense – the heat sensors in your skin. Similarly we can detect pain or tell if we are upside down.";
            msga[gkn+73] = "amazing facts about the human body\n>>quick test. Close your eyes and touch your nose. You aren't using the big five to find it, but instead proprioception. This is the sense that detects where the parts of your body are with respect to each other. It's a meta-sense, combining your brain's knowledge of what your muscles are doing with a feel for the size and shape of your body. Without using your basic five senses, you can still guide a hand unerringly to touch your nose.";
            msga[gkn+74] = "amazing facts about the human body\n>>Just like a chicken, your life started off with an egg. Not a chunky thing in a shell, but an egg nonetheless. However, there is a significant difference between a human egg and a chicken egg that has a surprising effect on your age. Human eggs are tiny. They are, after all, just a single cell and are typically around 0.2mm across – about the size of a printed full stop. Your egg was formed in your mother – but the surprising thing is that it was formed when she was an embryo. The formation of your egg, and the half of your DNA that came from your mother, could be considered as the very first moment of your existence. And it happened before your mother was born. Say your mother was 30 when she had you, then on your 18th birthday you were arguably over 48 years old.";
            msga[gkn+75] = "amazing facts about the human body\n>>We are used to thinking of genes as being the controlling factor that determines what each of us is like physically, but genes are only a tiny part of our DNA. The other 97% was thought to be junk until recently, but we now realise that epigenetics – the processes that go on outside the genes – also have a major influence on our development. Some parts act to control \"switches\" that turn genes on and off, or program the production of other key compounds. For a long time it was a puzzle how around 20,000 genes (far fewer than some breeds of rice) were enough to specify exactly what we were like. The realisation now is that the other 97% of our DNA is equally important";
            msga[gkn+76] = "amazing facts about the human body\n>>If you are like most people, you will locate your conscious mind roughly behind your eyes, as if there were a little person sitting there, steering the much larger automaton that is your body. You know there isn't really a tiny figure in there, pulling the levers, but your consciousness seems to have an independent existence, telling the rest of your body what to do.";

            msga[gkn+77] = "Alexander Graham Bell, the inventor of the telephone, never telephoned His wife or mother because they were both deaf";
            msga[gkn+78] = "Over 4 million cars in Brazil are now running on gasohol instead of petrol. Gasohol is a fuel made from sugar cane.";

            msga[gkn+79] = "When glass breaks, the cracks move at speeds of up to 3,000 miles per hour.";
            msga[gkn+80] = "If you ate too many carrots, you'd turn orange.";
            msga[gkn+81] = "The world's first University was established in Takshila, India in 700BC. More than 10,500 students from all over the world studied more than 60 subjects. The University of Nalanda built in the 4th century BC was one of the greatest achievements of ancient India in the field of education.";
            msga[gkn+82] = "A normal person will die from total lack of sleep sooner than from starvation. Death will occur about 10 days without sleep, while starvation takes a Few weeks.";

            msga[gkn+83] = "Funny and Interesting Facts\n>>A man named Charles Osborne had the hiccups for 69 years!\nA giraffe can clean its ears with its 21-inch tongue!\nThe average person laughs 10 times a day!\nAn ostrich’s eye is bigger than its brain";

            msga[gkn+84] = "Funny and Interesting Facts\n>>Butterflies taste with their feet.\nThe strongest muscle in the body is the tongue.\nA cat's urine glows under a black light.\nAn ostrich's eye is bigger than its brain.";

            msga[gkn+85] = "Funny and Interesting Facts\n>>Starfish have no brains.\nPolar bears are left-handed.";

            msga[gkn+86] = "Funny and Interesting Facts\n>>Humans and dolphins are the only species that have sex for pleasure.";

            msga[gkn+87] = "Funny and Interesting Facts\n>>The average lead pencil will draw a line 35 miles long or write approximately 50,000 English words.";

            msga[gkn+88] = "Funny and Interesting Facts\n>>More people are allergic to cow’s milk than any other food.";

            msga[gkn+89] = "Funny and Interesting Facts\n>>The average lead pencil will draw a line 35 miles long or write approximately 50,000 English words.";

            msga[gkn+90] = "Funny and Interesting Facts\n>>Honey is the only food that does not spoil. Honey found in the tombs of Egyptian pharaohs has been tasted by archaeologists and found edible.";

            msga[gkn+91] = "Funny and Interesting Facts\n>>The first known transfusion of blood was performed as early as 1667, when Jean-Baptiste, transfused two pints of blood from a sheep to a young man";

            msga[gkn+92] = "Funny and Interesting Facts\n>>Money notes are not made from paper, they are made mostly from a special blend of cotton and linen. In 1932, when a shortage of cash occurred in Tenino, Washington, USA, notes were made out of wood for a brief period.";

            msga[gkn+93] = "Funny and Interesting Facts\n>>The Grammy Awards were introduced to counter the threat of rock music. In the late 1950s, a group of record executives were alarmed by the explosive success of rock ‘n roll, considering it a threat to \"quality\" music.";

            msga[gkn+94] = "Funny and Interesting Facts\n>>Tea is said to have been discovered in 2737 BC by a Chinese emperor when some tea leaves accidentally blew into a pot of boiling water. The tea bag was introduced in 1908 by Thomas Sullivan of New York.";

            msga[gkn+95] = "Funny and Interesting Facts\n>>Over the last 150 years the average height of people in industrialised nations has increased 10 cm (about 4 inches). In the 19th century, American men were the tallest in the world, averaging 1,71m (5'6\"). Today, the average height for American men is 1,75m (5'7\"), compared to 1,77 (5'8\") for Swedes, and 1,78 (5'8.5\") for the Dutch. The tallest nation in the world is the Watusis of Burundi.";

            msga[gkn+96] = "Funny and Interesting Facts\n>>In 1955 the richest woman in the world was Mrs Hetty Green Wilks, who left an estate of $95 million in a will that was found in a tin box with four pieces of soap. Queen Elizabeth of Britain and Queen Beatrix of the Netherlands count under the 10 wealthiest women in the world.";

            msga[gkn+97] = "Funny and Interesting Facts\n>>Joseph Niepce developed the world's first photographic image in 1827. Thomas Edison and W K L Dickson introduced the film camera in 1894. But the first projection of an image on a screen was made by a German priest. In 1646, Athanasius Kircher used a candle or oil lamp to project hand-painted images onto a white screen.";

            msga[gkn+98] = "Funny and Interesting Facts\n>>In 1935 a writer named Dudley Nichols refused to accept the Oscar for his movie The Informer because the Writers Guild was on strike against the movie studios. In 1970 George C. Scott refused the Best Actor Oscar for Patton. In 1972 Marlon Brando refused the Oscar for his role in The Godfather.";

            msga[gkn+99] = "Funny and Interesting Facts\n>>The system of democracy was introduced 2 500 years ago in Athens, Greece. The oldest existing governing body operates in Althing in Iceland. It was established in 930 AD.";

            msga[gkn+100] = "Funny and Interesting Facts\n>>A person can live without food for about a month, but only about a week without water.If the amount of water in your body is reduced by just 1%, you'll feel thirsty.If it's reduced by 10%, you'll die.";

            msga[gkn+101] = "Funny and Interesting Facts\n>The final resting-place for Dr. Eugene Shoemaker - the Moon. The famed U.S. Geological Survey astronomer, trained the Apollo astronauts about craters, but never made it into space. Mr. Shoemaker had wanted to be an astronaut but was rejected because of a medical problem. His ashes were placed on board the Lunar Prospector spacecraft before it was launched on January 6, 1998. NASA crashed the probe into a crater on the moon in an attempt to learn if there is water on the moon.>";

            msga[gkn+102] = "Funny and Interesting Facts\n>>The original IBM-PCs, that had hard drives, referred to the hard drives as Winchester drives. This is due to the fact that the original Winchester drive had a model number of 3030. This is, of course, a Winchester firearm.";





wans();

line0=TTF_RenderText_Solid(font1,"DO YOU KNOW ?",textColor5);
apply_surface(260,55,line0,screen);
qder=0;
lin=0;
if(gen==0)
{
for(lop1=0;msga[ranq][lop1]!='\0';lop1++)
{

if(msga[ranq][lop1]!='\n')
{
    fflush(stdin);
    qdemo[qder]=msga[ranq][lop1];
    qder++;
    if(qder==80 ||msga[ranq][lop1+1]=='\0' )
    {
    lin++;
    }
if(lin == 1&&(qder>=80||msga[ranq][lop1+1]=='\0'))
    {

        qdemo[qder]='\0';
    line1=TTF_RenderText_Solid(font[0],qdemo,textColor);
    for(qder=strlen(qdemo);qder>=0;qder--)
    {
    qdemo[qder]='\0';
    }
    qder=0;

    }
else if(lin == 2&&(qder>=80||msga[ranq][lop1+1]=='\0'))
    {

        qdemo[qder]='\0';
    line2=TTF_RenderText_Solid(font[0],qdemo,textColor);
    for(qder=strlen(qdemo);qder>=0;qder--)
    {
    qdemo[qder]='\0';
    }
    qder=0;

    }
else if(lin == 3&&(qder>=80||msga[ranq][lop1+1]=='\0'))
    {

        qdemo[qder]='\0';
    line3=TTF_RenderText_Solid(font[0],qdemo,textColor);
    for(qder=strlen(qdemo);qder>=0;qder--)
    {
    qdemo[qder]='\0';
    }
    qder=0;

    }
else if(lin == 4&&(qder>=80||msga[ranq][lop1+1]=='\0'))
    {

        qdemo[qder]='\0';
    line4=TTF_RenderText_Solid(font[0],qdemo,textColor);
    for(qder=strlen(qdemo);qder>=0;qder--)
    {
    qdemo[qder]='\0';
    }
    qder=0;

    }
else if(lin == 5&&(qder>=80||msga[ranq][lop1+1]=='\0'))
    {

        qdemo[qder]='\0';
    line5=TTF_RenderText_Solid(font[0],qdemo,textColor);
    for(qder=strlen(qdemo);qder>=0;qder--)
    {
    qdemo[qder]='\0';
    }
    qder=0;

    }
else if(lin == 6&&(qder>=80||msga[ranq][lop1+1]=='\0'))
    {

        qdemo[qder]='\0';
    line6=TTF_RenderText_Solid(font[0],qdemo,textColor);
    for(qder=strlen(qdemo);qder>=0;qder--)
    {
    qdemo[qder]='\0';
    }
    qder=0;

    }
else if(lin == 7&&(qder>=80||msga[ranq][lop1+1]=='\0'))
    {

        qdemo[qder]='\0';
    line7=TTF_RenderText_Solid(font[0],qdemo,textColor);
    for(qder=strlen(qdemo);qder>=0;qder--)
    {
    qdemo[qder]='\0';
    }
    qder=0;

    }
else if(lin == 8&&(qder>=80||msga[ranq][lop1+1]=='\0'))
    {

        qdemo[qder]='\0';
    line8=TTF_RenderText_Solid(font[0],qdemo,textColor);
    for(qder=strlen(qdemo);qder>=0;qder--)
    {
    qdemo[qder]='\0';
    }
    qder=0;

    }
else if(lin == 9&&(qder>=80||msga[ranq][lop1+1]=='\0'))
    {

        qdemo[qder]='\0';
    line9=TTF_RenderText_Solid(font[0],qdemo,textColor);
    for(qder=strlen(qdemo);qder>=0;qder--)
    {
    qdemo[qder]='\0';
    }
    qder=0;

    }
else if(lin == 10&&(qder>=80||msga[ranq][lop1+1]=='\0'))
    {

        qdemo[qder]='\0';
    line10=TTF_RenderText_Solid(font[0],qdemo,textColor);
    for(qder=strlen(qdemo);qder>=0;qder--)
    {
    qdemo[qder]='\0';
    }
    qder=0;

    }

}
}
gen=1;
}
if(line1!=NULL)
{
    apply_surface(110,90,line1,screen);

}
if(line2!=NULL)
{
    apply_surface(110,120,line2,screen);

}
if(line3!=NULL)
{
    apply_surface(110,140,line3,screen);

}
if(line4!=NULL)
{
    apply_surface(110,160,line4,screen);

}
if(line5!=NULL)
{
    apply_surface(110,180,line5,screen);

}
if(line6!=NULL)
{
    apply_surface(110,200,line6,screen);

}
if(line7!=NULL)
{
    apply_surface(110,220,line7,screen);

}
if(line8!=NULL)
{
    apply_surface(110,240,line8,screen);

}
if(line9!=NULL)
{
    apply_surface(110,260,line9,screen);

}
if(line10!=NULL)
{
    apply_surface(110,280,line10,screen);

}

apply_surface(550,400,button,screen);
apply_surface(555,410,msg[450],screen);
if(ranq<=gkn)
{
    if(opts==0)
    {

    apply_surface(550,340,button,screen);
    apply_surface(555,350,msg[458],screen);
    }
    else
    {
        if(clkopt==0)
        {
            clkopt=1;
        if(ranq>=4)
        {

 msg[452]=TTF_RenderText_Solid(font[0],ans[ranq-1],textColor);
msg[453]=TTF_RenderText_Solid(font[0],ans[ranq-2],textColor);
msg[454]=TTF_RenderText_Solid(font[0],ans[ranq-3],textColor);
msg[455]=TTF_RenderText_Solid(font[0],ans[ranq],textColor);
        }
        else
        {
         msg[452]=TTF_RenderText_Solid(font[0],ans[ranq+1],textColor);
msg[453]=TTF_RenderText_Solid(font[0],ans[ranq+2],textColor);
msg[454]=TTF_RenderText_Solid(font[0],ans[ranq+3],textColor);
msg[455]=TTF_RenderText_Solid(font[0],ans[ranq],textColor);
        }
        }
        if(optc==0)
        {
apply_surface(110,300,msg[452],screen);
apply_surface(455,300,msg[453],screen);
apply_surface(110,330,msg[454],screen);
apply_surface(455,330,msg[455],screen);
        }
        else if(optc==1)
        {
         apply_surface(110,300,msg[452],screen);
        apply_surface(455,300,msg[453],screen);
        apply_surface(110,330,msg[455],screen);
        apply_surface(455,330,msg[454],screen);
        }
        else if(optc==2)
        {
        apply_surface(110,300,msg[452],screen);
        apply_surface(455,300,msg[455],screen);
        apply_surface(110,330,msg[453],screen);
        apply_surface(455,330,msg[454],screen);
        }
        else
        {
        apply_surface(110,300,msg[455],screen);
        apply_surface(455,300,msg[453],screen);
        apply_surface(110,330,msg[452],screen);
        apply_surface(455,330,msg[454],screen);
        }
    }
if(sans==0)
{
if(opts==0)
{

    if(slen<=0)
    {
if(msg[457]!=NULL)
{
    SDL_FreeSurface(msg[457]);
}
 msg[457]=TTF_RenderText_Solid(font[0],"write your answer here",textColor7);
}

}
else
{
 if(msg[457]!=NULL)
{
    SDL_FreeSurface(msg[457]);
}
 msg[457]=TTF_RenderText_Solid(font[0],"In the above option choose your answer",textColor7);
}
}
else
{
if(msg[457]!=NULL)
{
    SDL_FreeSurface(msg[457]);
}
 msg[457]=TTF_RenderText_Solid(font[0],ans[ranq],textColor);
}

apply_surface(110,370,msg[459],screen);
apply_surface(110,370,msg[457],screen);
apply_surface(350,400,button,screen);
if(opts==0)
{
if(msg[456]!=NULL)
{
    SDL_FreeSurface(msg[456]);
}
 msg[456]=TTF_RenderText_Solid(font[5],"Show option",textColor);
}
else
{
if(msg[456]!=NULL)
{
    SDL_FreeSurface(msg[456]);
}
 msg[456]=TTF_RenderText_Solid(font[5],"Hide option",textColor);
}
apply_surface(355,410,msg[456],screen);
apply_surface(150,400,button,screen);
apply_surface(155,410,msg[451],screen);
}
}
