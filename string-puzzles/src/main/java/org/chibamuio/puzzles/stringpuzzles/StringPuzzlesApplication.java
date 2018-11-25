package org.chibamuio.puzzles.stringpuzzles;

import org.chibamuio.puzzles.stringpuzzles.org.chibamu.puzzles.StringBootCamp;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.Bean;

@SpringBootApplication
public class StringPuzzlesApplication {

	public static void main(String[] args) {
		SpringApplication.run(StringPuzzlesApplication.class, args);
	}

	@Autowired
	StringBootCamp bootCamp;

	@Bean
	public CommandLineRunner commandLineRunner(ApplicationContext ctx) {

		return args -> {
			System.out.println(bootCamp.isPalindromic("abkba"));

			String intToStringVal = bootCamp.intToString(-5279);
			System.out.println( (Object)intToStringVal.getClass().getName());

			String number = "53589";
			String number1 = "-53589";
			String number2 = "0232";

			System.out.println(bootCamp.stringToInt(number));
			System.out.println(bootCamp.stringToInt(number1));
			System.out.println(bootCamp.stringToInt(number2));

			System.out.println('P' - 'A');
		};
	}



}
